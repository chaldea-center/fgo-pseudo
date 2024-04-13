void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  ListViewSort_o *v13; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  ListViewSort_o *v21; // x19
  struct EquipGraphListViewManager_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EB827 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_6136/*"EquipGraph"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_15602/*"WarBoardEquipGraph"*/, v10, v11, v12);
    byte_42EB827 = 1;
  }
  v13 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v13, (System_String_o *)StringLiteral_6136/*"EquipGraph"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v13;
  sub_B5D560(static_fields, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
  v21 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v21, (System_String_o *)StringLiteral_15602/*"WarBoardEquipGraph"*/, 3, 0, 0LL);
  v22 = EquipGraphListViewManager_TypeInfo->static_fields;
  v22->warBoardSortStatus = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v22->warBoardSortStatus,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
    sub_B5D560(
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
    sub_B5D69C(this, method);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  EquipGraphListViewManager__ModifyList(v9, 1, v13);
  EquipGraphListViewManager__SetMode_30704820(v9, 2, v14);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  EquipGraphListViewManager_c *v55; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v57; // x1
  struct ListViewSort_o **p_sort; // x23
  __int64 servantItemDraw; // x0
  const MethodInfo *v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct System_Int32_array *servantEquipFilterEventIdList; // x9
  struct ListViewSort_o *v71; // x8
  struct System_Int32_array *v72; // x1
  struct System_Int32_array **p_bonusEventIdList; // x0
  struct ListViewSort_o *v74; // x8
  System_Int32_array *bonusEventIdList; // x1
  PartyOrganizationListViewItem_o *v76; // x24
  EquipGraphServantItem_o *v77; // x25
  const MethodInfo *v78; // x2
  System_Int32_array **v79; // x1
  struct EquipGraphServantItem_o **p_servantItemInfo; // x27
  ListViewManager_o *v81; // x25
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  const MethodInfo *v88; // x2
  const MethodInfo *v89; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v92; // x24
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v95; // x19
  UILabel_o *monitor; // x27
  PartyListViewItem_array *v97; // x25
  System_String_o *v98; // x28
  Il2CppObject *v99; // x26
  Il2CppObject *v100; // x0
  __int64 v101; // x8
  UserServantEntity_array *v102; // x20
  unsigned __int64 v103; // x23
  UserServantEntity_o **m_Items; // x22
  UserServantEntity_o *v105; // x26
  PartyListViewItem_array *v106; // x24
  __int64 v107; // x28
  struct EquipGraphServantItem_o **v108; // x19
  int32_t memberIndex; // w25
  EquipGraphListViewItem_o *v110; // x0
  int64_t v111; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v112; // x27
  int64_t v113; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v116; // x8
  System_String_o *v117; // x21
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
  __int64 v120; // x0
  int32_t memberIdx; // [xsp+0h] [xbp-80h]
  const MethodInfo *v122; // [xsp+8h] [xbp-78h]
  struct EquipGraphServantItem_o **v123; // [xsp+18h] [xbp-68h]
  PartyListViewItem_o *v124; // [xsp+18h] [xbp-68h]
  EquipGraphListViewManager_o *v125; // [xsp+20h] [xbp-60h]
  int v126; // [xsp+28h] [xbp-58h] BYREF
  int v127; // [xsp+2Ch] [xbp-54h] BYREF

  v11 = baseDeckItemList;
  if ( (byte_42EB80F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      (_DWORD)baseDeckItemList,
      (_DWORD)partyItem,
      *(_QWORD *)&member);
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&EquipGraphListViewManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&EquipGraphServantItem_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&int_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v28, v29, v30);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v46, v47, v48);
    byte_42EB80F = 1;
  }
  this->fields.waveDeckItemList = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.waveDeckItemList,
    (System_Int32_array **)v11,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)setupInfo,
    (System_Int32_array **)method,
    v6,
    v7);
  v55 = EquipGraphListViewManager_TypeInfo;
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v55 = EquipGraphListViewManager_TypeInfo;
  }
  p_sortStatus = &v55->static_fields->sortStatus;
  v57 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v57,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
LABEL_17:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    v71 = this->fields.sort;
    if ( servantEquipFilterEventIdList )
      LOBYTE(servantEquipFilterEventIdList) = servantEquipFilterEventIdList->max_length != 0;
    if ( !v71 )
      goto LABEL_71;
    v71->fields.isBonusKind = (char)servantEquipFilterEventIdList;
    v72 = setupInfo->fields.servantEquipFilterEventIdList;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    this->fields.bonusEventIdList = v72;
  }
  else
  {
    v74 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v74 )
      goto LABEL_71;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    v72 = 0LL;
    v74->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)p_bonusEventIdList,
    (System_Int32_array **)v72,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
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
  v76 = (PartyOrganizationListViewItem_o *)servantItemDraw;
  if ( !*(_BYTE *)(servantItemDraw + 128) )
  {
    v125 = this;
    v77 = (EquipGraphServantItem_o *)sub_B5D694(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v77, v76, v78);
    v79 = (System_Int32_array **)v77;
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v77;
    v81 = (ListViewManager_o *)this;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantItemInfo, v79, v82, v83, v84, v85, v86, v87);
    servantItemDraw = (__int64)this->fields.servantItemDraw;
    if ( !servantItemDraw )
      goto LABEL_71;
    EquipGraphServantItemDraw__SetItem(
      (EquipGraphServantItemDraw_o *)servantItemDraw,
      this->fields.servantItemInfo,
      v88);
    servantItemDraw = (__int64)this->fields.servantItemDraw;
    if ( !servantItemDraw )
      goto LABEL_71;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)servantItemDraw, 0, v89);
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
    v92 = servantItemDraw;
    this->fields.maxWave = *(_QWORD *)&v11->max_length;
    servantItemDraw = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !servantItemDraw )
      goto LABEL_71;
    servantItemDraw = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)servantItemDraw,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !servantItemDraw )
      goto LABEL_71;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)servantItemDraw, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v95 = ServantEquipList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v123 = p_servantItemInfo;
      monitor = (UILabel_o *)v81[1].monitor;
      v97 = v11;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantItemDraw = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
      if ( !v95 )
        goto LABEL_71;
      v98 = (System_String_o *)servantItemDraw;
      v127 = *(_QWORD *)&v95->max_length;
      servantItemDraw = j_il2cpp_value_box_0(int_TypeInfo, &v127);
      if ( !v92 )
        goto LABEL_71;
      v99 = (Il2CppObject *)servantItemDraw;
      v126 = *(_DWORD *)(v92 + 148);
      v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v126);
      servantItemDraw = (__int64)System_String__Format_44573324(v98, v99, v100, 0LL);
      if ( !monitor )
        goto LABEL_71;
      UILabel__set_text(monitor, (System_String_o *)servantItemDraw, 0LL);
      v11 = v97;
      p_servantItemInfo = v123;
      v81 = (ListViewManager_o *)v125;
    }
    servantItemDraw = (__int64)v81[1].fields.emptyMessageLabel;
    if ( !servantItemDraw )
      goto LABEL_71;
    servantItemDraw = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantItemDraw, 0LL);
    if ( !*p_sort )
      goto LABEL_71;
    if ( !servantItemDraw )
      goto LABEL_71;
    v124 = partyItem;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantItemDraw, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList(v81, 0, 0LL);
    if ( !v95 )
      goto LABEL_71;
    v101 = *(_QWORD *)&v95->max_length;
    if ( (int)v101 >= 1 )
    {
      v102 = v95;
      v103 = 0LL;
      m_Items = v95->m_Items;
      while ( 1 )
      {
        if ( v103 >= (unsigned int)v101 )
        {
          v120 = sub_B5D6C8(servantItemDraw);
          sub_B5D668(v120, 0LL);
        }
        servantItemDraw = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v105 = m_Items[v103];
        v106 = v11;
        servantItemDraw = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)servantItemDraw, v60);
        if ( !*p_servantItemInfo )
          break;
        v107 = servantItemDraw;
        v108 = p_servantItemInfo;
        memberIndex = v125->fields.memberIndex;
        v110 = (EquipGraphListViewItem_o *)sub_B5D694(EquipGraphListViewItem_TypeInfo);
        memberIdx = memberIndex;
        v81 = (ListViewManager_o *)v125;
        v111 = v107;
        v112 = (EventMissionProgressRequest_Argument_ProgressData_o *)v110;
        v11 = v106;
        EquipGraphListViewItem___ctor(v110, v103, v105, v111, v113, v106, v124, setupInfo, memberIdx, v122);
        servantItemDraw = (__int64)v125->fields.itemList;
        if ( !servantItemDraw )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantItemDraw,
          v112,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v101) = v102->max_length;
        ++v103;
        p_servantItemInfo = v108;
        if ( (__int64)v103 >= (int)v101 )
          goto LABEL_61;
      }
LABEL_71:
      sub_B5D69C(servantItemDraw, v60);
    }
LABEL_61:
    itemList = v81->fields.itemList;
    if ( !itemList )
      goto LABEL_71;
    emptyMessageLabel = v81->fields.emptyMessageLabel;
    v116 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v117 = *v116;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantItemDraw = (__int64)LocalizationManager__Get(v117, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_71;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)servantItemDraw, 0LL);
    EquipGraphListViewManager__RefrashListDisp((EquipGraphListViewManager_o *)v81, v118);
    ListViewManager__SortItem(v81, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage((EquipGraphListViewManager_o *)v81, v119);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__CreateList_30700572(
        EquipGraphListViewManager_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  EquipGraphListViewManager_c *v48; // x0
  struct ListViewSort_o *warBoardSortStatus; // x1
  struct ListViewSort_o **p_sort; // x22
  __int64 MemberItem; // x0
  const MethodInfo *v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct System_Int32_array *servantEquipFilterEventIdList; // x9
  struct ListViewSort_o *sort; // x8
  struct System_Int32_array *v63; // x1
  struct System_Int32_array **p_bonusEventIdList; // x0
  struct ListViewSort_o *v65; // x8
  System_Int32_array *bonusEventIdList; // x1
  PartyOrganizationListViewItem_o *v67; // x23
  EquipGraphServantItem_o *v68; // x24
  const MethodInfo *v69; // x2
  struct EquipGraphServantItem_o **p_servantItemInfo; // x23
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x2
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  __int64 v81; // x24
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v84; // x25
  UILabel_o *v85; // x26
  System_String_o *v86; // x27
  Il2CppObject *v87; // x28
  Il2CppObject *v88; // x0
  __int64 v89; // x8
  UserServantEntity_array *v90; // x24
  unsigned __int64 v91; // x22
  UserServantEntity_o **m_Items; // x28
  UserServantEntity_o *v93; // x25
  int64_t v94; // x27
  EquipGraphListViewItem_o *v95; // x26
  int64_t v96; // x4
  const MethodInfo *v97; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v100; // x8
  System_String_o *v101; // x21
  const MethodInfo *v102; // x1
  const MethodInfo *v103; // x1
  __int64 v104; // x0
  WarBoardPartyListViewItem_o *partyItema; // [xsp+8h] [xbp-68h]
  EquipGraphListViewManager_o *v106; // [xsp+10h] [xbp-60h]
  int v107; // [xsp+18h] [xbp-58h] BYREF
  int v108; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42EB810 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)partyItem, member, setupInfo);
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EquipGraphListViewManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&EquipGraphServantItem_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v45, v46, v47);
    byte_42EB810 = 1;
  }
  v48 = EquipGraphListViewManager_TypeInfo;
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v48 = EquipGraphListViewManager_TypeInfo;
  }
  warBoardSortStatus = v48->static_fields->warBoardSortStatus;
  this->fields.sort = warBoardSortStatus;
  p_sort = &this->fields.sort;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
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
    v63 = setupInfo->fields.servantEquipFilterEventIdList;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    this->fields.bonusEventIdList = v63;
  }
  else
  {
    v65 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v65 )
      goto LABEL_70;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    v63 = 0LL;
    v65->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)p_bonusEventIdList,
    (System_Int32_array **)v63,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
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
  v67 = (PartyOrganizationListViewItem_o *)MemberItem;
  if ( !*(_BYTE *)(MemberItem + 128) )
  {
    v68 = (EquipGraphServantItem_o *)sub_B5D694(EquipGraphServantItem_TypeInfo);
    EquipGraphServantItem___ctor(v68, v67, v69);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v68;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.servantItemInfo,
      (System_Int32_array **)v68,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
    MemberItem = (__int64)this->fields.servantItemDraw;
    if ( !MemberItem )
      goto LABEL_70;
    EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)MemberItem, this->fields.servantItemInfo, v77);
    MemberItem = (__int64)this->fields.servantItemDraw;
    if ( !MemberItem )
      goto LABEL_70;
    EquipGraphServantItemDraw__SetInput((EquipGraphServantItemDraw_o *)MemberItem, 0, v78);
    MemberItem = (__int64)UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_70;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v81 = MemberItem;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    MemberItem = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MemberItem )
      goto LABEL_70;
    partyItema = partyItem;
    MemberItem = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)MemberItem,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MemberItem )
      goto LABEL_70;
    ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)MemberItem, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v84 = ServantEquipList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v106 = this;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v85 = this->fields.infoDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      MemberItem = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
      if ( !v84 )
        goto LABEL_70;
      v86 = (System_String_o *)MemberItem;
      v108 = *(_QWORD *)&v84->max_length;
      MemberItem = j_il2cpp_value_box_0(int_TypeInfo, &v108);
      if ( !v81 )
        goto LABEL_70;
      v87 = (Il2CppObject *)MemberItem;
      v107 = *(_DWORD *)(v81 + 148);
      v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
      MemberItem = (__int64)System_String__Format_44573324(v86, v87, v88, 0LL);
      if ( !v85 )
        goto LABEL_70;
      UILabel__set_text(v85, (System_String_o *)MemberItem, 0LL);
      this = v106;
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
    if ( !v84 )
      goto LABEL_70;
    v89 = *(_QWORD *)&v84->max_length;
    if ( (int)v89 >= 1 )
    {
      v90 = v84;
      v91 = 0LL;
      m_Items = v84->m_Items;
      while ( 1 )
      {
        if ( v91 >= (unsigned int)v89 )
        {
          v104 = sub_B5D6C8(MemberItem);
          sub_B5D668(v104, 0LL);
        }
        MemberItem = (__int64)*p_servantItemInfo;
        if ( !*p_servantItemInfo )
          break;
        v93 = m_Items[v91];
        MemberItem = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)MemberItem, v52);
        if ( !*p_servantItemInfo )
          break;
        v94 = MemberItem;
        v95 = (EquipGraphListViewItem_o *)sub_B5D694(EquipGraphListViewItem_TypeInfo);
        EquipGraphListViewItem___ctor_30685628(v95, v91, v93, v94, v96, partyItema, setupInfo, v97);
        this = v106;
        MemberItem = (__int64)v106->fields.itemList;
        if ( !MemberItem )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MemberItem,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v95,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v89) = v90->max_length;
        if ( (__int64)++v91 >= (int)v89 )
          goto LABEL_59;
      }
LABEL_70:
      sub_B5D69C(MemberItem, v52);
    }
LABEL_59:
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_70;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v100 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    v101 = *v100;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    MemberItem = (__int64)LocalizationManager__Get(v101, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_70;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)MemberItem, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v102);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v103);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  EquipGraphListViewManager_c *v4; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_42EB80B & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewManager_TypeInfo, v1, v2, v3);
    byte_42EB80B = 1;
  }
  v4 = EquipGraphListViewManager_TypeInfo;
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v4 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v4->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__DeleteContinueData(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_B5D69C(sortStatus, v1);
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
    sub_B5D69C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int64_t Instance; // x0
  const MethodInfo *v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct EquipGraphListViewItem_o *selectItem; // x8
  int64_t v45; // x2
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x27
  __int64 v49; // x10
  int klass_high; // w9
  int32_t baseCost; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v53; // x21
  _BOOL8 v54; // x0
  __int64 v55; // x1
  void *v56; // x8
  __int64 v57; // x11
  __int64 v58; // x11
  EquipGraphListViewObject_o *v59; // x21
  const MethodInfo *v60; // x1
  int v61; // w2
  __int64 v62; // x3
  struct PartyListViewItem_array **p_waveDeckItemList; // x20
  struct PartyListViewItem_array *v64; // x26
  __int64 v65; // x8
  unsigned __int64 v66; // x27
  PartyListViewItem_o *v67; // x20
  int32_t i; // w21
  struct EquipGraphListViewItem_o *v69; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v71; // x22
  __int64 v72; // x23
  __int64 v73; // x24
  int v74; // w23
  struct PartyListViewItem_array *waveDeckItemList; // x9
  int v76; // w10
  struct PartyListViewItem_array *v77; // x8
  int v78; // w9
  struct EquipGraphListViewItem_o *v79; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v82; // q1
  PartyListViewItem_o *v83; // x20
  _BOOL8 v84; // x0
  __int64 v85; // x1
  const MethodInfo *v86; // x4
  EquipGraphListViewItem_o *current; // x22
  __int64 v88; // x10
  UnityEngine_Object_o *viewObject; // x23
  _BOOL8 v90; // x0
  __int64 v91; // x1
  struct ListViewObject_o *v92; // x8
  __int64 v93; // x11
  __int64 v94; // x11
  EquipGraphListViewObject_o *v95; // x22
  const MethodInfo *v96; // x1
  int v97; // w2
  __int64 v98; // x3
  struct EquipGraphListViewItem_o *v99; // x8
  struct EquipGraphListViewItem_o *v100; // x8
  struct ServantEntity_o *v101; // x10
  struct UserServantEntity_o *v102; // x8
  __int128 v103; // q1
  EquipGraphServantItem_o *servantItemInfo; // x20
  const MethodInfo *v105; // x2
  const MethodInfo *v106; // x2
  struct EquipGraphListViewItem_o *v107; // x8
  UnityEngine_Object_o *v108; // x20
  struct EquipGraphListViewItem_o *v109; // x8
  EquipGraphListViewObject_o *v110; // x20
  __int64 v111; // x10
  const MethodInfo *v112; // x1
  int v113; // w2
  __int64 v114; // x3
  System_Action_o *selectItemCallbackFunc; // x20
  __int64 v116; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+10h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v118; // [xsp+38h] [xbp-C8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v121; // [xsp+90h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_42EB81D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13, v14);
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&EquipGraphListViewObject_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v33, v34, v35);
    byte_42EB81D = 1;
  }
  memset(&v121, 0, sizeof(v121));
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v64 = *p_waveDeckItemList;
        if ( !*p_waveDeckItemList )
          goto LABEL_131;
        v65 = *(_QWORD *)&v64->max_length;
        if ( (int)v65 >= 1 )
        {
          v66 = 0LL;
          do
          {
            if ( v66 >= (unsigned int)v65 )
              goto LABEL_136;
            v67 = v64->m_Items[v66];
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
              if ( !v67 )
                goto LABEL_131;
              Instance = (int64_t)PartyListViewItem__GetMember(v67, i, 0LL);
              v69 = this->fields.selectItem;
              if ( !v69 )
                goto LABEL_131;
              servantEntity = v69->fields.servantEntity;
              if ( !servantEntity )
                goto LABEL_131;
              v71 = (PartyOrganizationListViewItem_o *)Instance;
              v73 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
              v72 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v122.fields.currentCryptoKey = v73;
              *(_QWORD *)&v122.fields.fakeValue = v72;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v122, 0LL);
              if ( !v71 )
                goto LABEL_131;
              v74 = Instance;
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v71, 0LL);
              if ( v74 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(EquipSvtId, 0LL) )
                PartyListViewItem__SetEquip(v67, i, 0LL, 0LL);
            }
            LODWORD(v65) = v64->max_length;
            ++v66;
          }
          while ( (__int64)v66 < (int)v65 );
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
        Instance = EquipGraphServantItem__get_EquipUserSvtId((EquipGraphServantItem_o *)Instance, v37);
        selectItem = this->fields.selectItem;
        if ( !selectItem )
          goto LABEL_131;
        v45 = Instance;
      }
      else
      {
        v45 = 0LL;
      }
      waveDeckItemList = this->fields.waveDeckItemList;
      if ( !waveDeckItemList )
LABEL_131:
        sub_B5D69C(Instance, v37);
      v76 = selectItem->fields._OrganizedWave_k__BackingField - 1;
      if ( v76 >= waveDeckItemList->max_length )
      {
LABEL_136:
        v116 = sub_B5D6C8(Instance);
        sub_B5D668(v116, 0LL);
      }
      Instance = (int64_t)waveDeckItemList->m_Items[v76];
      if ( !Instance )
        goto LABEL_131;
      p_waveDeckItemList = &this->fields.waveDeckItemList;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)Instance, selectItem->fields.wearerMember, v45, 0LL);
    }
    v77 = *p_waveDeckItemList;
    if ( !*p_waveDeckItemList )
      goto LABEL_131;
    v78 = this->fields.partyNumber - 1;
    if ( v78 < v77->max_length )
    {
      v79 = this->fields.selectItem;
      if ( v79 )
      {
        userSvtEntity = v79->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          memberIndex = this->fields.memberIndex;
          v82 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          v83 = v77->m_Items[v78];
          *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v120.fields.fakeValue = v82;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v119 = v120;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v119, 0LL);
          if ( v83 )
          {
            PartyListViewItem__SetEquip(v83, memberIndex, Instance, 0LL);
            Instance = (int64_t)this->fields.itemList;
            if ( Instance )
            {
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                &v118,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
                (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v121 = v118;
              while ( 1 )
              {
                v84 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v121,
                        (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                if ( !v84 )
                  break;
                current = (EquipGraphListViewItem_o *)v121.fields.current;
                if ( !v121.fields.current
                  || (v88 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v121.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v88)
                  || (EquipGraphListViewItem_c *)v121.fields.current->klass->_2.typeHierarchy[v88 - 1] != EquipGraphListViewItem_TypeInfo )
                {
                  sub_B5D69C(v84, v85);
                }
                if ( BYTE1(v121.fields.current[9].klass) )
                  LOWORD(v121.fields.current[9].klass) = 0;
                EquipGraphListViewItem__UpdateWaveBattleInfo(
                  current,
                  this->fields.waveDeckItemList,
                  v83,
                  this->fields.memberIndex,
                  v86);
                viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v90 = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
                if ( v90 )
                {
                  v92 = current->fields.viewObject;
                  if ( !v92
                    || (v93 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                        *(&v92->klass->_2.bitflags2 + 1) < (unsigned int)v93)
                    || (EquipGraphListViewObject_c *)v92->klass->_2.typeHierarchy[v93 - 1] != EquipGraphListViewObject_TypeInfo )
                  {
                    sub_B5D69C(v90, v91);
                  }
                  v94 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v92->klass->_2.bitflags2 + 1) >= (unsigned int)v94 )
                  {
                    if ( (EquipGraphListViewObject_c *)v92->klass->_2.typeHierarchy[v94 - 1] == EquipGraphListViewObject_TypeInfo )
                      v95 = (EquipGraphListViewObject_o *)current->fields.viewObject;
                    else
                      v95 = 0LL;
                  }
                  else
                  {
                    v95 = 0LL;
                  }
                  UnityEngine_Vector3__get_zero(0LL);
                  if ( (byte_42EB830 & 1) == 0 )
                  {
                    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, (_BYTE)v96, v97, v98);
                    byte_42EB830 = 1;
                  }
                  EquipGraphListViewObject__SetupDisp(v95, v96);
                }
              }
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v121,
                (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              this->fields.baseCost = v83->fields.cost;
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v120,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v121.fields.current = (Il2CppObject *)v120.fields.fakeValue;
  *(_OWORD *)&v121.fields.list = *(_OWORD *)&v120.fields.currentCryptoKey;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v121,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v46 )
      break;
    v48 = v121.fields.current;
    if ( !v121.fields.current
      || (v49 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v121.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v49)
      || (EquipGraphListViewItem_c *)v121.fields.current->klass->_2.typeHierarchy[v49 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B5D69C(v46, v47);
    }
    if ( BYTE1(v121.fields.current[9].klass) )
    {
      BYTE1(v121.fields.current[9].klass) = 0;
      klass_high = HIDWORD(v48[9].klass);
      if ( klass_high != this->fields.memberIndex && (klass_high & 0x80000000) == 0 )
      {
        baseCost = this->fields.baseCost;
        goto LABEL_25;
      }
      if ( SHIDWORD(v48[14].monitor) > 0 || LOBYTE(v48[15].monitor) )
      {
        baseCost = this->fields.baseCost;
        if ( (klass_high & 0x80000000) != 0 )
        {
          LODWORD(monitor) = 0;
          goto LABEL_28;
        }
LABEL_25:
        monitor = v48[7].monitor;
        if ( monitor )
          LODWORD(monitor) = monitor[38];
LABEL_28:
        this->fields.baseCost = (_DWORD)monitor + baseCost;
        v53 = (UnityEngine_Object_o *)v48[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v54 = UnityEngine_Object__op_Inequality(v53, 0LL, 0LL);
        if ( v54 )
        {
          v56 = v48[6].monitor;
          if ( !v56
            || (v57 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v56 + 300LL) < (unsigned int)v57)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v56 + 200LL) + 8 * v57 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B5D69C(v54, v55);
          }
          v58 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v56 + 300LL) >= (unsigned int)v58 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v56 + 200LL) + 8 * v58 - 8) == EquipGraphListViewObject_TypeInfo )
              v59 = (EquipGraphListViewObject_o *)v48[6].monitor;
            else
              v59 = 0LL;
          }
          else
          {
            v59 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_42EB830 & 1) == 0 )
          {
            sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, (_BYTE)v60, v61, v62);
            byte_42EB830 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v59, v60);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v121,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_103:
  v99 = this->fields.selectItem;
  if ( !v99 )
    goto LABEL_131;
  v99->fields.isBase = 1;
  v100 = this->fields.selectItem;
  if ( !v100 )
    goto LABEL_131;
  if ( (v100->fields.wearerMember & 0x80000000) != 0 )
  {
    LODWORD(v101) = 0;
  }
  else
  {
    v101 = v100->fields.servantEntity;
    if ( v101 )
      LODWORD(v101) = v101->fields.cost;
  }
  this->fields.baseCost -= (int)v101;
  v102 = v100->fields.userSvtEntity;
  if ( !v102 )
    goto LABEL_131;
  v103 = *(_OWORD *)&v102->fields.id.fields.fakeValue;
  servantItemInfo = this->fields.servantItemInfo;
  *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&v102->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v120.fields.fakeValue = v103;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v117 = v120;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v117, 0LL);
  if ( !servantItemInfo )
    goto LABEL_131;
  EquipGraphServantItem__SetEquipTarget(servantItemInfo, Instance, v105);
  Instance = (int64_t)this->fields.servantItemDraw;
  if ( !Instance )
    goto LABEL_131;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)Instance, this->fields.servantItemInfo, v106);
  v107 = this->fields.selectItem;
  if ( !v107 )
    goto LABEL_131;
  v108 = (UnityEngine_Object_o *)v107->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v109 = this->fields.selectItem;
    if ( v109 )
    {
      v110 = (EquipGraphListViewObject_o *)v109->fields.viewObject;
      if ( v110 )
      {
        v111 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v110->klass->_2.bitflags2 + 1) >= (unsigned int)v111
          && (EquipGraphListViewObject_c *)v110->klass->_2.typeHierarchy[v111 - 1] == EquipGraphListViewObject_TypeInfo )
        {
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_42EB830 & 1) == 0 )
          {
            sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, (_BYTE)v112, v113, v114);
            byte_42EB830 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v110, v112);
          goto LABEL_127;
        }
      }
    }
    goto LABEL_131;
  }
LABEL_127:
  EquipGraphListViewManager__RefrashListDisp(this, v37);
LABEL_128:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v38, v39, v40, v41, v42, v43);
    System_Action__Invoke(selectItemCallbackFunc, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__EndSelectFilterKind(
        EquipGraphListViewManager_o *this,
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
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EB81F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EB81F = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v12);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu(Instance, v14, 0LL);
}


void __fastcall EquipGraphListViewManager__EndSelectSortKind(
        EquipGraphListViewManager_o *this,
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
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42EB823 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EB823 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  CommonUI__CloseServantSortSelectMenu(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EquipGraphListViewManager__GetAmountSortValue(
        EquipGraphListViewManager_o *this,
        int32_t svtId,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v25; // x19
  Il2CppObject *current; // x8
  __int64 v27; // x11
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42EB826 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    byte_42EB826 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v25 = 0LL;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v31 )
      break;
    current = v34.fields.current;
    if ( !v34.fields.current
      || (v27 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v34.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v27)
      || (EquipGraphListViewItem_c *)v34.fields.current->klass->_2.typeHierarchy[v27 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B5D69C(v31, v32);
    }
    if ( (EquipGraphListViewItem_c *)v34.fields.current->klass->_2.typeHierarchy[*(&EquipGraphListViewItem_TypeInfo->_2.bitflags2
                                                                                 + 1)
                                                                               - 1] != EquipGraphListViewItem_TypeInfo )
      current = 0LL;
    klass = current[7].klass;
    if ( !klass )
      sub_B5D69C(v31, v32);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v35.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v35.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v35, 0LL) == svtId )
      ++v25;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v25;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetItem(
        EquipGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EB812 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42EB812 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (EquipGraphListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == EquipGraphListViewItem_TypeInfo )
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
    sub_B5D69C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall EquipGraphListViewManager__GetSelect(EquipGraphListViewManager_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x11
  int32_t klass_high; // w19
  int v22; // w20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB81A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14, v15, v16);
    byte_42EB81A = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    if ( !v24.fields.current
      || (v20 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v24.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v20)
      || (EquipGraphListViewItem_c *)v24.fields.current->klass->_2.typeHierarchy[v20 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B5D69C(v18, v19);
    }
    if ( BYTE1(v24.fields.current[9].klass) )
    {
      klass_high = HIDWORD(v24.fields.current[1].klass);
      v22 = 3;
      goto LABEL_12;
    }
  }
  klass_high = 0;
  v22 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v22 + 1) >> 2 )
    return klass_high;
  else
    return -1;
}


EquipGraphListViewItem_o *__fastcall EquipGraphListViewManager__GetSelectItem(
        EquipGraphListViewManager_o *this,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x19
  __int64 v21; // x10
  char v22; // w20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB81B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14, v15, v16);
    byte_42EB81B = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current
      || (v21 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v24.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21)
      || (EquipGraphListViewItem_c *)v24.fields.current->klass->_2.typeHierarchy[v21 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B5D69C(v18, v19);
    }
    if ( BYTE1(v24.fields.current[9].klass) )
    {
      v22 = 2;
      goto LABEL_12;
    }
  }
  v22 = 0;
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( ((v22 + 2) & 3) != 0 )
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
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  Il2CppType v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42EB814 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42EB814 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (EquipGraphListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != EquipGraphListViewItem_TypeInfo )
      {
        break;
      }
      klass = v43[1].klass;
      if ( klass && v43[1].fields.isTerminationSpace )
      {
        if ( BYTE5(v43[1].fields.sortStr1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v34, v35, v36, v37, v38, v39);
    *unchoiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v51;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


bool __fastcall EquipGraphListViewManager__GetSwapLockList(
        EquipGraphListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  Il2CppType v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42EB813 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42EB813 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (EquipGraphListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != EquipGraphListViewItem_TypeInfo )
      {
        break;
      }
      klass = v43[1].klass;
      if ( klass && v43[1].fields.isTermination )
      {
        if ( BYTE4(v43[1].fields.sortStr1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v34, v35, v36, v37, v38, v39);
    *unlockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v51;
    sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  EquipGraphListViewManager_c *v4; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_42EB80C & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewManager_TypeInfo, v1, v2, v3);
    byte_42EB80C = 1;
  }
  v4 = EquipGraphListViewManager_TypeInfo;
  if ( (BYTE3(EquipGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipGraphListViewManager_TypeInfo);
    v4 = EquipGraphListViewManager_TypeInfo;
  }
  sortStatus = v4->static_fields->sortStatus;
  if ( !sortStatus
    || (ListViewSort__InitLoad(sortStatus, 0LL),
        (sortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_B5D69C(sortStatus, v1);
  }
  ListViewSort__InitLoad(sortStatus, 0LL);
}


void __fastcall EquipGraphListViewManager__ModifyList(
        EquipGraphListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  unsigned int v27; // w27
  int64_t v28; // x26
  __int64 v29; // x8
  System_Int32_array ***v30; // x26
  __int64 v31; // t1
  __int128 v32; // q0
  int64_t v33; // x22
  unsigned __int64 v34; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v35; // x23
  EquipGraphListViewItem_o *v36; // x23
  __int64 v37; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v39; // q0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  const MethodInfo *v47; // x1
  __int64 v48; // x0
  unsigned __int64 v49; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v50; // x20
  ListViewItem_o *v51; // x20
  __int64 v52; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v55; // [xsp+10h] [xbp-C0h]
  int64_t v56; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+60h] [xbp-70h]

  if ( (byte_42EB811 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, (_DWORD)method, v3);
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EB811 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v55 = *(_QWORD *)(Instance + 24);
  if ( (int)v55 >= 1 )
  {
    if ( !(_DWORD)v55 )
    {
LABEL_34:
      v48 = sub_B5D6C8(Instance);
      sub_B5D668(v48, 0LL);
    }
    v27 = 0;
    v56 = Instance;
    while ( 1 )
    {
      v28 = Instance + 8LL * (int)v27;
      v31 = *(_QWORD *)(v28 + 32);
      v30 = (System_Int32_array ***)(v28 + 32);
      v29 = v31;
      if ( !v31 )
        break;
      v32 = *(_OWORD *)(v29 + 32);
      *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
      *(_OWORD *)&v59.fields.fakeValue = v32;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v58 = v59;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v58, 0LL);
      if ( (int)size >= 1 )
      {
        v33 = Instance;
        v34 = 0LL;
        while ( 1 )
        {
          v35 = this->fields.itemList;
          if ( !v35 )
            goto LABEL_52;
          if ( v34 >= (unsigned int)v35->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v36 = (EquipGraphListViewItem_o *)v35->fields._items->m_Items[v34];
          if ( !v36 )
            goto LABEL_52;
          v37 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v36->klass->_2.bitflags2 + 1) < (unsigned int)v37
            || (EquipGraphListViewItem_c *)v36->klass->_2.typeHierarchy[v37 - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userSvtEntity = v36->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v39 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v59.fields.fakeValue = v39;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v57 = v59;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v57, 0LL);
            if ( Instance == v33 )
              break;
          }
          if ( (__int64)++v34 >= size )
            goto LABEL_32;
        }
        if ( v27 >= *(_DWORD *)(v56 + 24) )
          goto LABEL_34;
        v46 = *v30;
        v36->fields.userSvtEntity = (struct UserServantEntity_o *)*v30;
        sub_B5D560((BattleServantConfConponent_o *)&v36->fields.userSvtEntity, v46, v40, v41, v42, v43, v44, v45);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem(v36, v24);
          EquipGraphListViewItem__ModifyChoiceItem(v36, v47);
        }
      }
LABEL_32:
      Instance = v56;
      if ( (int)++v27 >= (int)v55 )
        goto LABEL_35;
      if ( v27 >= *(_DWORD *)(v56 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B5D69C(Instance, v24);
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v49 = 0LL;
    while ( 1 )
    {
      v50 = this->fields.itemList;
      if ( !v50 )
        goto LABEL_52;
      if ( v49 >= (unsigned int)v50->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v51 = v50->fields._items->m_Items[v49];
      if ( v51 )
      {
        v52 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v51->klass->_2.bitflags2 + 1) >= (unsigned int)v52
          && (EquipGraphListViewItem_c *)v51->klass->_2.typeHierarchy[v52 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v51->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v51->fields.viewObject;
            if ( !Instance )
              goto LABEL_52;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v51, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v49 >= size )
        return;
    }
  }
}


void __fastcall EquipGraphListViewManager__OnClickBonusFilterKind(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  System_Int32_array *bonusEventIdList; // x1

  if ( (byte_42EB821 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB821 = 1;
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
      sub_B5D69C(0LL, v5);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(this, method);
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EB81E & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EquipGraphListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EB81E = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantFilterSelectMenu_18209116(v16, 5, sort, (ListViewManager_o *)this, v17, -1, 0LL);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    EquipGraphListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickSortAscendingOrder(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EB824 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB824 = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickSortKind(EquipGraphListViewManager_o *this, const MethodInfo *method)
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
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantSortSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EB822 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EquipGraphListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EB822 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantSortSelectMenu(v16, 4, sort, 0, v17, 0LL);
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
    sub_B5D69C(this, obj);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  callbackFunc = v4->fields.callbackFunc;
  v4->fields.callbackFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EB819 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB819 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall EquipGraphListViewManager__RefrashListDisp(EquipGraphListViewManager_o *this, const MethodInfo *method)
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
  System_String_o *ObjectList; // x0
  __int64 v24; // x1
  int klass; // w8
  System_String_o *v26; // x20
  __int64 v27; // x21
  UnityEngine_Object_o *infoData2Label; // x20
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t baseCost; // w8
  int v32; // w22
  UILabel_o *v33; // x20
  System_String_o **v34; // x8
  System_String_o *v35; // x21
  System_String_o *v36; // x21
  Il2CppObject *v37; // x22
  Il2CppObject *v38; // x0
  int32_t maxCost; // [xsp+8h] [xbp-28h] BYREF
  int v40; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EB815 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12618/*"SUM_OVER_INFO"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v20, v21, v22);
    byte_42EB815 = 1;
  }
  ObjectList = (System_String_o *)EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_26;
  klass = (int)ObjectList[1].klass;
  v26 = ObjectList;
  if ( klass >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( klass <= (unsigned int)v27 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = *(System_String_o **)(*(_QWORD *)&v26->fields + 8 * v27 + 32);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_System_IConvertible_ToSByte.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_IConvertible_ToByte.methodPtr);
      klass = (int)v26[1].klass;
      if ( (int)++v27 >= klass )
        goto LABEL_10;
    }
LABEL_26:
    sub_B5D69C(ObjectList, v24);
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
    v32 = (_DWORD)equipServantEntity + baseCost;
    v33 = this->fields.infoData2Label;
    v34 = (int)equipServantEntity + baseCost <= this->fields.maxCost
        ? (System_String_o **)&StringLiteral_12617/*"SUM_INFO"*/
        : (System_String_o **)&StringLiteral_12618/*"SUM_OVER_INFO"*/;
    v35 = *v34;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get(v35, 0LL);
    v40 = v32;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    maxCost = this->fields.maxCost;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost);
    ObjectList = System_String__Format_44573324(v36, v37, v38, 0LL);
    if ( !v33 )
      goto LABEL_26;
    UILabel__set_text(v33, ObjectList, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EB817 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_EquipGraphListViewManager_OnMoveEnd__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EB817 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      EquipGraphListViewObject__Init(
        (EquipGraphListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_30705080(
        EquipGraphListViewManager_o *this,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EB818 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_EquipGraphListViewManager_OnMoveEnd__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EB818 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      EquipGraphListViewObject__Init(
        (EquipGraphListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  struct EquipGraphListViewItem_o **p_selectItem; // x26
  BattleServantConfConponent_o *p_selectItemCallbackFunc; // x22
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  __int64 servantItemInfo; // x0
  const MethodInfo *v107; // x1
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct ListViewObject_o *viewObject; // x9
  __int64 v110; // x12
  EquipGraphListViewObject_o *v111; // x24
  const MethodInfo *v112; // x2
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v114; // w9
  struct EquipGraphListViewItem_o *v115; // x8
  int32_t wearerMember; // w11
  int32_t baseCost; // w9
  int32_t *p_baseCost; // x10
  _BOOL4 IsClearedWave_k__BackingField; // w20
  _QWORD *v120; // x0
  System_Reflection_MethodBase_o *v121; // x0
  const MethodInfo *v122; // x2
  struct EquipGraphServantItem_o *v123; // x8
  struct PartyListViewItem_array *v124; // x8
  int v125; // w10
  Il2CppClass **v126; // x8
  Il2CppClass *v127; // x21
  int events; // w20
  struct EquipGraphServantItem_o *v129; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v132; // x21
  System_String_o *v133; // x22
  NotificationDialog_ClickDelegate_o *v134; // x23
  struct ServantEntity_o *servantEntity; // x8
  _BOOL4 v136; // w20
  _QWORD *v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Action_o *klass; // x19
  System_Action_o *v145; // x0
  const MethodInfo *v146; // x1
  int v147; // w2
  __int64 v148; // x3
  int64_t v149; // x1
  const MethodInfo *v150; // x2
  const MethodInfo *v151; // x1
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  int32_t v158; // w9
  System_String_o *v159; // x21
  __int64 v160; // x22
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_Int32_array **v167; // x23
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Int32_array **v174; // x23
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  System_Int32_array **v181; // x23
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_Int32_array **v188; // x23
  struct EquipGraphServantItem_o *v189; // x8
  int32_t v190; // w23
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  System_Int32_array **v197; // x23
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  System_Int32_array **v204; // x20
  System_String_o *v205; // x20
  CommonUI_o *v206; // x21
  System_String_o *v207; // x22
  CommonConfirmDialog_ClickDelegate_o *v208; // x23
  struct EquipGraphServantItem_o *v209; // x8
  struct PartyListViewItem_array *v210; // x9
  __int64 v211; // x8
  unsigned __int64 v212; // x28
  int v213; // w27
  PartyListViewItem_o *v214; // x21
  int32_t v215; // w22
  struct ServantEntity_o *v216; // x8
  PartyOrganizationListViewItem_o *v217; // x23
  __int64 v218; // x24
  __int64 v219; // x25
  int v220; // w24
  ServantEntity_o *v221; // x21
  System_String_o *v222; // x21
  __int64 v223; // x22
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  System_Int32_array **v230; // x23
  System_String_array **v231; // x2
  System_String_array **v232; // x3
  System_Boolean_array **v233; // x4
  System_Int32_array **v234; // x5
  System_Int32_array *v235; // x6
  System_Int32_array *v236; // x7
  System_Int32_array **v237; // x23
  int32_t weareRarity; // w23
  System_String_array **v239; // x2
  System_String_array **v240; // x3
  System_Boolean_array **v241; // x4
  System_Int32_array **v242; // x5
  System_Int32_array *v243; // x6
  System_Int32_array *v244; // x7
  System_Int32_array **v245; // x23
  System_String_array **v246; // x2
  System_String_array **v247; // x3
  System_Boolean_array **v248; // x4
  System_Int32_array **v249; // x5
  System_Int32_array *v250; // x6
  System_Int32_array *v251; // x7
  System_Int32_array **v252; // x23
  System_String_array **v253; // x2
  System_String_array **v254; // x3
  System_Boolean_array **v255; // x4
  System_Int32_array **v256; // x5
  System_Int32_array *v257; // x6
  System_Int32_array *v258; // x7
  System_Int32_array **wearerServantName; // x20
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  System_Int32_array **v266; // x20
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  System_Int32_array **v273; // x20
  struct EquipGraphServantItem_o *v274; // x8
  int32_t Rarity; // w0
  System_String_array **v276; // x2
  System_String_array **v277; // x3
  System_Boolean_array **v278; // x4
  System_Int32_array **v279; // x5
  System_Int32_array *v280; // x6
  System_Int32_array *v281; // x7
  System_Int32_array **v282; // x20
  System_String_array **v283; // x2
  System_String_array **v284; // x3
  System_Boolean_array **v285; // x4
  System_Int32_array **v286; // x5
  System_Int32_array *v287; // x6
  System_Int32_array *v288; // x7
  System_Int32_array **v289; // x20
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  System_Int32_array **v296; // x20
  System_String_o *v297; // x20
  CommonUI_o *v298; // x21
  System_String_o *v299; // x22
  System_String_o *v300; // x23
  System_String_o *v301; // x24
  CommonConfirmDialog_ClickDelegate_o *v302; // x25
  struct PartyListViewItem_array *v303; // x8
  int v304; // w9
  struct EquipGraphListViewItem_o *v305; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v308; // q1
  PartyListViewItem_o *v309; // x24
  _BOOL8 v310; // x0
  __int64 v311; // x1
  Il2CppObject *current; // x20
  __int64 v313; // x10
  int klass_high; // w9
  int32_t v315; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v317; // x24
  _BOOL8 v318; // x0
  __int64 v319; // x1
  void *v320; // x8
  __int64 v321; // x11
  __int64 v322; // x11
  EquipGraphListViewObject_o *v323; // x24
  const MethodInfo *v324; // x1
  int v325; // w2
  __int64 v326; // x3
  struct EquipGraphListViewItem_o *v327; // x8
  struct UserServantEntity_o *v328; // x8
  __int128 v329; // q1
  struct EquipGraphServantItem_o *v330; // x20
  struct UserServantEntity_o *userServantEntity; // x23
  System_String_o *v332; // x20
  __int64 v333; // x22
  System_String_array **v334; // x2
  System_String_array **v335; // x3
  System_Boolean_array **v336; // x4
  System_Int32_array **v337; // x5
  System_Int32_array *v338; // x6
  System_Int32_array *v339; // x7
  System_Int32_array **v340; // x24
  System_String_array **v341; // x2
  System_String_array **v342; // x3
  System_Boolean_array **v343; // x4
  System_Int32_array **v344; // x5
  System_Int32_array *v345; // x6
  System_Int32_array *v346; // x7
  System_Int32_array **v347; // x24
  int32_t v348; // w24
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  System_Int32_array **v355; // x24
  System_String_array **v356; // x2
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  System_Int32_array **v362; // x24
  __int64 v363; // x23
  __int64 v364; // x24
  int32_t v365; // w0
  System_String_array **v366; // x2
  System_String_array **v367; // x3
  System_Boolean_array **v368; // x4
  System_Int32_array **v369; // x5
  System_Int32_array *v370; // x6
  System_Int32_array *v371; // x7
  System_Int32_array **v372; // x21
  System_String_o *v373; // x20
  CommonUI_o *v374; // x21
  System_String_o *v375; // x22
  System_String_o *v376; // x23
  System_String_o *v377; // x24
  CommonConfirmDialog_ClickDelegate_o *v378; // x25
  __int64 v379; // x0
  __int64 v380; // x0
  struct PartyListViewItem_array *v381; // [xsp+68h] [xbp-E8h]
  struct EquipGraphListViewItem_o **v382; // [xsp+68h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v383; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v384; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v385; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t v386; // [xsp+D4h] [xbp-7Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-78h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v389; // [xsp+E0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v390; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // 0:x0.16

  if ( (byte_42EB81C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, (_DWORD)callback, method);
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v23, v24, v25);
    sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_EquipGraphListViewManager_EndSelectConfirm__, v29, v30, v31);
    sub_B5D5C4(&Method_EquipGraphListViewManager_SelectEquip__, v32, v33, v34);
    sub_B5D5C4(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__, v35, v36, v37);
    sub_B5D5C4(&EquipGraphListViewObject_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&int_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v44, v45, v46);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&object___TypeInfo, v50, v51, v52);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Rarity_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v65, v66, v67);
    sub_B5D5C4(&SoundManager_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_15518/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_15519/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_15515/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_5607/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_5606/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_15511/*"WAVE_BATTLE_COST_OVER_TITLE"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_15510/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, v95, v96, v97);
    byte_42EB81C = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v389, 0, sizeof(v389));
  this->fields.selectItem = item;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc,
    (System_Int32_array **)callback,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_262;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (v110 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v110) )
  {
    if ( (EquipGraphListViewObject_c *)viewObject->klass->_2.typeHierarchy[v110 - 1] == EquipGraphListViewObject_TypeInfo )
      v111 = (EquipGraphListViewObject_o *)selectItem->fields.viewObject;
    else
      v111 = 0LL;
  }
  else
  {
    v111 = 0LL;
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
    v114 = this->fields.partyNumber - 1;
    if ( v114 < waveDeckItemList->max_length )
    {
      servantItemInfo = (__int64)waveDeckItemList->m_Items[v114];
      if ( !servantItemInfo )
        goto LABEL_262;
      PartyListViewItem__SetEquip((PartyListViewItem_o *)servantItemInfo, this->fields.memberIndex, 0LL, 0LL);
LABEL_19:
      if ( !*p_selectItem )
        goto LABEL_262;
      (*p_selectItem)->fields.isBase = 0;
      v115 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_262;
      wearerMember = v115->fields.wearerMember;
      if ( wearerMember == this->fields.memberIndex || (wearerMember & 0x80000000) != 0 )
      {
        if ( v115->fields._OrganizedWave_k__BackingField <= 0 && !v115->fields._IsUnique_k__BackingField )
        {
LABEL_62:
          servantItemInfo = (__int64)this->fields.servantItemInfo;
          if ( servantItemInfo )
          {
            v149 = 0LL;
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
          if ( !v111 )
            goto LABEL_262;
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_42EB830 & 1) == 0 )
          {
            sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, (_DWORD)v146, v147, v148);
            byte_42EB830 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v111, v146);
          goto LABEL_62;
        }
      }
      else
      {
        baseCost = this->fields.baseCost;
        p_baseCost = &this->fields.baseCost;
      }
      servantEntity = v115->fields.servantEntity;
      if ( servantEntity )
        LODWORD(servantEntity) = servantEntity->fields.cost;
      goto LABEL_58;
    }
LABEL_264:
    v379 = sub_B5D6C8(servantItemInfo);
    sub_B5D668(v379, 0LL);
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    if ( !item )
      goto LABEL_262;
    IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
    v120 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v120 = (_QWORD *)sub_B5D5CC(Method_EquipGraphListViewManager_SelectEquip__);
    v121 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v120, v120[3]);
    if ( !IsClearedWave_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v121, 0, 0LL);
      v123 = this->fields.servantItemInfo;
      if ( !v123 )
        goto LABEL_262;
      if ( v123->fields.equipUserSvtEntity )
      {
        v124 = this->fields.waveDeckItemList;
        if ( !v124 )
          goto LABEL_262;
        v125 = item->fields._OrganizedWave_k__BackingField - 1;
        if ( v125 >= v124->max_length )
          goto LABEL_264;
        if ( !*p_selectItem )
          goto LABEL_262;
        v126 = &v124->obj.klass + v125;
        v127 = v126[4];
        if ( !v127 )
          goto LABEL_262;
        servantItemInfo = (__int64)PartyListViewItem__GetMember(
                                     (PartyListViewItem_o *)v126[4],
                                     (*p_selectItem)->fields.wearerMember,
                                     0LL);
        if ( !servantItemInfo )
          goto LABEL_262;
        events = (int)v127->_1.events;
        servantItemInfo = PartyOrganizationListViewItem__get_EquipCost(
                            (PartyOrganizationListViewItem_o *)servantItemInfo,
                            0LL);
        v129 = this->fields.servantItemInfo;
        if ( !v129 )
          goto LABEL_262;
        equipServantEntity = v129->fields.equipServantEntity;
        if ( equipServantEntity )
          LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
        if ( events - (int)servantItemInfo + (int)equipServantEntity > SHIDWORD(v127->_1.interopData) )
        {
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v132 = LocalizationManager__Get((System_String_o *)StringLiteral_15511/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
          v133 = LocalizationManager__Get((System_String_o *)StringLiteral_15510/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
          v134 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v134,
            (Il2CppObject *)this,
            Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog_18204284(
              Instance,
              v132,
              v133,
              v134,
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
        v222 = LocalizationManager__Get((System_String_o *)StringLiteral_15518/*"WAVE_BATTLE_EQUIP_SWAP_MESSAGE"*/, 0LL);
        servantItemInfo = sub_B5D5DC(object___TypeInfo, 10LL);
        if ( !*p_selectItem )
          goto LABEL_262;
        v223 = servantItemInfo;
        LODWORD(v385.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v385);
        if ( !v223 )
          goto LABEL_262;
        v230 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v223 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v223 + 24) )
            goto LABEL_264;
          *(_QWORD *)(v223 + 32) = v230;
          sub_B5D560((BattleServantConfConponent_o *)(v223 + 32), v230, v224, v225, v226, v227, v228, v229);
          maxWave = this->fields.maxWave;
          servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
          v237 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v223 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v223 + 24) <= 1u )
              goto LABEL_264;
            *(_QWORD *)(v223 + 40) = v237;
            sub_B5D560((BattleServantConfConponent_o *)(v223 + 40), v237, v231, v232, v233, v234, v235, v236);
            if ( !*p_selectItem )
              goto LABEL_262;
            weareRarity = (*p_selectItem)->fields.weareRarity;
            if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(weareRarity, 0LL);
            v245 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v223 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v223 + 24) <= 2u )
                goto LABEL_264;
              *(_QWORD *)(v223 + 48) = v245;
              sub_B5D560((BattleServantConfConponent_o *)(v223 + 48), v245, v239, v240, v241, v242, v243, v244);
              servantItemInfo = (__int64)*p_selectItem;
              if ( !*p_selectItem )
                goto LABEL_262;
              servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                           (EquipGraphListViewItem_o *)servantItemInfo,
                                           v107);
              v252 = (System_Int32_array **)servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v223 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v223 + 24) <= 3u )
                  goto LABEL_264;
                *(_QWORD *)(v223 + 56) = v252;
                sub_B5D560((BattleServantConfConponent_o *)(v223 + 56), v252, v246, v247, v248, v249, v250, v251);
                if ( !*p_selectItem )
                  goto LABEL_262;
                wearerServantName = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
                if ( !wearerServantName
                  || (servantItemInfo = sub_B5D684(wearerServantName, *(_QWORD *)(*(_QWORD *)v223 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v223 + 24) <= 4u )
                    goto LABEL_264;
                  *(_QWORD *)(v223 + 64) = wearerServantName;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)(v223 + 64),
                    wearerServantName,
                    v253,
                    v254,
                    v255,
                    v256,
                    v257,
                    v258);
                  partyNumber = this->fields.partyNumber;
                  servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber);
                  v266 = (System_Int32_array **)servantItemInfo;
                  if ( !servantItemInfo
                    || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v223 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v223 + 24) <= 5u )
                      goto LABEL_264;
                    *(_QWORD *)(v223 + 72) = v266;
                    sub_B5D560((BattleServantConfConponent_o *)(v223 + 72), v266, v260, v261, v262, v263, v264, v265);
                    v386 = this->fields.maxWave;
                    servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v386);
                    v273 = (System_Int32_array **)servantItemInfo;
                    if ( !servantItemInfo
                      || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v223 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v223 + 24) <= 6u )
                        goto LABEL_264;
                      *(_QWORD *)(v223 + 80) = v273;
                      sub_B5D560((BattleServantConfConponent_o *)(v223 + 80), v273, v267, v268, v269, v270, v271, v272);
                      v274 = this->fields.servantItemInfo;
                      if ( !v274 )
                        goto LABEL_262;
                      servantItemInfo = (__int64)v274->fields.userServantEntity;
                      if ( !servantItemInfo )
                        goto LABEL_262;
                      Rarity = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
                      servantItemInfo = (__int64)Rarity__getRarityType(Rarity, 0LL);
                      v282 = (System_Int32_array **)servantItemInfo;
                      if ( !servantItemInfo
                        || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v223 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v223 + 24) <= 7u )
                          goto LABEL_264;
                        *(_QWORD *)(v223 + 88) = v282;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)(v223 + 88),
                          v282,
                          v276,
                          v277,
                          v278,
                          v279,
                          v280,
                          v281);
                        servantItemInfo = (__int64)this->fields.servantItemInfo;
                        if ( !servantItemInfo )
                          goto LABEL_262;
                        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                                     (EquipGraphServantItem_o *)servantItemInfo,
                                                     v107);
                        v289 = (System_Int32_array **)servantItemInfo;
                        if ( !servantItemInfo
                          || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v223 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v223 + 24) <= 8u )
                            goto LABEL_264;
                          *(_QWORD *)(v223 + 96) = v289;
                          sub_B5D560(
                            (BattleServantConfConponent_o *)(v223 + 96),
                            v289,
                            v283,
                            v284,
                            v285,
                            v286,
                            v287,
                            v288);
                          servantItemInfo = (__int64)this->fields.servantItemInfo;
                          if ( !servantItemInfo )
                            goto LABEL_262;
                          servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(
                                                       (EquipGraphServantItem_o *)servantItemInfo,
                                                       v107);
                          v296 = (System_Int32_array **)servantItemInfo;
                          if ( !servantItemInfo
                            || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v223 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v223 + 24) <= 9u )
                              goto LABEL_264;
                            *(_QWORD *)(v223 + 104) = v296;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)(v223 + 104),
                              v296,
                              v290,
                              v291,
                              v292,
                              v293,
                              v294,
                              v295);
                            v297 = System_String__Format_44656512(v222, (System_Object_array *)v223, 0LL);
                            v298 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v299 = LocalizationManager__Get((System_String_o *)StringLiteral_15519/*"WAVE_BATTLE_EQUIP_SWAP_TITLE"*/, 0LL);
                            v300 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v301 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v302 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v302,
                              (Il2CppObject *)this,
                              Method_EquipGraphListViewManager_EndSelectConfirm__,
                              0LL);
                            if ( v298 )
                            {
                              CommonUI__OpenConfirmDialog_18202048(
                                v298,
                                v299,
                                v297,
                                v300,
                                v301,
                                v302,
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
    v136 = item->fields._IsClearedWave_k__BackingField;
    v137 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v137 = (_QWORD *)sub_B5D5CC(Method_EquipGraphListViewManager_SelectEquip__);
    v121 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v137, v137[3]);
    if ( !v136 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v121, 0, 0LL);
      v209 = this->fields.servantItemInfo;
      if ( !v209 )
        goto LABEL_262;
      if ( v209->fields.equipUserSvtEntity )
      {
        v210 = this->fields.waveDeckItemList;
        if ( !v210 )
          goto LABEL_262;
        v211 = *(_QWORD *)&v210->max_length;
        if ( (int)v211 < 1 )
          return;
        v212 = 0LL;
        v213 = 1;
        v381 = this->fields.waveDeckItemList;
        while ( 1 )
        {
          if ( v212 >= (unsigned int)v211 )
            goto LABEL_264;
          v214 = v210->m_Items[v212];
          v215 = 0;
          do
          {
            servantItemInfo = (__int64)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              servantItemInfo = (__int64)BalanceConfig_TypeInfo;
            }
            if ( v215 >= *(_DWORD *)(*(_QWORD *)(servantItemInfo + 184) + 160LL) )
              goto LABEL_131;
            if ( !v214 )
              goto LABEL_262;
            servantItemInfo = (__int64)PartyListViewItem__GetMember(v214, v215, 0LL);
            if ( !*p_selectItem )
              goto LABEL_262;
            v216 = (*p_selectItem)->fields.servantEntity;
            if ( !v216 )
              goto LABEL_262;
            v217 = (PartyOrganizationListViewItem_o *)servantItemInfo;
            v219 = *(_QWORD *)&v216->fields.id.fields.currentCryptoKey;
            v218 = *(_QWORD *)&v216->fields.id.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v390.fields.currentCryptoKey = v219;
            *(_QWORD *)&v390.fields.fakeValue = v218;
            servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v390, 0LL);
            if ( !v217 )
              goto LABEL_262;
            v220 = servantItemInfo;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v217, 0LL);
            servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(EquipSvtId, 0LL);
            ++v215;
          }
          while ( v220 != (_DWORD)servantItemInfo );
          v221 = v217->fields.servantEntity;
          if ( v221 )
            break;
LABEL_131:
          v210 = v381;
          ++v212;
          ++v213;
          LODWORD(v211) = v381->max_length;
          if ( (__int64)v212 >= (int)v211 )
            return;
        }
        userServantEntity = v217->fields.userServantEntity;
        if ( !userServantEntity )
          return;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v332 = LocalizationManager__Get((System_String_o *)StringLiteral_15515/*"WAVE_BATTLE_EQUIP_MOVE_MESSAGE"*/, 0LL);
        v333 = sub_B5D5DC(object___TypeInfo, 5LL);
        LODWORD(v385.fields.currentCryptoKey) = v213;
        servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &v385);
        if ( !v333 )
          goto LABEL_262;
        v340 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v333 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v333 + 24) )
            goto LABEL_264;
          *(_QWORD *)(v333 + 32) = v340;
          sub_B5D560((BattleServantConfConponent_o *)(v333 + 32), v340, v334, v335, v336, v337, v338, v339);
          maxWave = this->fields.maxWave;
          servantItemInfo = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
          v347 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v333 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v333 + 24) <= 1u )
              goto LABEL_264;
            *(_QWORD *)(v333 + 40) = v347;
            sub_B5D560((BattleServantConfConponent_o *)(v333 + 40), v347, v341, v342, v343, v344, v345, v346);
            v348 = UserServantEntity__getRarity(userServantEntity, 0LL);
            if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(v348, 0LL);
            v355 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v333 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v333 + 24) <= 2u )
                goto LABEL_264;
              *(_QWORD *)(v333 + 48) = v355;
              sub_B5D560((BattleServantConfConponent_o *)(v333 + 48), v355, v349, v350, v351, v352, v353, v354);
              servantItemInfo = (__int64)ServantEntity__getClassName(v221, 0LL);
              v362 = (System_Int32_array **)servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v333 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v333 + 24) <= 3u )
                  goto LABEL_264;
                *(_QWORD *)(v333 + 56) = v362;
                sub_B5D560((BattleServantConfConponent_o *)(v333 + 56), v362, v356, v357, v358, v359, v360, v361);
                v364 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
                v363 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v392.fields.currentCryptoKey = v364;
                *(_QWORD *)&v392.fields.fakeValue = v363;
                v365 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v392, 0LL);
                servantItemInfo = (__int64)ServantEntity__getName(v221, v365, -1, 0LL);
                v372 = (System_Int32_array **)servantItemInfo;
                if ( !servantItemInfo
                  || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v333 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v333 + 24) <= 4u )
                    goto LABEL_264;
                  *(_QWORD *)(v333 + 64) = v372;
                  sub_B5D560((BattleServantConfConponent_o *)(v333 + 64), v372, v366, v367, v368, v369, v370, v371);
                  v373 = System_String__Format_44656512(v332, (System_Object_array *)v333, 0LL);
                  v374 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v375 = LocalizationManager__Get((System_String_o *)StringLiteral_5607/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                  v376 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v377 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v378 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v378,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( v374 )
                  {
                    CommonUI__OpenConfirmDialog_18202048(
                      v374,
                      v375,
                      v373,
                      v376,
                      v377,
                      v378,
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
                  sub_B5D69C(servantItemInfo, v107);
                }
              }
            }
          }
        }
LABEL_266:
        v380 = sub_B5D6BC(servantItemInfo);
        sub_B5D668(v380, 0LL);
      }
LABEL_133:
      EquipGraphListViewManager__EndSelectConfirm(this, 1, v122);
      return;
    }
LABEL_55:
    OverwriteAssetSoundName__PlaySystemSe(v121, 2, 0LL);
    klass = (System_Action_o *)p_selectItemCallbackFunc->klass;
    if ( p_selectItemCallbackFunc->klass )
    {
      p_selectItemCallbackFunc->klass = 0LL;
      sub_B5D560(p_selectItemCallbackFunc, 0LL, v138, v139, v140, v141, v142, v143);
      v145 = klass;
      goto LABEL_67;
    }
    return;
  }
  v158 = selectItem->fields.wearerMember;
  if ( v158 != this->fields.memberIndex && (v158 & 0x80000000) == 0 )
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
    v159 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EQUIP_GRAPH_USE_WARNING_MESSAGE"*/, 0LL);
    servantItemInfo = sub_B5D5DC(object___TypeInfo, 6LL);
    if ( !this->fields.servantItemInfo )
      goto LABEL_262;
    v160 = servantItemInfo;
    servantItemInfo = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v107);
    if ( !v160 )
      goto LABEL_262;
    v167 = (System_Int32_array **)servantItemInfo;
    if ( !servantItemInfo || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v160 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v160 + 24) )
        goto LABEL_264;
      *(_QWORD *)(v160 + 32) = v167;
      sub_B5D560((BattleServantConfConponent_o *)(v160 + 32), v167, v161, v162, v163, v164, v165, v166);
      if ( !*p_selectItem )
        goto LABEL_262;
      v174 = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
      if ( !v174 || (servantItemInfo = sub_B5D684(v174, *(_QWORD *)(*(_QWORD *)v160 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v160 + 24) <= 1u )
          goto LABEL_264;
        *(_QWORD *)(v160 + 40) = v174;
        sub_B5D560((BattleServantConfConponent_o *)(v160 + 40), v174, v168, v169, v170, v171, v172, v173);
        servantItemInfo = (__int64)this->fields.servantItemInfo;
        if ( !servantItemInfo )
          goto LABEL_262;
        servantItemInfo = (__int64)EquipGraphServantItem__get_ClassName(
                                     (EquipGraphServantItem_o *)servantItemInfo,
                                     v107);
        v181 = (System_Int32_array **)servantItemInfo;
        if ( !servantItemInfo
          || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v160 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v160 + 24) <= 2u )
            goto LABEL_264;
          *(_QWORD *)(v160 + 48) = v181;
          sub_B5D560((BattleServantConfConponent_o *)(v160 + 48), v181, v175, v176, v177, v178, v179, v180);
          servantItemInfo = (__int64)*p_selectItem;
          if ( !*p_selectItem )
            goto LABEL_262;
          servantItemInfo = (__int64)EquipGraphListViewItem__get_WeareServantClassName(
                                       (EquipGraphListViewItem_o *)servantItemInfo,
                                       v107);
          v188 = (System_Int32_array **)servantItemInfo;
          if ( !servantItemInfo
            || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v160 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v160 + 24) <= 3u )
              goto LABEL_264;
            *(_QWORD *)(v160 + 56) = v188;
            sub_B5D560((BattleServantConfConponent_o *)(v160 + 56), v188, v182, v183, v184, v185, v186, v187);
            v189 = this->fields.servantItemInfo;
            if ( !v189 )
              goto LABEL_262;
            servantItemInfo = (__int64)v189->fields.userServantEntity;
            if ( !servantItemInfo )
              goto LABEL_262;
            v190 = UserServantEntity__getRarity((UserServantEntity_o *)servantItemInfo, 0LL);
            if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            servantItemInfo = (__int64)Rarity__getRarityType(v190, 0LL);
            v197 = (System_Int32_array **)servantItemInfo;
            if ( !servantItemInfo
              || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v160 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v160 + 24) <= 4u )
                goto LABEL_264;
              *(_QWORD *)(v160 + 64) = v197;
              sub_B5D560((BattleServantConfConponent_o *)(v160 + 64), v197, v191, v192, v193, v194, v195, v196);
              if ( !*p_selectItem )
                goto LABEL_262;
              servantItemInfo = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
              v204 = (System_Int32_array **)servantItemInfo;
              if ( !servantItemInfo
                || (servantItemInfo = sub_B5D684(servantItemInfo, *(_QWORD *)(*(_QWORD *)v160 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v160 + 24) <= 5u )
                  goto LABEL_264;
                *(_QWORD *)(v160 + 72) = v204;
                sub_B5D560((BattleServantConfConponent_o *)(v160 + 72), v204, v198, v199, v200, v201, v202, v203);
                v205 = System_String__Format_44656512(v159, (System_Object_array *)v160, 0LL);
                v206 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v207 = LocalizationManager__Get((System_String_o *)StringLiteral_5607/*"EQUIP_GRAPH_USE_WARNING_TITLE"*/, 0LL);
                v208 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v208,
                  (Il2CppObject *)this,
                  Method_EquipGraphListViewManager_EndSelectConfirm__,
                  0LL);
                servantItemInfo = (__int64)BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                }
                if ( v206 )
                {
                  CommonUI__OpenConfirmDialog(
                    v206,
                    v207,
                    v205,
                    v208,
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
    v303 = this->fields.waveDeckItemList;
    if ( !v303 )
      goto LABEL_262;
    v304 = this->fields.partyNumber - 1;
    if ( v304 >= v303->max_length )
      goto LABEL_264;
    v305 = this->fields.selectItem;
    if ( !v305 )
      goto LABEL_262;
    userSvtEntity = v305->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_262;
    memberIndex = this->fields.memberIndex;
    v308 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    v309 = v303->m_Items[v304];
    *(_OWORD *)&v385.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v385.fields.fakeValue = v308;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v384 = v385;
    servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v384, 0LL);
    if ( !v309 )
      goto LABEL_262;
    PartyListViewItem__SetEquip(v309, memberIndex, servantItemInfo, 0LL);
  }
  servantItemInfo = (__int64)this->fields.itemList;
  v382 = &this->fields.selectItem;
  if ( !servantItemInfo )
    goto LABEL_262;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v385,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)servantItemInfo,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v389 = *(System_Collections_Generic_List_Enumerator_T__o *)&v385.fields.currentCryptoKey;
  while ( 1 )
  {
    v310 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v389,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v310 )
      break;
    current = v389.fields.current;
    if ( !v389.fields.current
      || (v313 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v389.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v313)
      || (EquipGraphListViewItem_c *)v389.fields.current->klass->_2.typeHierarchy[v313 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B5D69C(v310, v311);
    }
    if ( BYTE1(v389.fields.current[9].klass) )
    {
      BYTE1(v389.fields.current[9].klass) = 0;
      klass_high = HIDWORD(current[9].klass);
      if ( klass_high != this->fields.memberIndex && (klass_high & 0x80000000) == 0 )
      {
        v315 = this->fields.baseCost;
        goto LABEL_208;
      }
      if ( SHIDWORD(current[14].monitor) > 0 || LOBYTE(current[15].monitor) )
      {
        v315 = this->fields.baseCost;
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
        this->fields.baseCost = (_DWORD)monitor + v315;
        v317 = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v318 = UnityEngine_Object__op_Inequality(v317, 0LL, 0LL);
        if ( v318 )
        {
          v320 = current[6].monitor;
          if ( !v320
            || (v321 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v320 + 300LL) < (unsigned int)v321)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v320 + 200LL) + 8 * v321 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B5D69C(v318, v319);
          }
          v322 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v320 + 300LL) >= (unsigned int)v322 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v320 + 200LL) + 8 * v322 - 8) == EquipGraphListViewObject_TypeInfo )
              v323 = (EquipGraphListViewObject_o *)current[6].monitor;
            else
              v323 = 0LL;
          }
          else
          {
            v323 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_42EB830 & 1) == 0 )
          {
            sub_B5D5C4(&EquipGraphListViewItem_TypeInfo, (_DWORD)v324, v325, v326);
            byte_42EB830 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v323, v324);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v389,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !*v382 )
    goto LABEL_262;
  (*v382)->fields.isBase = 1;
  v327 = this->fields.selectItem;
  if ( !v327 )
    goto LABEL_262;
  v328 = v327->fields.userSvtEntity;
  if ( !v328 )
    goto LABEL_262;
  v329 = *(_OWORD *)&v328->fields.id.fields.fakeValue;
  v330 = this->fields.servantItemInfo;
  *(_OWORD *)&v385.fields.currentCryptoKey = *(_OWORD *)&v328->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v385.fields.fakeValue = v329;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v383 = v385;
  servantItemInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v383, 0LL);
  if ( !v330 )
    goto LABEL_262;
  v149 = servantItemInfo;
  servantItemInfo = (__int64)v330;
LABEL_64:
  EquipGraphServantItem__SetEquipTarget((EquipGraphServantItem_o *)servantItemInfo, v149, v112);
  servantItemInfo = (__int64)this->fields.servantItemDraw;
  if ( !servantItemInfo )
    goto LABEL_262;
  EquipGraphServantItemDraw__SetItem((EquipGraphServantItemDraw_o *)servantItemInfo, this->fields.servantItemInfo, v150);
  EquipGraphListViewManager__RefrashListDisp(this, v151);
  if ( callback )
  {
    p_selectItemCallbackFunc->klass = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc,
      0LL,
      v152,
      v153,
      v154,
      v155,
      v156,
      v157);
    v145 = callback;
LABEL_67:
    System_Action__Invoke(v145, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__SetFilterButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42EB820 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42EB820 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_30704820(this, mode, v10);
}


void __fastcall EquipGraphListViewManager__SetMode_30704820(
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
    sub_B5D69C(servantItemDraw, v5);
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
      EquipGraphListViewManager__RequestListObject_30705080(this, v9, v8);
      break;
  }
}


void __fastcall EquipGraphListViewManager__SetMode_30705024(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_30704820(this, mode, v10);
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
  if ( (byte_42EB816 & 1) == 0 )
  {
    this = (EquipGraphListViewManager_o *)sub_B5D5C4(
                                            &EquipGraphListViewObject_TypeInfo,
                                            (_DWORD)obj,
                                            (_DWORD)item,
                                            method);
    byte_42EB816 = 1;
  }
  if ( !obj
    || (v6 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v39; // x20
  System_Int32_array *bonusEventIdList; // x1

  if ( (byte_42EB825 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EB825 = 1;
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
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_45;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
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
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_45;
    sortKind = v28->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
      v31 = this->fields.sort;
      if ( !v31 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v31->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_45;
      v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
      v36 = this->fields.sort;
      if ( !v36 )
        goto LABEL_45;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_45;
      isAscendingOrder = v36->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v37 = v33;
    else
      v37 = v34;
    UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
      v39 = this->fields.bonusFilterKindLabel;
      bonusEventIdList = this->fields.bonusEventIdList;
      if ( this->fields.isQuestStart )
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKindText_34064848(sort, bonusEventIdList, 0LL, 0, 0LL, 0LL);
        if ( v39 )
        {
LABEL_42:
          UILabel__set_text(v39, (System_String_o *)sort, 0LL);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34067136(
                                   sort,
                                   bonusEventIdList,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
        if ( v39 )
          goto LABEL_42;
      }
    }
LABEL_45:
    sub_B5D69C(sort, v24);
  }
}


void __fastcall EquipGraphListViewManager___SelectEquip_b__71_0(
        EquipGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Action_o *selectItemCallbackFunc; // x20

  if ( (byte_42EB828 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EB828 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
    System_Action__Invoke(selectItemCallbackFunc, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__add_callbackFunc(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct EquipGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewManager_o *v11; // x0
  EquipGraphListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB805 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB805 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EquipGraphListViewManager_CallbackFunc_c *)v8->klass != EquipGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  EquipGraphListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EquipGraphListViewManager__add_callbackFunc2(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB807 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB807 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  EquipGraphListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void __fastcall EquipGraphListViewManager__add_selectItemCallbackFunc(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *selectItemCallbackFunc; // x21
  struct System_Action_o **p_selectItemCallbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB809 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB809 = 1;
  }
  selectItemCallbackFunc = (System_Delegate_o *)this->fields.selectItemCallbackFunc;
  p_selectItemCallbackFunc = &this->fields.selectItemCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(selectItemCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_selectItemCallbackFunc, v8, selectItemCallbackFunc);
    v10 = selectItemCallbackFunc == (System_Delegate_o *)v9;
    selectItemCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
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
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EquipGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EB80E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EB80E = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
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
      Component_srcLineSprite = (EquipGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)current,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v29;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_42EB80D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EB80D = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v29;
}


void __fastcall EquipGraphListViewManager__remove_callbackFunc(
        EquipGraphListViewManager_o *this,
        EquipGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct EquipGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB806 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB806 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EquipGraphListViewManager_CallbackFunc_c *)v8->klass != EquipGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  EquipGraphListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall EquipGraphListViewManager__remove_callbackFunc2(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB808 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB808 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  EquipGraphListViewManager__add_selectItemCallbackFunc(v11, v12, v13);
}


void __fastcall EquipGraphListViewManager__remove_selectItemCallbackFunc(
        EquipGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *selectItemCallbackFunc; // x21
  struct System_Action_o **p_selectItemCallbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42EB80A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB80A = 1;
  }
  selectItemCallbackFunc = (System_Delegate_o *)this->fields.selectItemCallbackFunc;
  p_selectItemCallbackFunc = &this->fields.selectItemCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(selectItemCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_selectItemCallbackFunc, v8, selectItemCallbackFunc);
    v10 = selectItemCallbackFunc == (System_Delegate_o *)v9;
    selectItemCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  EquipGraphListViewManager__DeleteContinueData(v11);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall EquipGraphListViewManager_CallbackFunc__BeginInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
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
  if ( (byte_42E64DF & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&EquipGraphListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E64DF = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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