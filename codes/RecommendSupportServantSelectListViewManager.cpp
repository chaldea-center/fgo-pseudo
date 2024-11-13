void __fastcall RecommendSupportServantSelectListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewSort_o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B12492 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_11341/*"RecommendSupportServantSelectAll"*/, v6, v7);
    byte_4B12492 = 1;
  }
  v8 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v8, (System_String_o *)StringLiteral_11341/*"RecommendSupportServantSelectAll"*/, 3, 0, 0LL);
  RecommendSupportServantSelectListViewManager_TypeInfo->static_fields->ServantSortInfoAll = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportServantSelectListViewManager_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall RecommendSupportServantSelectListViewManager___ctor(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.selectIndex = -1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__Awake(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportServantSelectListViewManager__ChangeIconScale(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v11; // w8
  PartyOrganizationUtility_o *p_seed; // x0
  struct ListViewSort_o *sort; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_8;
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
  }
  this->fields.seed = smallSizeSeed;
  p_seed = (PartyOrganizationUtility_o *)&this->fields.seed;
  p_seed[2].fields._SelectedPartyPosition_k__BackingField = v11;
  sub_1BCA784(p_seed, (int64_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  RecommendSupportServantSelectListViewManager__ModifyList(this, 1, v14);
  RecommendSupportServantSelectListViewManager__SetMode_33184412(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__CreateList(
        RecommendSupportServantSelectListViewManager_o *this,
        RecommendSupportData_o *supportServantData,
        int32_t index,
        EventUpValSetupInfo_o *eventSetupInfo,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  RecommendSupportServantSelectListViewManager_c *v34; // x0
  int64_t ServantSortInfoAll; // x0
  struct RecommendSupportServantSelectListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *v37; // x1
  struct ListViewSort_o **p_sort; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct ListViewSort_o *sort; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x22
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x8
  unsigned __int64 v78; // x23
  UserServantEntity_o *v79; // x25
  int32_t selectIndex; // w26
  EventCampaignEntity_array *eventFriendPoints; // x27
  RecommendSupportServantSelectListViewItem_o *v82; // x24
  const MethodInfo *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v95; // x1
  const MethodInfo *v96; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v102; // x20
  System_Action_o *v103; // x22
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  TimeOverChecker_o *v107; // x23
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v118; // x21
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  TimeOverChecker_o *v122; // x22
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7

  if ( (byte_4B12479 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, supportServantData, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjectsStart__, v21, v22);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjects__, v23, v24);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&TimeOverChecker_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v31, v32);
    byte_4B12479 = 1;
  }
  this->fields.recommendSupportData = supportServantData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.recommendSupportData,
    (int64_t)supportServantData,
    *(int64_t *)&index,
    (int32_t)eventSetupInfo,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.selectIndex = index;
  this->fields.isCanNotLongPush = 0;
  v34 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo, v33);
    v34 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = (int64_t)v34->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ListViewSort__Load((ListViewSort_o *)ServantSortInfoAll, 0LL);
  ServantSortInfoAll = (int64_t)this->fields.filterButton;
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)ServantSortInfoAll,
                                  0LL);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantSortInfoAll, 1, 0LL);
  static_fields = RecommendSupportServantSelectListViewManager_TypeInfo->static_fields;
  v37 = static_fields->ServantSortInfoAll;
  this->fields.sort = static_fields->ServantSortInfoAll;
  p_sort = &this->fields.sort;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v37, v39, v40, v41, v42, v43, v44);
  ServantSortInfoAll = (int64_t)this->fields.sort;
  if ( eventSetupInfo )
  {
    if ( !ServantSortInfoAll )
      goto LABEL_48;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)ServantSortInfoAll,
                           0LL,
                           eventSetupInfo->fields.supportFilterEventCampaignIds,
                           eventSetupInfo->fields.supportFilterEventIds,
                           0LL,
                           eventSetupInfo->fields.servantFilterIds,
                           0,
                           0LL);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
      (int64_t)AlignedBonusFilter,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    sort = this->fields.sort;
    ServantSortInfoAll = BasicHelper__IsNullOrEmpty(
                           (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                           0LL);
    if ( !sort )
      goto LABEL_48;
    sort->fields.isBonusKind = (ServantSortInfoAll & 1) == 0;
  }
  else
  {
    if ( !ServantSortInfoAll )
      goto LABEL_48;
    *(_BYTE *)(ServantSortInfoAll + 61) = 0;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v45, v46, v47, v48, v49, v50);
  }
  ServantSortInfoAll = (int64_t)this->fields.bonusFilterKindButton;
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)ServantSortInfoAll,
                                  0LL);
  if ( !*p_sort )
    goto LABEL_48;
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantSortInfoAll, (*p_sort)->fields.isBonusKind, 0LL);
  if ( !*p_sort )
    goto LABEL_48;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_24;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_24;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_24:
    this->fields.seed = normalSizeSeed;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v59, v60, v61, v62, v63, v64);
  }
  ServantSortInfoAll = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)ServantSortInfoAll,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)ServantSortInfoAll, 0LL);
  ServantSortInfoAll = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)ServantSortInfoAll,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns(
                           (EventCampaignMaster_o *)ServantSortInfoAll,
                           0,
                           0LL);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !OrganizationList )
    goto LABEL_48;
  v77 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v77 >= 1 )
  {
    v78 = 0LL;
    while ( 1 )
    {
      if ( v78 >= (unsigned int)v77 )
        sub_1BCAA44(ServantSortInfoAll, v33);
      v79 = OrganizationList->m_Items[v78];
      selectIndex = this->fields.selectIndex;
      eventFriendPoints = this->fields.eventFriendPoints;
      v82 = (RecommendSupportServantSelectListViewItem_o *)sub_1BCAA2C(
                                                             RecommendSupportServantSelectListViewItem_TypeInfo,
                                                             v33,
                                                             v75,
                                                             v76);
      RecommendSupportServantSelectListViewItem___ctor(
        v82,
        v78,
        v79,
        supportServantData,
        selectIndex,
        eventSetupInfo,
        eventFriendPoints,
        v83);
      ServantSortInfoAll = (int64_t)this->fields.itemList;
      if ( !ServantSortInfoAll )
        break;
      v90 = *(_QWORD *)(ServantSortInfoAll + 16);
      v91 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ServantSortInfoAll + 28);
      if ( !v90 )
        break;
      v92 = *(int *)(ServantSortInfoAll + 24);
      if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ServantSortInfoAll,
          (Il2CppObject *)v82,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = v90 + 8 * v92;
        *(_DWORD *)(ServantSortInfoAll + 24) = v92 + 1;
        *(_QWORD *)(v93 + 32) = v82;
        sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 32), (int64_t)v82, v84, v85, v86, v87, v88, v89);
      }
      LODWORD(v77) = OrganizationList->max_length;
      if ( (__int64)++v78 >= (int)v77 )
        goto LABEL_39;
    }
LABEL_48:
    sub_1BCAA3C(ServantSortInfoAll, v33);
  }
LABEL_39:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  ServantSortInfoAll = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_48;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ServantSortInfoAll, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  RecommendSupportServantSelectListViewManager__SetFilterButtonImage(this, v95);
  EventFriendCampaignFinishedAt = RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(
                                    this,
                                    v96);
  timeOverChecker = this->fields.timeOverChecker;
  v102 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v103 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v98, v99, v100);
    System_Action___ctor(
      v103,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjects__,
      0LL);
    v107 = (TimeOverChecker_o *)sub_1BCAA2C(TimeOverChecker_TypeInfo, v104, v105, v106);
    TimeOverChecker___ctor(v107, v103, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    this->fields.timeOverChecker = v107;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.timeOverChecker,
      (int64_t)v107,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    timeOverChecker = this->fields.timeOverChecker;
    if ( !timeOverChecker )
      goto LABEL_48;
  }
  TimeOverChecker__Start(timeOverChecker, v102, 0LL);
  eventStartChecker = this->fields.eventStartChecker;
  if ( eventStartChecker )
  {
    ServantSortInfoAll = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  }
  else
  {
    v118 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v114, v115, v116);
    System_Action___ctor(
      v118,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
      0LL);
    v122 = (TimeOverChecker_o *)sub_1BCAA2C(TimeOverChecker_TypeInfo, v119, v120, v121);
    TimeOverChecker___ctor(v122, v118, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    this->fields.eventStartChecker = v122;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventStartChecker,
      (int64_t)v122,
      v123,
      v124,
      v125,
      v126,
      v127,
      v128);
    eventStartChecker = this->fields.eventStartChecker;
    ServantSortInfoAll = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
    if ( !eventStartChecker )
      goto LABEL_48;
  }
  TimeOverChecker__Start(eventStartChecker, ServantSortInfoAll, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  RecommendSupportServantSelectListViewManager_c *v3; // x0
  ListViewSort_o *ServantSortInfoAll; // x0

  if ( (byte_4B12475 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_TypeInfo, v1, v2);
    byte_4B12475 = 1;
  }
  v3 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo, v1);
    v3 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = v3->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__DeleteContinueData(ServantSortInfoAll, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__DestroyList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos, 0LL, v5, v6, v7, v8, v9, v10);
}


void __fastcall RecommendSupportServantSelectListViewManager__EndCloseShowServant(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportServantSelectListViewManager__RequestListObject_33213684(this, 3, v2);
}


void __fastcall RecommendSupportServantSelectListViewManager__EndCloseShowServantQuestJump(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B12484 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B12484 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__EndSelectFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  RecommendSupportServantSelectListViewManager___c_c *v16; // x8
  CommonUI_o *v17; // x19
  System_Action_o *_9__58_0; // x20
  Il2CppObject *v19; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B12487 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager___c__EndSelectFilterKind_b__58_0__, v7, v8);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager___c_TypeInfo, v9, v10);
    byte_4B12487 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    RecommendSupportServantSelectListViewManager__SetFilterButtonImage(this, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo, v13);
    v16 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__58_0 = v16->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v13);
      v16 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__58_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(
      _9__58_0,
      v19,
      Method_RecommendSupportServantSelectListViewManager___c__EndSelectFilterKind_b__58_0__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = _9__58_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__58_0,
      (int64_t)_9__58_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v17 )
    sub_1BCAA3C(Instance, v13);
  CommonUI__CloseServantFilterSelectMenu(v17, _9__58_0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__EndShowServant(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v16; // x2
  Il2CppObject *Instance; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x0
  intptr_t v22; // w2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x21

  if ( (byte_4B12483 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_EndCloseShowServantQuestJump__, v9, v10);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_EndCloseShowServant__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    byte_4B12483 = 1;
  }
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  if ( !UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_17;
    UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
  }
  if ( questId < 1 )
  {
    RecommendSupportServantSelectListViewManager__UpdateItemState(this, 0, v16);
    if ( isDecide )
    {
      RecommendSupportServantSelectListViewManager__ModifyList(this, 0, v23);
      if ( isNeedSort )
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      RecommendSupportServantSelectListViewManager__RequestListObject_33213684(this, 4, v24);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    v22 = Method_RecommendSupportServantSelectListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
    v22 = Method_RecommendSupportServantSelectListViewManager_EndCloseShowServantQuestJump__;
  }
  v28 = v21;
  System_Action___ctor(v21, (Il2CppObject *)this, v22, 0LL);
  if ( !Instance )
LABEL_17:
    sub_1BCAA3C(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v28, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall RecommendSupportServantSelectListViewManager__GetAmountSortValue(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v11; // w22
  int64_t v12; // x21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1248C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem_TypeInfo, v7, v8);
    byte_4B1248C = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0LL;
  v11 = 0;
  v12 = 0LL;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v11,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewItem_TypeInfo
        && RecommendSupportServantSelectListViewItem__get_SvtId(
             (RecommendSupportServantSelectListViewItem_o *)Item,
             *(const MethodInfo **)&svtId) == svtId )
      {
        ++v12;
      }
    }
    if ( size == ++v11 )
      return v12;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_13;
  }
}


int64_t __fastcall RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x19
  unsigned int v13; // w22
  void *monitor; // x20
  EventCampaignEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1248F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6, v7);
    byte_4B1248F = 1;
  }
  entity = 0LL;
  if ( this->fields.eventFriendPoints )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
    eventFriendPoints = this->fields.eventFriendPoints;
    if ( !eventFriendPoints )
      goto LABEL_23;
    max_length = eventFriendPoints->max_length;
    if ( max_length >= 1 )
    {
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v13 = 0;
      monitor = 0LL;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1BCAA44(Master_object, v9);
        v15 = eventFriendPoints->m_Items[v13];
        if ( !v15 || !v12 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v12,
                                          &entity,
                                          v15->fields.eventId,
                                          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( monitor )
          {
            if ( (__int64)entity[6].monitor < (__int64)monitor )
              monitor = entity[6].monitor;
          }
          else
          {
            monitor = entity[6].monitor;
          }
        }
        max_length = eventFriendPoints->max_length;
        if ( (int)++v13 >= max_length )
          return (int64_t)monitor;
      }
LABEL_23:
      sub_1BCAA3C(Master_object, v9);
    }
  }
  return 0LL;
}


bool __fastcall RecommendSupportServantSelectListViewManager__GetFocusItemIndex(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B12491 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, list);
    this = (RecommendSupportServantSelectListViewManager_o *)sub_1BCA7E0(
                                                               &RecommendSupportServantSelectListViewItem_TypeInfo,
                                                               v8,
                                                               v9);
    byte_4B12491 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
      sub_1BCAA3C(this, index);
    v10 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v10,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        break;
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportServantSelectListViewItem_TypeInfo
        || BYTE4(Item[20].klass) )
      {
        break;
      }
      if ( sum == ++v10 )
        return 1;
    }
    *index = v10;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
RecommendSupportServantSelectListViewItem_o *__fastcall RecommendSupportServantSelectListViewManager__GetItem(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  RecommendSupportServantSelectListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1247B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem_TypeInfo, v5, v6);
    byte_4B1247B = 1;
  }
  result = (RecommendSupportServantSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (RecommendSupportServantSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)result,
                                                              index,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (RecommendSupportServantSelectListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportServantSelectListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


System_String_o *__fastcall RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall RecommendSupportServantSelectListViewManager__GetSwapChoiceList(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unChoiceList,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B1248E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, choiceList, unChoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem_TypeInfo, v21, v22);
    byte_4B1248E = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unChoiceList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low )
        goto LABEL_9;
      if ( *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                           + 8 * methodPtr_low
                                                           - 8) != RecommendSupportServantSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v39 = *(_QWORD *)(itemList + 192);
      if ( !v39 || !*(_BYTE *)(itemList + 186) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 185) )
      {
        v40 = *(_OWORD *)(v39 + 32);
        *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
        *(_OWORD *)&v70.fields.fakeValue = v40;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
        v69 = v70;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
        if ( !v27 )
          goto LABEL_37;
        items = v27->fields._items;
        v42 = Method_System_Collections_Generic_List_long__Add__;
        ++v27->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v27->fields._size;
        v28 = itemList;
        if ( (unsigned int)size >= items->max_length )
        {
          v49 = v42[4];
          v50 = v27;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v50,
            v28,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
          goto LABEL_9;
        }
        v44 = &items->obj.klass + size;
        v27->fields._size = size + 1;
      }
      else
      {
        v45 = *(_OWORD *)(v39 + 32);
        *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
        *(_OWORD *)&v70.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
        v68 = v70;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
        if ( !v23 )
          goto LABEL_37;
        v46 = v23->fields._items;
        v47 = Method_System_Collections_Generic_List_long__Add__;
        ++v23->fields._version;
        if ( !v46 )
          goto LABEL_37;
        v48 = v23->fields._size;
        v28 = itemList;
        if ( (unsigned int)v48 >= v46->max_length )
        {
          v49 = v47[4];
          v50 = v23;
          goto LABEL_30;
        }
        v44 = &v46->obj.klass + v48;
        v23->fields._size = v48 + 1;
      }
      v44[4] = (Il2CppClass *)v28;
LABEL_9:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unChoiceList;
    v59 = 0LL;
    *unChoiceList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unChoiceList = v59;
    v66 = unChoiceList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


bool __fastcall RecommendSupportServantSelectListViewManager__GetSwapLockList(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B1248D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem_TypeInfo, v21, v22);
    byte_4B1248D = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low )
        goto LABEL_9;
      if ( *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                           + 8 * methodPtr_low
                                                           - 8) != RecommendSupportServantSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v39 = *(_QWORD *)(itemList + 192);
      if ( !v39 || !*(_BYTE *)(itemList + 184) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 167) )
      {
        v40 = *(_OWORD *)(v39 + 32);
        *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
        *(_OWORD *)&v70.fields.fakeValue = v40;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
        v69 = v70;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
        if ( !v27 )
          goto LABEL_37;
        items = v27->fields._items;
        v42 = Method_System_Collections_Generic_List_long__Add__;
        ++v27->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v27->fields._size;
        v28 = itemList;
        if ( (unsigned int)size >= items->max_length )
        {
          v49 = v42[4];
          v50 = v27;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v50,
            v28,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
          goto LABEL_9;
        }
        v44 = &items->obj.klass + size;
        v27->fields._size = size + 1;
      }
      else
      {
        v45 = *(_OWORD *)(v39 + 32);
        *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
        *(_OWORD *)&v70.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
        v68 = v70;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
        if ( !v23 )
          goto LABEL_37;
        v46 = v23->fields._items;
        v47 = Method_System_Collections_Generic_List_long__Add__;
        ++v23->fields._version;
        if ( !v46 )
          goto LABEL_37;
        v48 = v23->fields._size;
        v28 = itemList;
        if ( (unsigned int)v48 >= v46->max_length )
        {
          v49 = v47[4];
          v50 = v23;
          goto LABEL_30;
        }
        v44 = &v46->obj.klass + v48;
        v23->fields._size = v48 + 1;
      }
      v44[4] = (Il2CppClass *)v28;
LABEL_9:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *lockList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unlockList;
    v59 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v59;
    v66 = unlockList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


void __fastcall RecommendSupportServantSelectListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  RecommendSupportServantSelectListViewManager_c *v3; // x0
  ListViewSort_o *ServantSortInfoAll; // x0

  if ( (byte_4B12476 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_TypeInfo, v1, v2);
    byte_4B12476 = 1;
  }
  v3 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo, v1);
    v3 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = v3->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__InitLoad(ServantSortInfoAll, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__ModifyItem(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportServantSelectListViewManager__RequestListObject_33213684(this, 4, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__ModifyList(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
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
  UserServantMaster_o *Master_object; // x0
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  UserServantMaster_o *v20; // x21
  unsigned int v21; // w29
  UserServantMaster_c **v22; // x28
  UserServantMaster_c *v23; // x8
  UserServantEntity_o **v24; // x28
  UserServantMaster_c *v25; // t1
  Il2CppType byval_arg; // q0
  UserServantMaster_o *v27; // x22
  int32_t v28; // w23
  RecommendSupportServantSelectListViewItem_o *v29; // x24
  __int64 methodPtr_low; // x10
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x8
  __int128 v32; // q0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  int32_t v35; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v37; // x21
  __int64 v38; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_String_o *MasterName_k__BackingField; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+50h] [xbp-80h]

  if ( (byte_4B1247A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, isIconSizeChange, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem_TypeInfo, v14, v15);
    byte_4B1247A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isIconSizeChange);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (UserServantMaster_o *)UserServantMaster__getOrganizationList(Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_44;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_44;
  size = itemList->fields._size;
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  v20 = Master_object;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = &v20->klass + (int)v21;
      v25 = v22[4];
      v24 = (UserServantEntity_o **)(v22 + 4);
      v23 = v25;
      if ( !v25 )
        break;
      byval_arg = v23->_1.byval_arg;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v23->_1.name;
      *(Il2CppType *)&v44.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
      v43 = v44;
      Master_object = (UserServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                               &v43,
                                               0LL);
      if ( size >= 1 )
      {
        v27 = Master_object;
        v28 = 0;
        while ( 1 )
        {
          Master_object = (UserServantMaster_o *)this->fields.itemList;
          if ( !Master_object )
            goto LABEL_44;
          Master_object = (UserServantMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)Master_object,
                                                   v28,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Master_object )
          {
            v29 = (RecommendSupportServantSelectListViewItem_o *)Master_object;
            methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
              && (RecommendSupportServantSelectListViewItem_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
            {
              seriazlier = Master_object[2].fields.seriazlier;
              if ( seriazlier )
              {
                v32 = *(_OWORD *)&seriazlier->fields.tmp1;
                *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&seriazlier->fields.sb;
                *(_OWORD *)&v44.fields.fakeValue = v32;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
                v42 = v44;
                Master_object = (UserServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                         &v42,
                                                         0LL);
                if ( Master_object == v27 )
                  break;
              }
            }
          }
          if ( size == ++v28 )
            goto LABEL_24;
        }
        if ( v21 >= LODWORD(v20->fields._MasterName_k__BackingField) )
          goto LABEL_45;
        RecommendSupportServantSelectListViewItem__ModifyItem(v29, *v24, v33);
        if ( !isIconSizeChange )
        {
          RecommendSupportServantSelectListViewItem__ModifyLockItem(v29, v17);
          RecommendSupportServantSelectListViewItem__ModifyChoiceItem(v29, v34);
        }
      }
LABEL_24:
      if ( ++v21 == (_DWORD)MasterName_k__BackingField )
        goto LABEL_30;
      if ( v21 >= LODWORD(v20->fields._MasterName_k__BackingField) )
LABEL_45:
        sub_1BCAA44(Master_object, v17);
    }
LABEL_44:
    sub_1BCAA3C(Master_object, v17);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v35 = 0;
    while ( 1 )
    {
      Master_object = (UserServantMaster_o *)this->fields.itemList;
      if ( !Master_object )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Master_object,
               v35,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v37 = (ListViewItem_o *)Item;
        v38 = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v38
          && (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[v38 - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Master_object = (UserServantMaster_o *)v37->fields.viewObject;
            if ( !Master_object )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Master_object, v37, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v35 )
        return;
    }
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnClickBonusFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B12485 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__, method, v2);
    byte_4B12485 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(0LL, v6);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnClickFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
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
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B12486 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B12486 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantFilterSelectMenu(v14, 1, sort, v18, -1, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnClickListView(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportServantSelectListViewManager__OnClickSelectListView(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct RecommendSupportServantSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnClickSortAscendingOrder(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B1248A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B1248A = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnClickSortKind(
        RecommendSupportServantSelectListViewManager_o *this,
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
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B12489 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__, v4, v5);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager__OnClickSortKind_b__60_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B12489 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager__OnClickSortKind_b__60_0__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantSortSelectMenu(v14, 3, sort, 0, v18, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnLongPushListView(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
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
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  UserServantEntity_o *sortValue2B; // x20
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *Instance; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ServantStatusDialog_ResultDelegate_o *v23; // x22
  const MethodInfo *v24; // x2

  if ( (byte_4B12482 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_EndShowServant__, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__, v7, v8);
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    byte_4B12482 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      if ( obj )
      {
        linkItem = obj->fields.linkItem;
        if ( !linkItem )
          return;
        methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (RecommendSupportServantSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportServantSelectListViewItem_TypeInfo )
        {
          return;
        }
        sortValue2B = (UserServantEntity_o *)linkItem[1].fields.sortValue2B;
        v17 = Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
          v17 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__);
        v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
        if ( !sortValue2B )
        {
          OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
          RecommendSupportServantSelectListViewManager__RequestListObject_33213684(this, 3, v24);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v23 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                        ServantStatusDialog_ResultDelegate_TypeInfo,
                                                        v20,
                                                        v21,
                                                        v22);
        ServantStatusDialog_ResultDelegate___ctor(
          v23,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListViewManager_EndShowServant__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenServantStatusDialog_30777260((CommonUI_o *)Instance, 1, sortValue2B, v23, 0, 0LL);
          ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(scrollView, obj);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnMoveEnd(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B12481 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12481 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
          v15,
          1LL,
          v15->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__RequestListObject(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1247F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__get_Count__,
      v15,
      v16);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B1247F = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(
        v28,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      RecommendSupportServantSelectListViewObject__Init_33217100(
        (RecommendSupportServantSelectListViewObject_o *)current,
        mode,
        v28,
        delay,
        v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__RequestListObject_33213684(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B12480 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__get_Count__,
      v13,
      v14);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B12480 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(
        v26,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      RecommendSupportServantSelectListViewObject__Init_33217184(
        (RecommendSupportServantSelectListViewObject_o *)current,
        mode,
        v26,
        v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__ResetEventCampaignListViewObjects(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  Il2CppClass **p_eventFriendPoints; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 methodPtr_low; // x11
  Il2CppClass *v41; // x1
  PartyOrganizationUtility_o *v42; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  TimeOverChecker_o *timeOverChecker; // x20
  const MethodInfo *v46; // x1
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B1247D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__,
      v16,
      v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B1247D = 1;
  }
  memset(&v49, 0, sizeof(v49));
  memset(&v48, 0, sizeof(v48));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = (Il2CppClass **)&this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v49 = v47;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v49.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v49.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportServantSelectListViewItem_c *)v49.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
      {
        v41 = *p_eventFriendPoints;
        v42 = (PartyOrganizationUtility_o *)&v49.fields._current[17];
        v49.fields._current[17].klass = *p_eventFriendPoints;
        sub_1BCA784(v42, (int64_t)v41, v34, v35, v36, v37, v38, v39);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__get_ClippingObjectList(this, v43);
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1BCAA3C(0LL, v44);
    RecommendSupportServantSelectListViewObject__SetupDisp(
      (RecommendSupportServantSelectListViewObject_o *)v48.fields._current,
      v44);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  timeOverChecker = this->fields.timeOverChecker;
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v46);
  if ( !timeOverChecker )
LABEL_20:
    sub_1BCAA3C(Instance, v25);
  TimeOverChecker__Start(timeOverChecker, (int64_t)Instance, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  Il2CppClass **p_eventFriendPoints; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 methodPtr_low; // x11
  Il2CppClass *v41; // x1
  PartyOrganizationUtility_o *v42; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  TimeOverChecker_o *eventStartChecker; // x19
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B1247E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__,
      v16,
      v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B1247E = 1;
  }
  memset(&v48, 0, sizeof(v48));
  memset(&v47, 0, sizeof(v47));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = (Il2CppClass **)&this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v48 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v48.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v48.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportServantSelectListViewItem_c *)v48.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
      {
        v41 = *p_eventFriendPoints;
        v42 = (PartyOrganizationUtility_o *)&v48.fields._current[17];
        v48.fields._current[17].klass = *p_eventFriendPoints;
        sub_1BCA784(v42, (int64_t)v41, v34, v35, v36, v37, v38, v39);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__get_ClippingObjectList(this, v43);
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
  {
    if ( !v47.fields._current )
      sub_1BCAA3C(0LL, v44);
    RecommendSupportServantSelectListViewObject__SetupDisp(
      (RecommendSupportServantSelectListViewObject_o *)v47.fields._current,
      v44);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  eventStartChecker = this->fields.eventStartChecker;
  Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  if ( !eventStartChecker )
LABEL_20:
    sub_1BCAA3C(Instance, v25);
  TimeOverChecker__Start(eventStartChecker, (int64_t)Instance, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__SetCanLongPushFlag(
        RecommendSupportServantSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void __fastcall RecommendSupportServantSelectListViewManager__SetFilterButtonImage(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B12488 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B12488 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__SetMode(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  RecommendSupportServantSelectListViewManager__SetMode_33184412(this, mode, v10);
}


void __fastcall RecommendSupportServantSelectListViewManager__SetMode_33184412(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t v4; // w1

  if ( mode == 3 )
  {
    v4 = 4;
  }
  else
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v4 = 2;
    }
    else
    {
      if ( mode != 2 )
        return;
      v4 = 3;
    }
  }
  RecommendSupportServantSelectListViewManager__RequestListObject_33213684(this, v4, method);
}


void __fastcall RecommendSupportServantSelectListViewManager__SetMode_33216524(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  RecommendSupportServantSelectListViewManager__SetMode_33184412(this, mode, v10);
}


void __fastcall RecommendSupportServantSelectListViewManager__SetObjectItem(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 methodPtr_low; // x11
  int32_t initMode; // w19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_4B1247C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, item);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewObject_TypeInfo, v6, v7);
    byte_4B1247C = 1;
  }
  if ( v4 )
  {
    methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (RecommendSupportServantSelectListViewObject_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportServantSelectListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  initMode = this->fields.initMode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  v10 = UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( initMode == 2 )
  {
    if ( v10 )
    {
      if ( v4 )
      {
        v13 = 3;
LABEL_17:
        RecommendSupportServantSelectListViewObject__Init_33214864(
          (RecommendSupportServantSelectListViewObject_o *)v4,
          v13,
          v12);
        return;
      }
      goto LABEL_19;
    }
  }
  else if ( v10 )
  {
    if ( v4 )
    {
      v13 = 2;
      goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(v10, v11);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__SetSortButtonImage(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v30; // x20

  if ( (byte_4B1248B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B1248B = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_40;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_40;
    sortKind = v21->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
      v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
      v24 = this->fields.sort;
      if ( !v24 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
      v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
    }
    if ( v24->fields.isAscendingOrder )
      v28 = v25;
    else
      v28 = v26;
    UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v30 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v30 )
      {
        UILabel__set_text(v30, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_40:
    sub_1BCAA3C(sort, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__UpdateItemState(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isPushMode,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  _QWORD *SelfUserGame; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  RecommendSupportServantSelectListViewManager___c_c *v27; // x0
  System_Func_object__object__o *_9__70_0; // x21
  Il2CppObject *v29; // x22
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x8
  _QWORD *v38; // x19
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x19
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x21
  __int64 v55; // x8
  __int128 v56; // q0
  __int64 v57; // x1
  UserServantEntity_o *v58; // x0
  __int64 v59; // x1
  bool v60; // w8
  UserServantEntity_o *v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+20h] [xbp-70h]

  if ( (byte_4B12490 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_ListViewItem__RecommendSupportServantSelectListViewItem___,
      isPushMode,
      method);
    sub_1BCA7E0(&System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager___c__UpdateItemState_b__70_0__, v17, v18);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager___c_TypeInfo, v19, v20);
    byte_4B12490 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_53;
  v25 = SelfUserGame[15];
  itemList = this->fields.itemList;
  v27 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo, v22);
    v27 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__70_0 = (System_Func_object__object__o *)v27->static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27, v22);
      v27 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__70_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__TypeInfo,
                                                  v22,
                                                  v23,
                                                  v24);
    System_Func_object__object____ctor(
      _9__70_0,
      v29,
      Method_RecommendSupportServantSelectListViewManager___c__UpdateItemState_b__70_0__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__o *)_9__70_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__70_0,
      (int64_t)_9__70_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  SelfUserGame = System_Linq_Enumerable__Select_object__object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                   (System_Func_TSource__TResult__o *)_9__70_0,
                   (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_ListViewItem__RecommendSupportServantSelectListViewItem___);
  if ( !SelfUserGame )
LABEL_53:
    sub_1BCAA3C(SelfUserGame, v22);
  v37 = *SelfUserGame;
  v38 = SelfUserGame;
  v39 = *(unsigned __int16 *)(*SelfUserGame + 302LL);
  if ( *(_WORD *)(*SelfUserGame + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__c **)v40 - 1) != System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_15;
    }
    v41 = v37 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_15:
    v41 = sub_1C1C7C0(
            SelfUserGame,
            System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo,
            0LL);
  }
  v43 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
  if ( !v43 )
    sub_1BCAA3C(0LL, v42);
  while ( 1 )
  {
    v44 = *(_QWORD *)v43;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_22;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_22:
      v47 = sub_1C1C7C0(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
      break;
    v48 = *(_QWORD *)v43;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__c **)v50 - 1) != System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_29;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_29:
      v51 = sub_1C1C7C0(
              v43,
              System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo,
              0LL);
    }
    v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
    v54 = v52;
    if ( v52 )
    {
      v55 = *(_QWORD *)(v52 + 192);
      *(_BYTE *)(v52 + 216) = isPushMode;
      if ( !v55 )
        sub_1BCAA3C(v52, v53);
      v56 = *(_OWORD *)(v55 + 32);
      *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)(v55 + 16);
      *(_OWORD *)&v67.fields.fakeValue = v56;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53);
      v66 = v67;
      *(_BYTE *)(v54 + 217) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v66, 0LL) == v25;
      if ( isPushMode )
      {
        v58 = *(UserServantEntity_o **)(v54 + 192);
        if ( !v58 )
          sub_1BCAA3C(0LL, v57);
        if ( UserServantEntity__IsLeave(v58, 0LL) )
        {
          v60 = 0;
        }
        else
        {
          v61 = *(UserServantEntity_o **)(v54 + 192);
          if ( !v61 )
            sub_1BCAA3C(0LL, v59);
          v60 = !UserServantEntity__IsEventJoin(v61, 0LL);
        }
      }
      else
      {
        v60 = 1;
      }
      *(_BYTE *)(v54 + 218) = v60;
    }
  }
  v62 = *(_QWORD *)v43;
  v63 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
  {
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_47;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_47:
    v65 = sub_1C1C7C0(v43, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v65)(v43, *(_QWORD *)(v65 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager___OnClickSortKind_b__60_0(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  RecommendSupportServantSelectListViewManager___c_c *v15; // x8
  CommonUI_o *v16; // x19
  System_Action_o *_9__60_1; // x20
  Il2CppObject *v18; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B12493 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager___c__OnClickSortKind_b__60_1__, v7, v8);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager___c_TypeInfo, v9, v10);
    byte_4B12493 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo, v12);
    v15 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__60_1 = v15->static_fields->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v12);
      v15 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__60_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(
      _9__60_1,
      v18,
      Method_RecommendSupportServantSelectListViewManager___c__OnClickSortKind_b__60_1__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_1 = _9__60_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__60_1,
      (int64_t)_9__60_1,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v16 )
    sub_1BCAA3C(Instance, v12);
  CommonUI__CloseServantSortSelectMenu(v16, _9__60_1, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__add_callbackFunc(
        RecommendSupportServantSelectListViewManager_o *this,
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct RecommendSupportServantSelectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportServantSelectListViewManager_o *v10; // x0
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B12471 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B12471 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (RecommendSupportServantSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1BCACFC(v7);
  RecommendSupportServantSelectListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall RecommendSupportServantSelectListViewManager__add_callbackFunc2(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportServantSelectListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B12473 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B12473 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1BCACFC(v7);
  RecommendSupportServantSelectListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *__fastcall RecommendSupportServantSelectListViewManager__get_ClippingObjectList(
        RecommendSupportServantSelectListViewManager_o *this,
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
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B12478 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B12478 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)RecommendSupportServantSelectListViewObject__GetItem(
                                 (RecommendSupportServantSelectListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *)v21;
}


System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *__fastcall RecommendSupportServantSelectListViewManager__get_ObjectList(
        RecommendSupportServantSelectListViewManager_o *this,
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
  RecommendSupportServantSelectListViewManager___c_c *v19; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Func_object__bool__o *_9__33_0; // x20
  Il2CppObject *v22; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  RecommendSupportServantSelectListViewManager___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x19
  System_Func_object__object__o *_9__33_1; // x20
  Il2CppObject *v37; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0

  if ( (byte_4B12477 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportServantSelectListViewObject___,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_RecommendSupportServantSelectListViewObject___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GameObject___, v7, v8);
    sub_1BCA7E0(&System_Func_GameObject__RecommendSupportServantSelectListViewObject__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_GameObject__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_0__, v13, v14);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_1__, v15, v16);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager___c_TypeInfo, v17, v18);
    byte_4B12477 = 1;
  }
  v19 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo, method);
    v19 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__33_0 = (System_Func_object__bool__o *)v19->static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, method);
      v19 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__33_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GameObject__bool__TypeInfo, method, v2, v3);
    System_Func_object__bool____ctor(
      _9__33_0,
      v22,
      Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_0__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_GameObject__bool__o *)_9__33_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__33_0,
      (int64_t)_9__33_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v34 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v35 = v30;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo, v31);
    v34 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__33_1 = (System_Func_object__object__o *)v34->static_fields->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34, v31);
      v34 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__33_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_GameObject__RecommendSupportServantSelectListViewObject__TypeInfo,
                                                  v31,
                                                  v32,
                                                  v33);
    System_Func_object__object____ctor(
      _9__33_1,
      v37,
      Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_1__,
      0LL);
    v38 = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    v38->__9__33_1 = (struct System_Func_GameObject__RecommendSupportServantSelectListViewObject__o *)_9__33_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v38->__9__33_1, (int64_t)_9__33_1, v39, v40, v41, v42, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v35,
                                                               (System_Func_TSource__TResult__o *)_9__33_1,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportServantSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v45,
                                                                                             (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendSupportServantSelectListViewObject___);
}


void __fastcall RecommendSupportServantSelectListViewManager__remove_callbackFunc(
        RecommendSupportServantSelectListViewManager_o *this,
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct RecommendSupportServantSelectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportServantSelectListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B12472 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B12472 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (RecommendSupportServantSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1BCACFC(v7);
  RecommendSupportServantSelectListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall RecommendSupportServantSelectListViewManager__remove_callbackFunc2(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportServantSelectListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B12474 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B12474 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1BCACFC(v7);
  RecommendSupportServantSelectListViewManager__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A08258;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08200;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall RecommendSupportServantSelectListViewManager_CallbackFunc__BeginInvoke(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4B12494 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B12494 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(RecommendSupportServantSelectListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall RecommendSupportServantSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall RecommendSupportServantSelectListViewManager_CallbackFunc__Invoke(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
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


void __fastcall RecommendSupportServantSelectListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12495 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager___c_TypeInfo, v1, v2);
    byte_4B12495 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportServantSelectListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall RecommendSupportServantSelectListViewManager___c___ctor(
        RecommendSupportServantSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager___c___EndSelectFilterKind_b__58_0(
        RecommendSupportServantSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportServantSelectListViewManager___c___OnClickSortKind_b__60_1(
        RecommendSupportServantSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


RecommendSupportServantSelectListViewItem_o *__fastcall RecommendSupportServantSelectListViewManager___c___UpdateItemState_b__70_0(
        RecommendSupportServantSelectListViewManager___c_o *this,
        ListViewItem_o *listViewItem,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B12498 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem_TypeInfo, listViewItem, method);
    byte_4B12498 = 1;
  }
  if ( !listViewItem )
    return 0LL;
  methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (RecommendSupportServantSelectListViewItem_c *)listViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
    return (RecommendSupportServantSelectListViewItem_o *)listViewItem;
  return 0LL;
}


bool __fastcall RecommendSupportServantSelectListViewManager___c___get_ObjectList_b__33_0(
        RecommendSupportServantSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4B12496 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, go, method);
    byte_4B12496 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0LL, 0LL);
}


RecommendSupportServantSelectListViewObject_o *__fastcall RecommendSupportServantSelectListViewManager___c___get_ObjectList_b__33_1(
        RecommendSupportServantSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4B12497 & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewManager___c_o *)sub_1BCA7E0(
                                                                   &Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___,
                                                                   go,
                                                                   method);
    byte_4B12497 = 1;
  }
  if ( !go )
    sub_1BCAA3C(this, go);
  return (RecommendSupportServantSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            go,
                                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
}