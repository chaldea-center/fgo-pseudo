void __fastcall EquipGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ListViewSort_o *v8; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  ListViewSort_o *v20; // x19
  struct EquipGraphListViewManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40FC4CC & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewManager_TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6039, v6);
    sub_B16FFC(&StringLiteral_15350, v7);
    byte_40FC4CC = 1;
  }
  v8 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v8, (System_String_o *)StringLiteral_6039, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)EquipGraphListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B16F98(static_fields, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  v20 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v16, v17, v18, v19);
  ListViewSort___ctor_30208480(v20, (System_String_o *)StringLiteral_15350, 3, 0, 0LL);
  v21 = EquipGraphListViewManager_TypeInfo->static_fields;
  v21->warBoardSortStatus = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->warBoardSortStatus,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  scaleType = this->fields.scaleType;
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = this->fields.sort;
  if ( !sort || (sort->fields.iconScaleKind = this->fields.scaleType, (v13 = this->fields.sort) == 0LL) )
    sub_B170D4();
  ListViewSort__Save(v13, 0LL);
  EquipGraphListViewManager__ModifyList(this, 1, v14);
  EquipGraphListViewManager__SetMode_29304608(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
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
  ListViewSort_o **p_sort; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct System_Int32_array *servantEquipFilterEventIdList; // x9
  struct ListViewSort_o *v45; // x8
  struct System_Int32_array *v46; // x1
  struct System_Int32_array **p_bonusEventIdList; // x0
  struct ListViewSort_o *v48; // x8
  ListViewSort_o *v49; // x0
  System_Int32_array *bonusEventIdList; // x1
  PartyOrganizationListViewItem_o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  PartyOrganizationListViewItem_o *v56; // x24
  EquipGraphServantItem_o *v57; // x25
  const MethodInfo *v58; // x2
  System_Int32_array **v59; // x1
  EquipGraphServantItem_o **p_servantItemInfo; // x27
  ListViewManager_o *v61; // x25
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  const MethodInfo *v68; // x2
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v70; // x2
  EquipGraphServantItemDraw_o *v71; // x0
  UserGameEntity_o *SelfUserGame; // x0
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  UserGameEntity_o *v75; // x24
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v80; // x19
  UILabel_o *monitor; // x27
  PartyListViewItem_array *v82; // x25
  System_String_o *v83; // x0
  System_String_o *v84; // x28
  __int64 v85; // x0
  Il2CppObject *v86; // x26
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  UnityEngine_Component_o *emptyMessageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v91; // x0
  const MethodInfo *v92; // x1
  __int64 v93; // x2
  __int64 v94; // x8
  UserServantEntity_array *v95; // x20
  unsigned __int64 v96; // x23
  UserServantEntity_o **m_Items; // x22
  UserServantEntity_o *v98; // x26
  PartyListViewItem_array *v99; // x24
  int64_t EquipUserSvtId; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  int64_t v105; // x28
  EquipGraphServantItem_o **v106; // x19
  int32_t memberIndex; // w25
  EquipGraphListViewItem_o *v108; // x0
  int64_t v109; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v110; // x27
  int64_t v111; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v113; // x8
  UILabel_o *v114; // x20
  System_String_o **v115; // x8
  System_String_o *v116; // x21
  System_String_o *v117; // x0
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
  int32_t memberIdx; // [xsp+0h] [xbp-80h]
  const MethodInfo *v121; // [xsp+8h] [xbp-78h]
  EquipGraphServantItem_o **v122; // [xsp+18h] [xbp-68h]
  PartyListViewItem_o *v123; // [xsp+18h] [xbp-68h]
  EquipGraphListViewManager_o *v124; // [xsp+20h] [xbp-60h]
  int32_t svtEquipKeep; // [xsp+28h] [xbp-58h] BYREF
  int v126; // [xsp+2Ch] [xbp-54h] BYREF

  v11 = baseDeckItemList;
  if ( (byte_40FC4B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, baseDeckItemList);
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v13);
    sub_B16FFC(&EquipGraphListViewManager_TypeInfo, v14);
    sub_B16FFC(&EquipGraphServantItem_TypeInfo, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_11651, v22);
    sub_B16FFC(&StringLiteral_11842, v23);
    sub_B16FFC(&StringLiteral_12413, v24);
    byte_40FC4B4 = 1;
  }
  this->fields.waveDeckItemList = v11;
  sub_B16F98(
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
  sub_B16F98(
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
  if ( !*p_sort )
    goto LABEL_71;
  ListViewSort__Load(*p_sort, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
LABEL_17:
  this->fields.memberIndex = member;
  if ( setupInfo )
  {
    this->fields.isQuestStart = setupInfo->fields.isQuestStart;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    v45 = this->fields.sort;
    if ( servantEquipFilterEventIdList )
      LOBYTE(servantEquipFilterEventIdList) = servantEquipFilterEventIdList->max_length != 0;
    if ( !v45 )
      goto LABEL_71;
    v45->fields.isBonusKind = (char)servantEquipFilterEventIdList;
    v46 = setupInfo->fields.servantEquipFilterEventIdList;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    this->fields.bonusEventIdList = v46;
  }
  else
  {
    v48 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v48 )
      goto LABEL_71;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    v46 = 0LL;
    v48->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
  }
  sub_B16F98(
    (BattleServantConfConponent_o *)p_bonusEventIdList,
    (System_Int32_array **)v46,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v49 = *p_sort;
  if ( !*p_sort )
    goto LABEL_71;
  if ( v49->fields.isBonusKind )
  {
    bonusEventIdList = this->fields.bonusEventIdList;
    if ( this->fields.isQuestStart )
      ListViewSort__AlignBonusKind(v49, bonusEventIdList, 0LL, 0, 0LL, 0LL);
    else
      ListViewSort__AlignBonusKind2(v49, bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  v51 = PartyListViewItem__GetMember(partyItem, this->fields.memberIndex, 0LL);
  if ( !v51 )
    goto LABEL_71;
  v56 = v51;
  if ( !v51->fields.isFollower )
  {
    v124 = this;
    v57 = (EquipGraphServantItem_o *)sub_B170CC(EquipGraphServantItem_TypeInfo, v52, v53, v54, v55);
    EquipGraphServantItem___ctor(v57, v56, v58);
    v59 = (System_Int32_array **)v57;
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v57;
    v61 = (ListViewManager_o *)this;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantItemInfo, v59, v62, v63, v64, v65, v66, v67);
    servantItemDraw = this->fields.servantItemDraw;
    if ( !servantItemDraw )
      goto LABEL_71;
    EquipGraphServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, v68);
    v71 = this->fields.servantItemDraw;
    if ( !v71 )
      goto LABEL_71;
    EquipGraphServantItemDraw__SetInput(v71, 0, v70);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
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
    v75 = SelfUserGame;
    this->fields.maxWave = *(_QWORD *)&v11->max_length;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_71;
    ServantEquipList = UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v80 = ServantEquipList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v122 = p_servantItemInfo;
      monitor = (UILabel_o *)v61[1].monitor;
      v82 = v11;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
      if ( !v80 )
        goto LABEL_71;
      v84 = v83;
      v126 = *(_QWORD *)&v80->max_length;
      v85 = j_il2cpp_value_box_0(int_TypeInfo, &v126);
      if ( !v75 )
        goto LABEL_71;
      v86 = (Il2CppObject *)v85;
      svtEquipKeep = v75->fields.svtEquipKeep;
      v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
      v88 = System_String__Format_43739268(v84, v86, v87, 0LL);
      if ( !monitor )
        goto LABEL_71;
      UILabel__set_text(monitor, v88, 0LL);
      v11 = v82;
      p_servantItemInfo = v122;
      v61 = (ListViewManager_o *)v124;
    }
    emptyMessageLabel = (UnityEngine_Component_o *)v61[1].fields.emptyMessageLabel;
    if ( !emptyMessageLabel )
      goto LABEL_71;
    gameObject = UnityEngine_Component__get_gameObject(emptyMessageLabel, 0LL);
    if ( !*p_sort )
      goto LABEL_71;
    if ( !gameObject )
      goto LABEL_71;
    v123 = partyItem;
    UnityEngine_GameObject__SetActive(gameObject, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList(v61, 0, 0LL);
    if ( !v80 )
      goto LABEL_71;
    v94 = *(_QWORD *)&v80->max_length;
    if ( (int)v94 >= 1 )
    {
      v95 = v80;
      v96 = 0LL;
      m_Items = v80->m_Items;
      while ( 1 )
      {
        if ( v96 >= (unsigned int)v94 )
        {
          sub_B17100(v91, v92, v93);
          sub_B170A0();
        }
        if ( !*p_servantItemInfo )
          break;
        v98 = m_Items[v96];
        v99 = v11;
        EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId(*p_servantItemInfo, v92);
        if ( !*p_servantItemInfo )
          break;
        v105 = EquipUserSvtId;
        v106 = p_servantItemInfo;
        memberIndex = v124->fields.memberIndex;
        v108 = (EquipGraphListViewItem_o *)sub_B170CC(EquipGraphListViewItem_TypeInfo, v101, v102, v103, v104);
        memberIdx = memberIndex;
        v61 = (ListViewManager_o *)v124;
        v109 = v105;
        v110 = (EventMissionProgressRequest_Argument_ProgressData_o *)v108;
        v11 = v99;
        EquipGraphListViewItem___ctor(v108, v96, v98, v109, v111, v99, v123, setupInfo, memberIdx, v121);
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v124->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          v110,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v94) = v95->max_length;
        ++v96;
        p_servantItemInfo = v106;
        if ( (__int64)v96 >= (int)v94 )
          goto LABEL_61;
      }
LABEL_71:
      sub_B170D4();
    }
LABEL_61:
    v113 = v61->fields.itemList;
    if ( !v113 )
      goto LABEL_71;
    v114 = v61->fields.emptyMessageLabel;
    v115 = (System_String_o **)(v113->fields._size <= 0 ? &StringLiteral_11651 : &StringLiteral_11842);
    v116 = *v115;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v117 = LocalizationManager__Get(v116, 0LL);
    if ( !v114 )
      goto LABEL_71;
    UILabel__set_text(v114, v117, 0LL);
    EquipGraphListViewManager__RefrashListDisp((EquipGraphListViewManager_o *)v61, v118);
    ListViewManager__SortItem(v61, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage((EquipGraphListViewManager_o *)v61, v119);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__CreateList_29300360(
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
  ListViewSort_o **p_sort; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  struct System_Int32_array *servantEquipFilterEventIdList; // x9
  struct ListViewSort_o *sort; // x8
  struct System_Int32_array *v37; // x1
  struct System_Int32_array **p_bonusEventIdList; // x0
  struct ListViewSort_o *v39; // x8
  ListViewSort_o *v40; // x0
  System_Int32_array *bonusEventIdList; // x1
  PartyOrganizationListViewItem_o *MemberItem; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  PartyOrganizationListViewItem_o *v47; // x23
  EquipGraphServantItem_o *v48; // x24
  const MethodInfo *v49; // x2
  EquipGraphServantItem_o **p_servantItemInfo; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x2
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v59; // x2
  EquipGraphServantItemDraw_o *v60; // x0
  UserGameEntity_o *SelfUserGame; // x0
  struct EquipGraphServantItem_o *servantItemInfo; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  UserGameEntity_o *v64; // x24
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *ServantEquipList; // x0
  UnityEngine_Object_o *infoDataLabel; // x26
  UserServantEntity_array *v69; // x25
  UILabel_o *v70; // x26
  System_String_o *v71; // x0
  System_String_o *v72; // x27
  __int64 v73; // x0
  Il2CppObject *v74; // x28
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0
  UnityEngine_Component_o *bonusFilterKindButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v79; // x0
  const MethodInfo *v80; // x1
  __int64 v81; // x2
  __int64 v82; // x8
  UserServantEntity_array *v83; // x24
  unsigned __int64 v84; // x22
  UserServantEntity_o **m_Items; // x28
  UserServantEntity_o *v86; // x25
  int64_t EquipUserSvtId; // x0
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  int64_t v92; // x27
  EquipGraphListViewItem_o *v93; // x26
  int64_t v94; // x4
  const MethodInfo *v95; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v97; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v99; // x8
  System_String_o *v100; // x21
  System_String_o *v101; // x0
  const MethodInfo *v102; // x1
  const MethodInfo *v103; // x1
  WarBoardPartyListViewItem_o *partyItema; // [xsp+8h] [xbp-68h]
  EquipGraphListViewManager_o *v105; // [xsp+10h] [xbp-60h]
  int32_t svtEquipKeep; // [xsp+18h] [xbp-58h] BYREF
  int v107; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40FC4B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, partyItem);
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v12);
    sub_B16FFC(&EquipGraphListViewManager_TypeInfo, v13);
    sub_B16FFC(&EquipGraphServantItem_TypeInfo, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&StringLiteral_11651, v21);
    sub_B16FFC(&StringLiteral_11842, v22);
    sub_B16FFC(&StringLiteral_12413, v23);
    byte_40FC4B5 = 1;
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
  sub_B16F98(
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
  if ( !*p_sort )
    goto LABEL_70;
  ListViewSort__Load(*p_sort, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
    v37 = setupInfo->fields.servantEquipFilterEventIdList;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    this->fields.bonusEventIdList = v37;
  }
  else
  {
    v39 = this->fields.sort;
    this->fields.isQuestStart = 1;
    if ( !v39 )
      goto LABEL_70;
    p_bonusEventIdList = &this->fields.bonusEventIdList;
    v37 = 0LL;
    v39->fields.isBonusKind = 0;
    this->fields.bonusEventIdList = 0LL;
  }
  sub_B16F98(
    (BattleServantConfConponent_o *)p_bonusEventIdList,
    (System_Int32_array **)v37,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v40 = *p_sort;
  if ( !*p_sort )
    goto LABEL_70;
  if ( !v40->fields.isBonusKind )
    goto LABEL_27;
  bonusEventIdList = this->fields.bonusEventIdList;
  if ( this->fields.isQuestStart )
  {
    ListViewSort__AlignBonusKind(v40, bonusEventIdList, 0LL, 0, 0LL, 0LL);
LABEL_27:
    if ( !partyItem )
      goto LABEL_70;
    goto LABEL_28;
  }
  ListViewSort__AlignBonusKind2(v40, bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !partyItem )
    goto LABEL_70;
LABEL_28:
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, this->fields.memberIndex, 0LL);
  if ( !MemberItem )
    goto LABEL_70;
  v47 = MemberItem;
  if ( !MemberItem->fields.isFollower )
  {
    v48 = (EquipGraphServantItem_o *)sub_B170CC(EquipGraphServantItem_TypeInfo, v43, v44, v45, v46);
    EquipGraphServantItem___ctor(v48, v47, v49);
    p_servantItemInfo = &this->fields.servantItemInfo;
    this->fields.servantItemInfo = v48;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.servantItemInfo,
      (System_Int32_array **)v48,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    servantItemDraw = this->fields.servantItemDraw;
    if ( !servantItemDraw )
      goto LABEL_70;
    EquipGraphServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, v57);
    v60 = this->fields.servantItemDraw;
    if ( !v60 )
      goto LABEL_70;
    EquipGraphServantItemDraw__SetInput(v60, 0, v59);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    servantItemInfo = this->fields.servantItemInfo;
    this->fields.maxCost = partyItem->fields.maxCost;
    if ( !servantItemInfo )
      goto LABEL_70;
    equipServantEntity = servantItemInfo->fields.equipServantEntity;
    v64 = SelfUserGame;
    if ( equipServantEntity )
      LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
    this->fields.baseCost = partyItem->fields.cost - (_DWORD)equipServantEntity;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    partyItema = partyItem;
    MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_70;
    ServantEquipList = UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
    infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
    v69 = ServantEquipList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v105 = this;
    if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
    {
      v70 = this->fields.infoDataLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
      if ( !v69 )
        goto LABEL_70;
      v72 = v71;
      v107 = *(_QWORD *)&v69->max_length;
      v73 = j_il2cpp_value_box_0(int_TypeInfo, &v107);
      if ( !v64 )
        goto LABEL_70;
      v74 = (Il2CppObject *)v73;
      svtEquipKeep = v64->fields.svtEquipKeep;
      v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
      v76 = System_String__Format_43739268(v72, v74, v75, 0LL);
      if ( !v70 )
        goto LABEL_70;
      UILabel__set_text(v70, v76, 0LL);
      this = v105;
    }
    bonusFilterKindButton = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    if ( !bonusFilterKindButton )
      goto LABEL_70;
    gameObject = UnityEngine_Component__get_gameObject(bonusFilterKindButton, 0LL);
    if ( !*p_sort )
      goto LABEL_70;
    if ( !gameObject )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive(gameObject, (*p_sort)->fields.isBonusKind, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !v69 )
      goto LABEL_70;
    v82 = *(_QWORD *)&v69->max_length;
    if ( (int)v82 >= 1 )
    {
      v83 = v69;
      v84 = 0LL;
      m_Items = v69->m_Items;
      while ( 1 )
      {
        if ( v84 >= (unsigned int)v82 )
        {
          sub_B17100(v79, v80, v81);
          sub_B170A0();
        }
        if ( !*p_servantItemInfo )
          break;
        v86 = m_Items[v84];
        EquipUserSvtId = EquipGraphServantItem__get_EquipUserSvtId(*p_servantItemInfo, v80);
        if ( !*p_servantItemInfo )
          break;
        v92 = EquipUserSvtId;
        v93 = (EquipGraphListViewItem_o *)sub_B170CC(EquipGraphListViewItem_TypeInfo, v88, v89, v90, v91);
        EquipGraphListViewItem___ctor_29285692(v93, v84, v86, v92, v94, partyItema, setupInfo, v95);
        this = v105;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v105->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v93,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v82) = v83->max_length;
        if ( (__int64)++v84 >= (int)v82 )
          goto LABEL_59;
      }
LABEL_70:
      sub_B170D4();
    }
LABEL_59:
    v97 = this->fields.itemList;
    if ( !v97 )
      goto LABEL_70;
    emptyMessageLabel = this->fields.emptyMessageLabel;
    v99 = (System_String_o **)(v97->fields._size <= 0 ? &StringLiteral_11651 : &StringLiteral_11842);
    v100 = *v99;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v101 = LocalizationManager__Get(v100, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_70;
    UILabel__set_text(emptyMessageLabel, v101, 0LL);
    EquipGraphListViewManager__RefrashListDisp(this, v102);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v103);
  }
}


void __fastcall EquipGraphListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0
  ListViewSort_o *warBoardSortStatus; // x0

  if ( (byte_40FC4B0 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewManager_TypeInfo, v1);
    byte_40FC4B0 = 1;
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
        (warBoardSortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__DeleteContinueData(warBoardSortStatus, 0LL);
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
    sub_B170D4();
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v4, v5, v6, v7, v8, v9);
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
  CommonUI_o *Instance; // x0
  EquipGraphServantItem_o *servantItemInfo; // x0
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v25; // x0
  Il2CppObject *v26; // x27
  __int64 v27; // x10
  int klass_high; // w9
  int32_t baseCost; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v31; // x21
  void *v32; // x8
  __int64 v33; // x11
  __int64 v34; // x11
  EquipGraphListViewObject_o *v35; // x21
  const MethodInfo *v36; // x1
  struct PartyListViewItem_array **p_waveDeckItemList; // x20
  struct PartyListViewItem_array *v38; // x26
  __int64 v39; // x8
  unsigned __int64 v40; // x27
  PartyListViewItem_o *v41; // x20
  int32_t i; // w21
  PartyOrganizationListViewItem_o *Member; // x0
  struct EquipGraphListViewItem_o *v44; // x8
  struct ServantEntity_o *servantEntity; // x8
  PartyOrganizationListViewItem_o *v46; // x22
  __int64 v47; // x23
  __int64 v48; // x24
  int32_t v49; // w0
  int32_t v50; // w23
  struct PartyListViewItem_array *waveDeckItemList; // x9
  int v52; // w10
  PartyListViewItem_o *v53; // x0
  struct PartyListViewItem_array *v54; // x8
  int v55; // w9
  struct EquipGraphListViewItem_o *v56; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w21
  __int128 v59; // q1
  PartyListViewItem_o *v60; // x20
  int64_t v61; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v63; // x4
  EquipGraphListViewItem_o *current; // x22
  __int64 v65; // x10
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v67; // x8
  __int64 v68; // x11
  __int64 v69; // x11
  EquipGraphListViewObject_o *v70; // x22
  const MethodInfo *v71; // x1
  struct EquipGraphListViewItem_o *v72; // x8
  struct EquipGraphListViewItem_o *v73; // x8
  struct ServantEntity_o *v74; // x10
  struct UserServantEntity_o *v75; // x8
  __int128 v76; // q1
  EquipGraphServantItem_o *v77; // x20
  int64_t v78; // x0
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x2
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  struct EquipGraphListViewItem_o *v82; // x8
  UnityEngine_Object_o *v83; // x20
  const MethodInfo *v84; // x1
  struct EquipGraphListViewItem_o *v85; // x8
  EquipGraphListViewObject_o *v86; // x20
  __int64 v87; // x10
  const MethodInfo *v88; // x1
  System_Action_o *selectItemCallbackFunc; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+10h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+38h] [xbp-C8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+90h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16

  if ( (byte_40FC4C2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, result);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v8);
    sub_B16FFC(&EquipGraphListViewObject_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_40FC4C2 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
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
        v38 = *p_waveDeckItemList;
        if ( !*p_waveDeckItemList )
          goto LABEL_131;
        v39 = *(_QWORD *)&v38->max_length;
        if ( (int)v39 >= 1 )
        {
          v40 = 0LL;
          do
          {
            if ( v40 >= (unsigned int)v39 )
              goto LABEL_136;
            v41 = v38->m_Items[v40];
            for ( i = 0; ; ++i )
            {
              servantItemInfo = (EquipGraphServantItem_o *)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                servantItemInfo = (EquipGraphServantItem_o *)BalanceConfig_TypeInfo;
              }
              if ( i >= *((_DWORD *)servantItemInfo[2].monitor + 40) )
                break;
              if ( !v41 )
                goto LABEL_131;
              Member = PartyListViewItem__GetMember(v41, i, 0LL);
              v44 = this->fields.selectItem;
              if ( !v44 )
                goto LABEL_131;
              servantEntity = v44->fields.servantEntity;
              if ( !servantEntity )
                goto LABEL_131;
              v46 = Member;
              v48 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
              v47 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v95.fields.currentCryptoKey = v48;
              *(_QWORD *)&v95.fields.fakeValue = v47;
              v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v95, 0LL);
              if ( !v46 )
                goto LABEL_131;
              v50 = v49;
              EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v46, 0LL);
              if ( v50 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(EquipSvtId, 0LL) )
                PartyListViewItem__SetEquip(v41, i, 0LL, 0LL);
            }
            LODWORD(v39) = v38->max_length;
            ++v40;
          }
          while ( (__int64)v40 < (int)v39 );
          p_waveDeckItemList = &this->fields.waveDeckItemList;
        }
      }
    }
    else
    {
      servantItemInfo = this->fields.servantItemInfo;
      if ( !servantItemInfo )
        goto LABEL_131;
      if ( servantItemInfo->fields.equipUserSvtEntity )
      {
        servantItemInfo = (EquipGraphServantItem_o *)EquipGraphServantItem__get_EquipUserSvtId(servantItemInfo, v17);
        selectItem = this->fields.selectItem;
        if ( !selectItem )
          goto LABEL_131;
        v18 = (System_String_array **)servantItemInfo;
      }
      else
      {
        v18 = 0LL;
      }
      waveDeckItemList = this->fields.waveDeckItemList;
      if ( !waveDeckItemList )
LABEL_131:
        sub_B170D4();
      v52 = selectItem->fields._OrganizedWave_k__BackingField - 1;
      if ( v52 >= waveDeckItemList->max_length )
      {
LABEL_136:
        sub_B17100(servantItemInfo, v17, v18);
        sub_B170A0();
      }
      v53 = waveDeckItemList->m_Items[v52];
      if ( !v53 )
        goto LABEL_131;
      p_waveDeckItemList = &this->fields.waveDeckItemList;
      PartyListViewItem__SetEquip(v53, selectItem->fields.wearerMember, (int64_t)v18, 0LL);
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
          v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v92, 0LL);
          if ( v60 )
          {
            PartyListViewItem__SetEquip(v60, memberIndex, v61, 0LL);
            itemList = this->fields.itemList;
            if ( itemList )
            {
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                &v91,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
                (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v94 = v91;
              while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v94,
                        (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
              {
                current = (EquipGraphListViewItem_o *)v94.fields.current;
                if ( !v94.fields.current
                  || (v65 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v94.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v65)
                  || (EquipGraphListViewItem_c *)v94.fields.current->klass->_2.typeHierarchy[v65 - 1] != EquipGraphListViewItem_TypeInfo )
                {
                  sub_B170D4();
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
                if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
                {
                  v67 = current->fields.viewObject;
                  if ( !v67
                    || (v68 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                        *(&v67->klass->_2.bitflags2 + 1) < (unsigned int)v68)
                    || (EquipGraphListViewObject_c *)v67->klass->_2.typeHierarchy[v68 - 1] != EquipGraphListViewObject_TypeInfo )
                  {
                    sub_B170D4();
                  }
                  v69 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v67->klass->_2.bitflags2 + 1) >= (unsigned int)v69 )
                  {
                    if ( (EquipGraphListViewObject_c *)v67->klass->_2.typeHierarchy[v69 - 1] == EquipGraphListViewObject_TypeInfo )
                      v70 = (EquipGraphListViewObject_o *)current->fields.viewObject;
                    else
                      v70 = 0LL;
                  }
                  else
                  {
                    v70 = 0LL;
                  }
                  UnityEngine_Vector3__get_zero(0LL);
                  if ( (byte_40FC4D5 & 1) == 0 )
                  {
                    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v71);
                    byte_40FC4D5 = 1;
                  }
                  EquipGraphListViewObject__SetupDisp(v70, v71);
                }
              }
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v94,
                (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  v25 = this->fields.itemList;
  if ( !v25 )
    goto LABEL_131;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v25,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v94.fields.current = (Il2CppObject *)v93.fields.fakeValue;
  *(_OWORD *)&v94.fields.list = *(_OWORD *)&v93.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v94,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v26 = v94.fields.current;
    if ( !v94.fields.current
      || (v27 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v94.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v27)
      || (EquipGraphListViewItem_c *)v94.fields.current->klass->_2.typeHierarchy[v27 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B170D4();
    }
    if ( BYTE1(v94.fields.current[9].klass) )
    {
      BYTE1(v94.fields.current[9].klass) = 0;
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
        if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
        {
          v32 = v26[6].monitor;
          if ( !v32
            || (v33 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) < (unsigned int)v33)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v33 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B170D4();
          }
          v34 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) >= (unsigned int)v34 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v34 - 8) == EquipGraphListViewObject_TypeInfo )
              v35 = (EquipGraphListViewObject_o *)v26[6].monitor;
            else
              v35 = 0LL;
          }
          else
          {
            v35 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_40FC4D5 & 1) == 0 )
          {
            sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v36);
            byte_40FC4D5 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v35, v36);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v94,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
LABEL_103:
  v72 = this->fields.selectItem;
  if ( !v72 )
    goto LABEL_131;
  v72->fields.isBase = 1;
  v73 = this->fields.selectItem;
  if ( !v73 )
    goto LABEL_131;
  if ( (v73->fields.wearerMember & 0x80000000) != 0 )
  {
    LODWORD(v74) = 0;
  }
  else
  {
    v74 = v73->fields.servantEntity;
    if ( v74 )
      LODWORD(v74) = v74->fields.cost;
  }
  this->fields.baseCost -= (int)v74;
  v75 = v73->fields.userSvtEntity;
  if ( !v75 )
    goto LABEL_131;
  v76 = *(_OWORD *)&v75->fields.id.fields.fakeValue;
  v77 = this->fields.servantItemInfo;
  *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)&v75->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v93.fields.fakeValue = v76;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v90 = v93;
  v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v90, 0LL);
  if ( !v77 )
    goto LABEL_131;
  EquipGraphServantItem__SetEquipTarget(v77, v78, v79);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_131;
  EquipGraphServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, v80);
  v82 = this->fields.selectItem;
  if ( !v82 )
    goto LABEL_131;
  v83 = (UnityEngine_Object_o *)v82->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v83, 0LL, 0LL) )
  {
    v85 = this->fields.selectItem;
    if ( v85 )
    {
      v86 = (EquipGraphListViewObject_o *)v85->fields.viewObject;
      if ( v86 )
      {
        v87 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v86->klass->_2.bitflags2 + 1) >= (unsigned int)v87
          && (EquipGraphListViewObject_c *)v86->klass->_2.typeHierarchy[v87 - 1] == EquipGraphListViewObject_TypeInfo )
        {
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_40FC4D5 & 1) == 0 )
          {
            sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v88);
            byte_40FC4D5 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v86, v88);
          goto LABEL_127;
        }
      }
    }
    goto LABEL_131;
  }
LABEL_127:
  EquipGraphListViewManager__RefrashListDisp(this, v84);
LABEL_128:
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v18, v19, v20, v21, v22, v23);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FC4C4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FC4C4 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    EquipGraphListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, v13, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40FC4C8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_EquipGraphListViewManager_EndCloseSelectSortKind__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FC4C8 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EquipGraphListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantSortSelectMenu(Instance, v12, 0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FC4CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_40FC4CB = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v12 = 0LL;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v19.fields.current;
    if ( !v19.fields.current
      || (v14 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v19.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
      || (EquipGraphListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v14 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B170D4();
    }
    if ( (EquipGraphListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[*(&EquipGraphListViewItem_TypeInfo->_2.bitflags2
                                                                                 + 1)
                                                                               - 1] != EquipGraphListViewItem_TypeInfo )
      current = 0LL;
    klass = current[7].klass;
    if ( !klass )
      sub_B170D4();
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v20.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v20.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL) == svtId )
      ++v12;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_40FC4B7 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40FC4B7 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
    sub_B170D4();
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall EquipGraphListViewManager__GetSelect(EquipGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v8; // x11
  int32_t klass_high; // w19
  int v10; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC4BF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_40FC4BF = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v12.fields.current
      || (v8 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v12.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8)
      || (EquipGraphListViewItem_c *)v12.fields.current->klass->_2.typeHierarchy[v8 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B170D4();
    }
    if ( BYTE1(v12.fields.current[9].klass) )
    {
      klass_high = HIDWORD(v12.fields.current[1].klass);
      v10 = 3;
      goto LABEL_12;
    }
  }
  klass_high = 0;
  v10 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v10 + 1) >> 2 )
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
  Il2CppObject *current; // x19
  __int64 v9; // x10
  char v10; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC4C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_40FC4C0 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v12.fields.current;
    if ( !v12.fields.current
      || (v9 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v12.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9)
      || (EquipGraphListViewItem_c *)v12.fields.current->klass->_2.typeHierarchy[v9 - 1] != EquipGraphListViewItem_TypeInfo )
    {
      sub_B170D4();
    }
    if ( BYTE1(v12.fields.current[9].klass) )
    {
      v10 = 2;
      goto LABEL_12;
    }
  }
  v10 = 0;
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( ((v10 + 2) & 3) != 0 )
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  Il2CppType v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40FC4B9 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_40FC4B9 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (EquipGraphListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != EquipGraphListViewItem_TypeInfo )
      {
        break;
      }
      klass = v30[1].klass;
      if ( klass && v30[1].fields.isTerminationSpace )
      {
        if ( BYTE5(v30[1].fields.sortStr1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, 0LL, v21, v22, v23, v24, v25, v26);
    *unchoiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v40;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


bool __fastcall EquipGraphListViewManager__GetSwapLockList(
        EquipGraphListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  int64_t v34; // x0
  const MethodInfo_2F164A0 *v35; // x2
  int64_t v36; // x1
  System_Collections_Generic_List_long__o *v37; // x0
  Il2CppType v38; // q0
  int64_t v39; // x0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-70h]

  if ( (byte_40FC4B8 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_40FC4B8 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        break;
      v31 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (EquipGraphListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != EquipGraphListViewItem_TypeInfo )
      {
        break;
      }
      klass = v30[1].klass;
      if ( klass && v30[1].fields.isTermination )
      {
        if ( BYTE4(v30[1].fields.sortStr1) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v63 = v64;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
          if ( !v20 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v34;
          v37 = v20;
        }
        else
        {
          v38 = klass->_1.byval_arg;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v64.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v64;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
          if ( !v15 )
            break;
          v35 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v36 = v39;
          v37 = v15;
        }
        System_Collections_Generic_List_long___Add(v37, v36, v35);
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B170D4();
  }
LABEL_28:
  if ( !v15 || !v20 )
    goto LABEL_33;
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)lockList, 0LL, v21, v22, v23, v24, v25, v26);
    *unlockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v40;
    sub_B16F98((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v47;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


void __fastcall EquipGraphListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  EquipGraphListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0
  ListViewSort_o *warBoardSortStatus; // x0

  if ( (byte_40FC4B1 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewManager_TypeInfo, v1);
    byte_40FC4B1 = 1;
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
        (warBoardSortStatus = EquipGraphListViewManager_TypeInfo->static_fields->warBoardSortStatus) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__InitLoad(warBoardSortStatus, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t ServantEquipList; // x0
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  unsigned int v17; // w27
  int64_t v18; // x26
  __int64 v19; // x8
  System_Int32_array ***v20; // x26
  __int64 v21; // t1
  __int128 v22; // q0
  int64_t v23; // x0
  int64_t v24; // x22
  unsigned __int64 v25; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x23
  EquipGraphListViewItem_o *v27; // x23
  __int64 v28; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v30; // q0
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  const MethodInfo *v37; // x1
  unsigned __int64 v38; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v39; // x20
  ListViewItem_o *v40; // x20
  __int64 v41; // x10
  UnityEngine_Object_o *viewObject; // x21
  ListViewObject_o *v43; // x0
  __int64 v45; // [xsp+10h] [xbp-C0h]
  int64_t v46; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+60h] [xbp-70h]

  if ( (byte_40FC4B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FC4B6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_52;
  ServantEquipList = (int64_t)UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !ServantEquipList )
    goto LABEL_52;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  v45 = *(_QWORD *)(ServantEquipList + 24);
  if ( (int)v45 >= 1 )
  {
    if ( !(_DWORD)v45 )
    {
LABEL_34:
      sub_B17100(ServantEquipList, v13, v14);
      sub_B170A0();
    }
    v17 = 0;
    v46 = ServantEquipList;
    while ( 1 )
    {
      v18 = ServantEquipList + 8LL * (int)v17;
      v21 = *(_QWORD *)(v18 + 32);
      v20 = (System_Int32_array ***)(v18 + 32);
      v19 = v21;
      if ( !v21 )
        break;
      v22 = *(_OWORD *)(v19 + 32);
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
      *(_OWORD *)&v49.fields.fakeValue = v22;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v48 = v49;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v48, 0LL);
      if ( (int)size >= 1 )
      {
        v24 = v23;
        v25 = 0LL;
        while ( 1 )
        {
          v26 = this->fields.itemList;
          if ( !v26 )
            goto LABEL_52;
          if ( v25 >= (unsigned int)v26->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v27 = (EquipGraphListViewItem_o *)v26->fields._items->m_Items[v25];
          if ( !v27 )
            goto LABEL_52;
          v28 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
            || (EquipGraphListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EquipGraphListViewItem_TypeInfo )
          {
            goto LABEL_52;
          }
          userSvtEntity = v27->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v49.fields.fakeValue = v30;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v47 = v49;
            ServantEquipList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v47, 0LL);
            if ( ServantEquipList == v24 )
              break;
          }
          if ( (__int64)++v25 >= size )
            goto LABEL_32;
        }
        if ( v17 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_34;
        v36 = *v20;
        v27->fields.userSvtEntity = (struct UserServantEntity_o *)*v20;
        sub_B16F98((BattleServantConfConponent_o *)&v27->fields.userSvtEntity, v36, v14, v31, v32, v33, v34, v35);
        if ( !isIconSizeChange )
        {
          EquipGraphListViewItem__ModifyLockItem(v27, v13);
          EquipGraphListViewItem__ModifyChoiceItem(v27, v37);
        }
      }
LABEL_32:
      ServantEquipList = v46;
      if ( (int)++v17 >= (int)v45 )
        goto LABEL_35;
      if ( v17 >= *(_DWORD *)(v46 + 24) )
        goto LABEL_34;
    }
LABEL_52:
    sub_B170D4();
  }
LABEL_35:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v38 = 0LL;
    while ( 1 )
    {
      v39 = this->fields.itemList;
      if ( !v39 )
        goto LABEL_52;
      if ( v38 >= (unsigned int)v39->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v40 = v39->fields._items->m_Items[v38];
      if ( v40 )
      {
        v41 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v40->klass->_2.bitflags2 + 1) >= (unsigned int)v41
          && (EquipGraphListViewItem_c *)v40->klass->_2.typeHierarchy[v41 - 1] == EquipGraphListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v40->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
          {
            v43 = v40->fields.viewObject;
            if ( !v43 )
              goto LABEL_52;
            ListViewObject__SetItemSeed(v43, v40, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v38 >= size )
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

  if ( (byte_40FC4C6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC4C6 = 1;
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
      sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B170D4();
  if ( !equipGraphListMenu->fields.modeKind )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v11; // x3
  __int64 v12; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FC4C3 & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_EquipGraphListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FC4C3 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11,
                                                      v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantFilterSelectMenu_18244592(v8, 5, sort, (ListViewManager_o *)this, v13, -1, 0LL);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
    Index = ListViewObject__get_Index(obj, 0LL);
    EquipGraphListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnClickSortAscendingOrder(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FC4C9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC4C9 = 1;
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
      sub_B170D4();
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
  __int64 v11; // x3
  __int64 v12; // x4
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FC4C7 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_EquipGraphListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FC4C7 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v9,
                                                    v10,
                                                    v11,
                                                    v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EquipGraphListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantSortSelectMenu(v8, 4, sort, 0, v13, 0LL);
  }
}


void __fastcall EquipGraphListViewManager__OnLongPushListView(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct EquipGraphListMenu_o *equipGraphListMenu; // x8
  UnityEngine_Behaviour_o *scrollView; // x0
  EquipGraphListViewManager_CallbackFunc_o *callbackFunc; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int32_t Index; // w2

  equipGraphListMenu = this->fields.equipGraphListMenu;
  if ( !equipGraphListMenu )
    goto LABEL_8;
  if ( equipGraphListMenu->fields.modeKind )
    return;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
LABEL_8:
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_40FC4BE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC4BE = 1;
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
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  System_Collections_Generic_List_EquipGraphListViewObject__o *ObjectList; // x0
  int size; // w8
  System_Collections_Generic_List_EquipGraphListViewObject__o *v11; // x20
  __int64 v12; // x21
  EquipGraphListViewObject_o *v13; // x0
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
  System_String_o *v25; // x0
  int32_t maxCost; // [xsp+8h] [xbp-28h] BYREF
  int v27; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC4BA & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Item__, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_12414, v7);
    sub_B16FFC(&StringLiteral_12413, v8);
    byte_40FC4BA = 1;
  }
  ObjectList = EquipGraphListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_26;
  size = ObjectList->fields._size;
  v11 = ObjectList;
  if ( size >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = v11->fields._items->m_Items[v12];
      if ( !v13 )
        break;
      ((void (__fastcall *)(EquipGraphListViewObject_o *, bool, Il2CppMethodPointer))v13->klass->vtable._9_SetInput.method)(
        v13,
        this->fields.isInput,
        v13->klass->vtable._10_Invalidation.methodPtr);
      size = v11->fields._size;
      if ( (int)++v12 >= size )
        goto LABEL_10;
    }
LABEL_26:
    sub_B170D4();
  }
LABEL_10:
  infoData2Label = (UnityEngine_Object_o *)this->fields.infoData2Label;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoData2Label, 0LL, 0LL) )
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
        ? (System_String_o **)&StringLiteral_12413
        : (System_String_o **)&StringLiteral_12414;
    v21 = *v20;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get(v21, 0LL);
    v27 = v18;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    maxCost = this->fields.maxCost;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &maxCost);
    v25 = System_String__Format_43739268(v22, v23, v24, 0LL);
    if ( !v19 )
      goto LABEL_26;
    UILabel__set_text(v19, v25, 0LL);
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
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FC4BC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_EquipGraphListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40FC4BC = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      EquipGraphListViewObject__Init(
        (EquipGraphListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__RequestListObject_29304868(
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
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FC4BD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_EquipGraphListViewManager_OnMoveEnd__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipGraphListViewObject__get_Count__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FC4BD = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EquipGraphListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_EquipGraphListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      EquipGraphListViewObject__Init(
        (EquipGraphListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EquipGraphListViewObject__Dispose__);
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
  EquipGraphListViewItem_o **p_selectItem; // x20
  BattleServantConfConponent_o *p_selectItemCallbackFunc; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct EquipGraphListViewItem_o *selectItem; // x8
  struct ListViewObject_o *viewObject; // x9
  __int64 v50; // x12
  EquipGraphListViewObject_o *v51; // x24
  __int64 RarityType; // x0
  __int64 v53; // x1
  MethodInfo *v54; // x2
  struct PartyListViewItem_array *waveDeckItemList; // x8
  int v56; // w9
  PartyListViewItem_o *v57; // x0
  EquipGraphListViewItem_o *v58; // x8
  int32_t wearerMember; // w11
  int32_t baseCost; // w9
  int32_t *p_baseCost; // x10
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  struct EquipGraphServantItem_o *v64; // x8
  struct PartyListViewItem_array *v65; // x8
  int v66; // w10
  Il2CppClass **v67; // x8
  Il2CppClass *v68; // x21
  PartyOrganizationListViewItem_o *Member; // x0
  int events; // w19
  int32_t EquipCost; // w0
  struct EquipGraphServantItem_o *v72; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v75; // x21
  System_String_o *v76; // x22
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  NotificationDialog_ClickDelegate_o *v81; // x23
  struct ServantEntity_o *servantEntity; // x8
  _QWORD *v83; // x0
  System_Reflection_MethodBase_o *v84; // x0
  struct EquipGraphServantItem_o *v85; // x8
  struct PartyListViewItem_array *v86; // x9
  __int64 v87; // x8
  unsigned __int64 v88; // x19
  int v89; // w27
  PartyListViewItem_o *v90; // x21
  int32_t v91; // w22
  PartyOrganizationListViewItem_o *v92; // x0
  struct ServantEntity_o *v93; // x8
  PartyOrganizationListViewItem_o *v94; // x23
  __int64 v95; // x24
  __int64 v96; // x25
  int32_t v97; // w0
  int32_t v98; // w24
  ServantEntity_o *v99; // x21
  const MethodInfo *v100; // x1
  EquipGraphServantItem_o *servantItemInfo; // x0
  const MethodInfo *v102; // x2
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v104; // x1
  EquipGraphListViewManager_o *v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_String_o *v112; // x21
  __int64 v113; // x2
  __int64 v114; // x0
  __int64 v115; // x22
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x23
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x23
  int32_t weareRarity; // w23
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x23
  const MethodInfo *v135; // x1
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x23
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **wearerServantName; // x20
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x20
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x20
  struct EquipGraphServantItem_o *v160; // x8
  UserServantEntity_o *userServantEntity; // x0
  int32_t Rarity; // w0
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x20
  const MethodInfo *v169; // x1
  EquipGraphServantItem_o *v170; // x0
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Int32_array **v176; // x20
  const MethodInfo *v177; // x1
  EquipGraphServantItem_o *v178; // x0
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Int32_array **v184; // x20
  System_String_o *v185; // x20
  CommonUI_o *v186; // x21
  System_String_o *v187; // x22
  System_String_o *v188; // x23
  System_String_o *v189; // x24
  __int64 v190; // x1
  __int64 v191; // x2
  __int64 v192; // x3
  __int64 v193; // x4
  CommonConfirmDialog_ClickDelegate_o *v194; // x25
  int32_t v195; // w9
  System_String_o *v196; // x21
  __int64 v197; // x2
  __int64 v198; // x0
  const MethodInfo *v199; // x1
  System_Object_array *v200; // x22
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  System_Int32_array **v206; // x23
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  System_Int32_array **v212; // x23
  const MethodInfo *v213; // x1
  EquipGraphServantItem_o *v214; // x0
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  System_Int32_array **v220; // x23
  const MethodInfo *v221; // x1
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  System_Int32_array **v227; // x23
  struct EquipGraphServantItem_o *v228; // x8
  UserServantEntity_o *v229; // x0
  int32_t v230; // w23
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  System_Int32_array **v236; // x23
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  System_Int32_array **v242; // x20
  System_String_o *v243; // x20
  CommonUI_o *v244; // x21
  System_String_o *v245; // x22
  __int64 v246; // x1
  __int64 v247; // x2
  __int64 v248; // x3
  __int64 v249; // x4
  CommonConfirmDialog_ClickDelegate_o *v250; // x23
  struct PartyListViewItem_array *v251; // x8
  int v252; // w9
  struct EquipGraphListViewItem_o *v253; // x10
  struct UserServantEntity_o *userSvtEntity; // x10
  int32_t memberIndex; // w23
  __int128 v256; // q1
  PartyListViewItem_o *v257; // x24
  int64_t v258; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x19
  __int64 v261; // x10
  int klass_high; // w9
  int32_t v263; // w8
  _DWORD *monitor; // x9
  UnityEngine_Object_o *v265; // x24
  void *v266; // x8
  __int64 v267; // x11
  __int64 v268; // x11
  EquipGraphListViewObject_o *v269; // x24
  const MethodInfo *v270; // x1
  struct EquipGraphListViewItem_o *v271; // x8
  struct UserServantEntity_o *v272; // x8
  __int128 v273; // q1
  EquipGraphServantItem_o *v274; // x20
  int64_t v275; // x0
  const MethodInfo *v276; // x2
  const MethodInfo *v277; // x2
  EquipGraphServantItemDraw_o *v278; // x0
  struct UserServantEntity_o *v279; // x23
  System_String_o *v280; // x20
  __int64 v281; // x2
  __int64 v282; // x22
  System_String_array **v283; // x3
  System_Boolean_array **v284; // x4
  System_Int32_array **v285; // x5
  System_Int32_array *v286; // x6
  System_Int32_array *v287; // x7
  System_Int32_array **v288; // x24
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  System_Int32_array **v294; // x24
  int32_t v295; // w24
  System_String_array **v296; // x3
  System_Boolean_array **v297; // x4
  System_Int32_array **v298; // x5
  System_Int32_array *v299; // x6
  System_Int32_array *v300; // x7
  System_Int32_array **v301; // x24
  System_String_array **v302; // x3
  System_Boolean_array **v303; // x4
  System_Int32_array **v304; // x5
  System_Int32_array *v305; // x6
  System_Int32_array *v306; // x7
  System_Int32_array **v307; // x24
  __int64 v308; // x23
  __int64 v309; // x24
  int32_t v310; // w0
  System_String_array **v311; // x3
  System_Boolean_array **v312; // x4
  System_Int32_array **v313; // x5
  System_Int32_array *v314; // x6
  System_Int32_array *v315; // x7
  System_Int32_array **v316; // x21
  System_String_o *v317; // x20
  CommonUI_o *v318; // x21
  System_String_o *v319; // x22
  System_String_o *v320; // x23
  System_String_o *v321; // x24
  __int64 v322; // x1
  __int64 v323; // x2
  __int64 v324; // x3
  __int64 v325; // x4
  CommonConfirmDialog_ClickDelegate_o *v326; // x25
  struct PartyListViewItem_array *v327; // [xsp+68h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v328; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v329; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v330; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t v331; // [xsp+D4h] [xbp-7Ch] BYREF
  int32_t partyNumber; // [xsp+D8h] [xbp-78h] BYREF
  int32_t maxWave; // [xsp+DCh] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v334; // [xsp+E0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v335; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v337; // 0:x0.16

  if ( (byte_40FC4C1 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v11);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15);
    sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v16);
    sub_B16FFC(&Method_EquipGraphListViewManager_EndSelectConfirm__, v17);
    sub_B16FFC(&Method_EquipGraphListViewManager_SelectEquip__, v18);
    sub_B16FFC(&Method_EquipGraphListViewManager__SelectEquip_b__71_0__, v19);
    sub_B16FFC(&EquipGraphListViewObject_TypeInfo, v20);
    sub_B16FFC(&int_TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v22);
    sub_B16FFC(&LocalizationManager_TypeInfo, v23);
    sub_B16FFC(&object___TypeInfo, v24);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v25);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_B16FFC(&Rarity_TypeInfo, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29);
    sub_B16FFC(&SoundManager_TypeInfo, v30);
    sub_B16FFC(&StringLiteral_15287, v31);
    sub_B16FFC(&StringLiteral_15288, v32);
    sub_B16FFC(&StringLiteral_15284, v33);
    sub_B16FFC(&StringLiteral_5515, v34);
    sub_B16FFC(&StringLiteral_5514, v35);
    sub_B16FFC(&StringLiteral_15283, v36);
    sub_B16FFC(&StringLiteral_3255, v37);
    sub_B16FFC(&StringLiteral_3258, v38);
    sub_B16FFC(&StringLiteral_15282, v39);
    byte_40FC4C1 = 1;
  }
  p_selectItem = &this->fields.selectItem;
  memset(&v334, 0, sizeof(v334));
  this->fields.selectItem = item;
  sub_B16F98(
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
  sub_B16F98(
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
    && (v50 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v50) )
  {
    if ( (EquipGraphListViewObject_c *)viewObject->klass->_2.typeHierarchy[v50 - 1] == EquipGraphListViewObject_TypeInfo )
      v51 = (EquipGraphListViewObject_o *)selectItem->fields.viewObject;
    else
      v51 = 0LL;
  }
  else
  {
    v51 = 0LL;
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
      v57 = waveDeckItemList->m_Items[v56];
      if ( !v57 )
        goto LABEL_257;
      PartyListViewItem__SetEquip(v57, this->fields.memberIndex, 0LL, 0LL);
LABEL_19:
      if ( !*p_selectItem )
        goto LABEL_257;
      (*p_selectItem)->fields.isBase = 0;
      v58 = *p_selectItem;
      if ( !*p_selectItem )
        goto LABEL_257;
      wearerMember = v58->fields.wearerMember;
      if ( wearerMember == this->fields.memberIndex || (wearerMember & 0x80000000) != 0 )
      {
        if ( v58->fields._OrganizedWave_k__BackingField <= 0 && !v58->fields._IsUnique_k__BackingField )
        {
LABEL_80:
          servantItemInfo = this->fields.servantItemInfo;
          if ( !servantItemInfo )
            goto LABEL_257;
          EquipGraphServantItem__SetEquipTarget(servantItemInfo, 0LL, v54);
          servantItemDraw = this->fields.servantItemDraw;
          if ( !servantItemDraw )
            goto LABEL_257;
          EquipGraphServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, v102);
          v105 = this;
LABEL_83:
          EquipGraphListViewManager__RefrashListDisp(v105, v104);
          if ( callback )
          {
            p_selectItemCallbackFunc->klass = 0LL;
            sub_B16F98(p_selectItemCallbackFunc, 0LL, v106, v107, v108, v109, v110, v111);
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
          if ( !v51 )
            goto LABEL_257;
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_40FC4D5 & 1) == 0 )
          {
            sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v100);
            byte_40FC4D5 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v51, v100);
          goto LABEL_80;
        }
      }
      else
      {
        baseCost = this->fields.baseCost;
        p_baseCost = &this->fields.baseCost;
      }
      servantEntity = v58->fields.servantEntity;
      if ( servantEntity )
        LODWORD(servantEntity) = servantEntity->fields.cost;
      goto LABEL_76;
    }
LABEL_259:
    sub_B17100(RarityType, v53, v54);
    sub_B170A0();
  }
  if ( selectItem->fields._OrganizedWave_k__BackingField >= 1 )
  {
    v62 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v62 = (_QWORD *)sub_B17004(Method_EquipGraphListViewManager_SelectEquip__);
    v63 = (System_Reflection_MethodBase_o *)sub_B16FE0(v62, v62[3]);
    OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0LL);
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
      Member = PartyListViewItem__GetMember((PartyListViewItem_o *)v67[4], (*p_selectItem)->fields.wearerMember, 0LL);
      if ( !Member )
        goto LABEL_257;
      events = (int)v68->_1.events;
      EquipCost = PartyOrganizationListViewItem__get_EquipCost(Member, 0LL);
      v72 = this->fields.servantItemInfo;
      if ( !v72 )
        goto LABEL_257;
      equipServantEntity = v72->fields.equipServantEntity;
      if ( equipServantEntity )
        LODWORD(equipServantEntity) = equipServantEntity->fields.cost;
      if ( events - EquipCost + (int)equipServantEntity > SHIDWORD(v68->_1.interopData) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v75 = LocalizationManager__Get((System_String_o *)StringLiteral_15283, 0LL);
        v76 = LocalizationManager__Get((System_String_o *)StringLiteral_15282, 0LL);
        v81 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(
                                                      NotificationDialog_ClickDelegate_TypeInfo,
                                                      v77,
                                                      v78,
                                                      v79,
                                                      v80);
        NotificationDialog_ClickDelegate___ctor(
          v81,
          (Il2CppObject *)this,
          Method_EquipGraphListViewManager__SelectEquip_b__71_0__,
          0LL);
        if ( !Instance )
          goto LABEL_257;
        CommonUI__OpenNotificationDialog_18239760(
          Instance,
          v75,
          v76,
          v81,
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
      v112 = LocalizationManager__Get((System_String_o *)StringLiteral_15287, 0LL);
      v114 = sub_B17014(object___TypeInfo, 10LL, v113);
      if ( !*p_selectItem )
        goto LABEL_257;
      v115 = v114;
      LODWORD(v330.fields.currentCryptoKey) = (*p_selectItem)->fields._OrganizedWave_k__BackingField;
      RarityType = j_il2cpp_value_box_0(int_TypeInfo, &v330);
      if ( !v115 )
        goto LABEL_257;
      v121 = (System_Int32_array **)RarityType;
      if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v115 + 24) )
          goto LABEL_259;
        *(_QWORD *)(v115 + 32) = v121;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v115 + 32),
          v121,
          (System_String_array **)v54,
          v116,
          v117,
          v118,
          v119,
          v120);
        maxWave = this->fields.maxWave;
        RarityType = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v127 = (System_Int32_array **)RarityType;
        if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v115 + 24) <= 1u )
            goto LABEL_259;
          *(_QWORD *)(v115 + 40) = v127;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v115 + 40),
            v127,
            (System_String_array **)v54,
            v122,
            v123,
            v124,
            v125,
            v126);
          if ( !*p_selectItem )
            goto LABEL_257;
          weareRarity = (*p_selectItem)->fields.weareRarity;
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          RarityType = (__int64)Rarity__getRarityType(weareRarity, 0LL);
          v134 = (System_Int32_array **)RarityType;
          if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v115 + 24) <= 2u )
              goto LABEL_259;
            *(_QWORD *)(v115 + 48) = v134;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v115 + 48),
              v134,
              (System_String_array **)v54,
              v129,
              v130,
              v131,
              v132,
              v133);
            if ( !*p_selectItem )
              goto LABEL_257;
            RarityType = (__int64)EquipGraphListViewItem__get_WeareServantClassName(*p_selectItem, v135);
            v141 = (System_Int32_array **)RarityType;
            if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v115 + 24) <= 3u )
                goto LABEL_259;
              *(_QWORD *)(v115 + 56) = v141;
              sub_B16F98(
                (BattleServantConfConponent_o *)(v115 + 56),
                v141,
                (System_String_array **)v54,
                v136,
                v137,
                v138,
                v139,
                v140);
              if ( !*p_selectItem )
                goto LABEL_257;
              wearerServantName = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
              if ( !wearerServantName
                || (RarityType = sub_B170BC(wearerServantName, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v115 + 24) <= 4u )
                  goto LABEL_259;
                *(_QWORD *)(v115 + 64) = wearerServantName;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v115 + 64),
                  wearerServantName,
                  (System_String_array **)v54,
                  v142,
                  v143,
                  v144,
                  v145,
                  v146);
                partyNumber = this->fields.partyNumber;
                RarityType = j_il2cpp_value_box_0(int_TypeInfo, &partyNumber);
                v153 = (System_Int32_array **)RarityType;
                if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v115 + 24) <= 5u )
                    goto LABEL_259;
                  *(_QWORD *)(v115 + 72) = v153;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)(v115 + 72),
                    v153,
                    (System_String_array **)v54,
                    v148,
                    v149,
                    v150,
                    v151,
                    v152);
                  v331 = this->fields.maxWave;
                  RarityType = j_il2cpp_value_box_0(int_TypeInfo, &v331);
                  v159 = (System_Int32_array **)RarityType;
                  if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v115 + 24) <= 6u )
                      goto LABEL_259;
                    *(_QWORD *)(v115 + 80) = v159;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)(v115 + 80),
                      v159,
                      (System_String_array **)v54,
                      v154,
                      v155,
                      v156,
                      v157,
                      v158);
                    v160 = this->fields.servantItemInfo;
                    if ( !v160 )
                      goto LABEL_257;
                    userServantEntity = v160->fields.userServantEntity;
                    if ( !userServantEntity )
                      goto LABEL_257;
                    Rarity = UserServantEntity__getRarity(userServantEntity, 0LL);
                    RarityType = (__int64)Rarity__getRarityType(Rarity, 0LL);
                    v168 = (System_Int32_array **)RarityType;
                    if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v115 + 24) <= 7u )
                        goto LABEL_259;
                      *(_QWORD *)(v115 + 88) = v168;
                      sub_B16F98(
                        (BattleServantConfConponent_o *)(v115 + 88),
                        v168,
                        (System_String_array **)v54,
                        v163,
                        v164,
                        v165,
                        v166,
                        v167);
                      v170 = this->fields.servantItemInfo;
                      if ( !v170 )
                        goto LABEL_257;
                      RarityType = (__int64)EquipGraphServantItem__get_ClassName(v170, v169);
                      v176 = (System_Int32_array **)RarityType;
                      if ( !RarityType
                        || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v115 + 24) <= 8u )
                          goto LABEL_259;
                        *(_QWORD *)(v115 + 96) = v176;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)(v115 + 96),
                          v176,
                          (System_String_array **)v54,
                          v171,
                          v172,
                          v173,
                          v174,
                          v175);
                        v178 = this->fields.servantItemInfo;
                        if ( !v178 )
                          goto LABEL_257;
                        RarityType = (__int64)EquipGraphServantItem__get_NameText(v178, v177);
                        v184 = (System_Int32_array **)RarityType;
                        if ( !RarityType
                          || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v115 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v115 + 24) > 9u )
                          {
                            *(_QWORD *)(v115 + 104) = v184;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)(v115 + 104),
                              v184,
                              (System_String_array **)v54,
                              v179,
                              v180,
                              v181,
                              v182,
                              v183);
                            v185 = System_String__Format_43822456(v112, (System_Object_array *)v115, 0LL);
                            v186 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v187 = LocalizationManager__Get((System_String_o *)StringLiteral_15288, 0LL);
                            v188 = LocalizationManager__Get((System_String_o *)StringLiteral_3258, 0LL);
                            v189 = LocalizationManager__Get((System_String_o *)StringLiteral_3255, 0LL);
                            v194 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                            v190,
                                                                            v191,
                                                                            v192,
                                                                            v193);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v194,
                              (Il2CppObject *)this,
                              Method_EquipGraphListViewManager_EndSelectConfirm__,
                              0LL);
                            if ( !v186 )
                              goto LABEL_257;
                            CommonUI__OpenConfirmDialog_18237500(
                              v186,
                              v187,
                              v185,
                              v188,
                              v189,
                              v194,
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
      sub_B170F4(RarityType);
      sub_B170A0();
    }
    goto LABEL_74;
  }
  if ( selectItem->fields._IsUnique_k__BackingField )
  {
    v83 = Method_EquipGraphListViewManager_SelectEquip__;
    if ( (*((_BYTE *)Method_EquipGraphListViewManager_SelectEquip__ + 75) & 2) != 0 )
      v83 = (_QWORD *)sub_B17004(Method_EquipGraphListViewManager_SelectEquip__);
    v84 = (System_Reflection_MethodBase_o *)sub_B16FE0(v83, v83[3]);
    OverwriteAssetSoundName__PlaySystemSe(v84, 0, 0LL);
    v85 = this->fields.servantItemInfo;
    if ( !v85 )
      goto LABEL_257;
    if ( v85->fields.equipUserSvtEntity )
    {
      v86 = this->fields.waveDeckItemList;
      if ( !v86 )
        goto LABEL_257;
      v87 = *(_QWORD *)&v86->max_length;
      if ( (int)v87 < 1 )
        return;
      v88 = 0LL;
      v89 = 1;
      v327 = this->fields.waveDeckItemList;
      while ( 1 )
      {
        if ( v88 >= (unsigned int)v87 )
          goto LABEL_259;
        v90 = v86->m_Items[v88];
        v91 = 0;
        do
        {
          RarityType = (__int64)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            RarityType = (__int64)BalanceConfig_TypeInfo;
          }
          if ( v91 >= *(_DWORD *)(*(_QWORD *)(RarityType + 184) + 160LL) )
            goto LABEL_72;
          if ( !v90 )
            goto LABEL_257;
          v92 = PartyListViewItem__GetMember(v90, v91, 0LL);
          if ( !*p_selectItem )
            goto LABEL_257;
          v93 = (*p_selectItem)->fields.servantEntity;
          if ( !v93 )
            goto LABEL_257;
          v94 = v92;
          v96 = *(_QWORD *)&v93->fields.id.fields.currentCryptoKey;
          v95 = *(_QWORD *)&v93->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v335.fields.currentCryptoKey = v96;
          *(_QWORD *)&v335.fields.fakeValue = v95;
          v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v335, 0LL);
          if ( !v94 )
            goto LABEL_257;
          v98 = v97;
          EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v94, 0LL);
          RarityType = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(EquipSvtId, 0LL);
          ++v91;
        }
        while ( v98 != (_DWORD)RarityType );
        v99 = v94->fields.servantEntity;
        if ( v99 )
          break;
LABEL_72:
        v86 = v327;
        ++v88;
        ++v89;
        LODWORD(v87) = v327->max_length;
        if ( (__int64)v88 >= (int)v87 )
          return;
      }
      v279 = v94->fields.userServantEntity;
      if ( !v279 )
        return;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v280 = LocalizationManager__Get((System_String_o *)StringLiteral_15284, 0LL);
      v282 = sub_B17014(object___TypeInfo, 5LL, v281);
      LODWORD(v330.fields.currentCryptoKey) = v89;
      RarityType = j_il2cpp_value_box_0(int_TypeInfo, &v330);
      if ( !v282 )
        goto LABEL_257;
      v288 = (System_Int32_array **)RarityType;
      if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v282 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v282 + 24) )
          goto LABEL_259;
        *(_QWORD *)(v282 + 32) = v288;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v282 + 32),
          v288,
          (System_String_array **)v54,
          v283,
          v284,
          v285,
          v286,
          v287);
        maxWave = this->fields.maxWave;
        RarityType = j_il2cpp_value_box_0(int_TypeInfo, &maxWave);
        v294 = (System_Int32_array **)RarityType;
        if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v282 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v282 + 24) <= 1u )
            goto LABEL_259;
          *(_QWORD *)(v282 + 40) = v294;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v282 + 40),
            v294,
            (System_String_array **)v54,
            v289,
            v290,
            v291,
            v292,
            v293);
          v295 = UserServantEntity__getRarity(v279, 0LL);
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          RarityType = (__int64)Rarity__getRarityType(v295, 0LL);
          v301 = (System_Int32_array **)RarityType;
          if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v282 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v282 + 24) <= 2u )
              goto LABEL_259;
            *(_QWORD *)(v282 + 48) = v301;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v282 + 48),
              v301,
              (System_String_array **)v54,
              v296,
              v297,
              v298,
              v299,
              v300);
            RarityType = (__int64)ServantEntity__getClassName(v99, 0LL);
            v307 = (System_Int32_array **)RarityType;
            if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v282 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v282 + 24) <= 3u )
                goto LABEL_259;
              *(_QWORD *)(v282 + 56) = v307;
              sub_B16F98(
                (BattleServantConfConponent_o *)(v282 + 56),
                v307,
                (System_String_array **)v54,
                v302,
                v303,
                v304,
                v305,
                v306);
              v309 = *(_QWORD *)&v279->fields.limitCount.fields.currentCryptoKey;
              v308 = *(_QWORD *)&v279->fields.limitCount.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v337.fields.currentCryptoKey = v309;
              *(_QWORD *)&v337.fields.fakeValue = v308;
              v310 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v337, 0LL);
              RarityType = (__int64)ServantEntity__getName(v99, v310, -1, 0LL);
              v316 = (System_Int32_array **)RarityType;
              if ( !RarityType || (RarityType = sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v282 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v282 + 24) > 4u )
                {
                  *(_QWORD *)(v282 + 64) = v316;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)(v282 + 64),
                    v316,
                    (System_String_array **)v54,
                    v311,
                    v312,
                    v313,
                    v314,
                    v315);
                  v317 = System_String__Format_43822456(v280, (System_Object_array *)v282, 0LL);
                  v318 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v319 = LocalizationManager__Get((System_String_o *)StringLiteral_5515, 0LL);
                  v320 = LocalizationManager__Get((System_String_o *)StringLiteral_3258, 0LL);
                  v321 = LocalizationManager__Get((System_String_o *)StringLiteral_3255, 0LL);
                  v326 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v322,
                                                                  v323,
                                                                  v324,
                                                                  v325);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v326,
                    (Il2CppObject *)this,
                    Method_EquipGraphListViewManager_EndSelectConfirm__,
                    0LL);
                  if ( !v318 )
                    goto LABEL_257;
                  CommonUI__OpenConfirmDialog_18237500(
                    v318,
                    v319,
                    v317,
                    v320,
                    v321,
                    v326,
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
    EquipGraphListViewManager__EndSelectConfirm(this, 1, v54);
    return;
  }
  v195 = selectItem->fields.wearerMember;
  if ( v195 == this->fields.memberIndex || (v195 & 0x80000000) != 0 )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.isWaveBattle )
    {
      v251 = this->fields.waveDeckItemList;
      if ( !v251 )
        goto LABEL_257;
      v252 = this->fields.partyNumber - 1;
      if ( v252 >= v251->max_length )
        goto LABEL_259;
      v253 = this->fields.selectItem;
      if ( !v253 )
        goto LABEL_257;
      userSvtEntity = v253->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_257;
      memberIndex = this->fields.memberIndex;
      v256 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v257 = v251->m_Items[v252];
      *(_OWORD *)&v330.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v330.fields.fakeValue = v256;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v329 = v330;
      v258 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v329, 0LL);
      if ( !v257 )
        goto LABEL_257;
      PartyListViewItem__SetEquip(v257, memberIndex, v258, 0LL);
    }
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_257;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v330,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v334 = *(System_Collections_Generic_List_Enumerator_T__o *)&v330.fields.currentCryptoKey;
    while ( 1 )
    {
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v334,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v334,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( *p_selectItem )
          {
            (*p_selectItem)->fields.isBase = 1;
            v271 = this->fields.selectItem;
            if ( v271 )
            {
              v272 = v271->fields.userSvtEntity;
              if ( v272 )
              {
                v273 = *(_OWORD *)&v272->fields.id.fields.fakeValue;
                v274 = this->fields.servantItemInfo;
                *(_OWORD *)&v330.fields.currentCryptoKey = *(_OWORD *)&v272->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v330.fields.fakeValue = v273;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v328 = v330;
                v275 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v328, 0LL);
                if ( v274 )
                {
                  EquipGraphServantItem__SetEquipTarget(v274, v275, v276);
                  v278 = this->fields.servantItemDraw;
                  if ( v278 )
                  {
                    EquipGraphServantItemDraw__SetItem(v278, this->fields.servantItemInfo, v277);
                    v105 = this;
                    goto LABEL_83;
                  }
                }
              }
            }
          }
LABEL_257:
          sub_B170D4();
        }
        current = v334.fields.current;
        if ( v334.fields.current )
        {
          v261 = *(&EquipGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v334.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v261
            && (EquipGraphListViewItem_c *)v334.fields.current->klass->_2.typeHierarchy[v261 - 1] == EquipGraphListViewItem_TypeInfo )
          {
            continue;
          }
        }
        sub_B170D4();
      }
      while ( !BYTE1(v334.fields.current[9].klass) );
      BYTE1(v334.fields.current[9].klass) = 0;
      klass_high = HIDWORD(current[9].klass);
      if ( klass_high != this->fields.memberIndex && (klass_high & 0x80000000) == 0 )
        break;
      if ( SHIDWORD(current[14].monitor) > 0 || BYTE4(current[15].klass) )
      {
        v263 = this->fields.baseCost;
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
        this->fields.baseCost = (_DWORD)monitor + v263;
        v265 = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v265, 0LL, 0LL) )
        {
          v266 = current[6].monitor;
          if ( !v266
            || (v267 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v266 + 300LL) < (unsigned int)v267)
            || *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v266 + 200LL) + 8 * v267 - 8) != EquipGraphListViewObject_TypeInfo )
          {
            sub_B170D4();
          }
          v268 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)v266 + 300LL) >= (unsigned int)v268 )
          {
            if ( *(EquipGraphListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v266 + 200LL) + 8 * v268 - 8) == EquipGraphListViewObject_TypeInfo )
              v269 = (EquipGraphListViewObject_o *)current[6].monitor;
            else
              v269 = 0LL;
          }
          else
          {
            v269 = 0LL;
          }
          UnityEngine_Vector3__get_zero(0LL);
          if ( (byte_40FC4D5 & 1) == 0 )
          {
            sub_B16FFC(&EquipGraphListViewItem_TypeInfo, v270);
            byte_40FC4D5 = 1;
          }
          EquipGraphListViewObject__SetupDisp(v269, v270);
        }
      }
    }
    v263 = this->fields.baseCost;
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
  v196 = LocalizationManager__Get((System_String_o *)StringLiteral_5514, 0LL);
  v198 = sub_B17014(object___TypeInfo, 6LL, v197);
  if ( !this->fields.servantItemInfo )
    goto LABEL_257;
  v200 = (System_Object_array *)v198;
  RarityType = (__int64)EquipGraphServantItem__get_NameText(this->fields.servantItemInfo, v199);
  if ( !v200 )
    goto LABEL_257;
  v206 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = sub_B170BC(RarityType, v200->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_261;
  }
  if ( !v200->max_length )
    goto LABEL_259;
  v200->m_Items[0] = (Il2CppObject *)v206;
  sub_B16F98(
    (BattleServantConfConponent_o *)v200->m_Items,
    v206,
    (System_String_array **)v54,
    v201,
    v202,
    v203,
    v204,
    v205);
  if ( !*p_selectItem )
    goto LABEL_257;
  v212 = (System_Int32_array **)(*p_selectItem)->fields.wearerServantName;
  if ( v212 )
  {
    RarityType = sub_B170BC(v212, v200->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_261;
  }
  if ( v200->max_length <= 1 )
    goto LABEL_259;
  v200->m_Items[1] = (Il2CppObject *)v212;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v200->m_Items[1],
    v212,
    (System_String_array **)v54,
    v207,
    v208,
    v209,
    v210,
    v211);
  v214 = this->fields.servantItemInfo;
  if ( !v214 )
    goto LABEL_257;
  RarityType = (__int64)EquipGraphServantItem__get_ClassName(v214, v213);
  v220 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = sub_B170BC(RarityType, v200->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_261;
  }
  if ( v200->max_length <= 2 )
    goto LABEL_259;
  v200->m_Items[2] = (Il2CppObject *)v220;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v200->m_Items[2],
    v220,
    (System_String_array **)v54,
    v215,
    v216,
    v217,
    v218,
    v219);
  if ( !*p_selectItem )
    goto LABEL_257;
  RarityType = (__int64)EquipGraphListViewItem__get_WeareServantClassName(*p_selectItem, v221);
  v227 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = sub_B170BC(RarityType, v200->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_261;
  }
  if ( v200->max_length <= 3 )
    goto LABEL_259;
  v200->m_Items[3] = (Il2CppObject *)v227;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v200->m_Items[3],
    v227,
    (System_String_array **)v54,
    v222,
    v223,
    v224,
    v225,
    v226);
  v228 = this->fields.servantItemInfo;
  if ( !v228 )
    goto LABEL_257;
  v229 = v228->fields.userServantEntity;
  if ( !v229 )
    goto LABEL_257;
  v230 = UserServantEntity__getRarity(v229, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (__int64)Rarity__getRarityType(v230, 0LL);
  v236 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = sub_B170BC(RarityType, v200->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_261;
  }
  if ( v200->max_length <= 4 )
    goto LABEL_259;
  v200->m_Items[4] = (Il2CppObject *)v236;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v200->m_Items[4],
    v236,
    (System_String_array **)v54,
    v231,
    v232,
    v233,
    v234,
    v235);
  if ( !*p_selectItem )
    goto LABEL_257;
  RarityType = (__int64)Rarity__getRarityType((*p_selectItem)->fields.weareRarity, 0LL);
  v242 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = sub_B170BC(RarityType, v200->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_261;
  }
  if ( v200->max_length <= 5 )
    goto LABEL_259;
  v200->m_Items[5] = (Il2CppObject *)v242;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v200->m_Items[5],
    v242,
    (System_String_array **)v54,
    v237,
    v238,
    v239,
    v240,
    v241);
  v243 = System_String__Format_43822456(v196, v200, 0LL);
  v244 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v245 = LocalizationManager__Get((System_String_o *)StringLiteral_5515, 0LL);
  v250 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v246,
                                                  v247,
                                                  v248,
                                                  v249);
  CommonConfirmDialog_ClickDelegate___ctor(
    v250,
    (Il2CppObject *)this,
    Method_EquipGraphListViewManager_EndSelectConfirm__,
    0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v244 )
    goto LABEL_257;
  CommonUI__OpenConfirmDialog(v244, v245, v243, v250, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0, 0, 0LL);
}


void __fastcall EquipGraphListViewManager__SetFilterButtonImage(
        EquipGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FC4C5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927, method);
    sub_B16FFC(&StringLiteral_16926, v3);
    byte_40FC4C5 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_29304608(this, mode, v10);
}


void __fastcall EquipGraphListViewManager__SetMode_29304608(
        EquipGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  EquipGraphServantItemDraw_o *servantItemDraw; // x0
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Behaviour_o *v9; // x0
  UIScrollView_o *v10; // x0
  int32_t v11; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_15;
  EquipGraphServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, v5);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
    goto LABEL_7;
  v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !v9 || (UnityEngine_Behaviour__set_enabled(v9, 1, 0LL), (v10 = this->fields.scrollView) == 0LL) )
LABEL_15:
    sub_B170D4();
  UIScrollView__UpdatePosition(v10, 0LL);
LABEL_7:
  switch ( mode )
  {
    case 3:
      v11 = 4;
      goto LABEL_13;
    case 2:
      v11 = 3;
      goto LABEL_13;
    case 1:
      v11 = 2;
LABEL_13:
      EquipGraphListViewManager__RequestListObject_29304868(this, v11, v8);
      break;
  }
}


void __fastcall EquipGraphListViewManager__SetMode_29304812(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EquipGraphListViewManager__SetMode_29304608(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager__SetObjectItem(
        EquipGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40FC4BB & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewObject_TypeInfo, obj);
    byte_40FC4BB = 1;
  }
  if ( !obj
    || (v6 = *(&EquipGraphListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EquipGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EquipGraphListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
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
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  ListViewSort_o *v28; // x0
  UILabel_o *v29; // x20
  System_Int32_array *bonusEventIdList; // x1
  System_String_o *BonusKindText_30242532; // x0

  if ( (byte_40FC4CA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955, v3);
    sub_B16FFC(&StringLiteral_17038, v4);
    sub_B16FFC(&StringLiteral_16995, v5);
    sub_B16FFC(&StringLiteral_16985, v6);
    sub_B16FFC(&StringLiteral_17002, v7);
    sub_B16FFC(&StringLiteral_16952, v8);
    byte_40FC4CA = 1;
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
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_45;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_45;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( !sortExplanationSprite )
        goto LABEL_45;
      v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
      UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
      v18 = this->fields.sort;
      if ( !v18 )
        goto LABEL_45;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_45;
      isAscendingOrder = v18->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16952;
      v22 = (System_String_o **)&StringLiteral_16955;
    }
    else
    {
      v23 = this->fields.sortExplanationSprite;
      if ( !v23 )
        goto LABEL_45;
      v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
      UISprite__set_spriteName(v23, *v24, 0LL);
      v25 = this->fields.sort;
      if ( !v25 )
        goto LABEL_45;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_45;
      isAscendingOrder = v25->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16955;
      v22 = (System_String_o **)&StringLiteral_16952;
    }
    if ( isAscendingOrder )
      v26 = v21;
    else
      v26 = v22;
    UISprite__set_spriteName(v19, *v26, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    v28 = this->fields.sort;
    if ( v28 )
    {
      v29 = this->fields.bonusFilterKindLabel;
      bonusEventIdList = this->fields.bonusEventIdList;
      if ( this->fields.isQuestStart )
      {
        BonusKindText_30242532 = ListViewSort__GetBonusKindText_30242532(v28, bonusEventIdList, 0LL, 0, 0LL, 0LL);
        if ( v29 )
        {
LABEL_42:
          UILabel__set_text(v29, BonusKindText_30242532, 0LL);
          return;
        }
      }
      else
      {
        BonusKindText_30242532 = ListViewSort__GetBonusKind2Text_30244736(
                                   v28,
                                   bonusEventIdList,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
        if ( v29 )
          goto LABEL_42;
      }
    }
LABEL_45:
    sub_B170D4();
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

  if ( (byte_40FC4CD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FC4CD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  selectItemCallbackFunc = this->fields.selectItemCallbackFunc;
  if ( selectItemCallbackFunc )
  {
    this->fields.selectItemCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectItemCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_40FC4AA & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FC4AA = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FC4AC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FC4AC = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FC4AE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FC4AE = 1;
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
    v8 = sub_B0BA14(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  EquipGraphListViewManager__remove_selectItemCallbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ClippingObjectList(
        EquipGraphListViewManager_o *this,
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
  Il2CppObject *current; // x21
  EquipGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FC4B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FC4B3 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EquipGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)current,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)EquipGraphListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v14;
}


System_Collections_Generic_List_EquipGraphListViewObject__o *__fastcall EquipGraphListViewManager__get_ObjectList(
        EquipGraphListViewManager_o *this,
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

  if ( (byte_40FC4B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FC4B2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EquipGraphListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EquipGraphListViewObject___ctor__);
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
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EquipGraphListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EquipGraphListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EquipGraphListViewObject__o *)v14;
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

  if ( (byte_40FC4AB & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FC4AB = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FC4AD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FC4AD = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FC4AF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FC4AF = 1;
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
    v8 = sub_B0BA14(p_selectItemCallbackFunc, v7, selectItemCallbackFunc);
    v9 = selectItemCallbackFunc == (System_Delegate_o *)v8;
    selectItemCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  EquipGraphListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewManager_CallbackFunc___ctor(
        EquipGraphListViewManager_CallbackFunc_o *this,
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
  if ( (byte_40F8B87 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&EquipGraphListViewManager_ResultKind_TypeInfo, v9);
    byte_40F8B87 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall EquipGraphListViewManager_CallbackFunc__EndInvoke(
        EquipGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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