void RecommendSupportServantSelectListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C597 & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&RecommendSupportServantSelectListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_11721/*"RecommendSupportServantSelectAll"*/);
    byte_596C597 = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_11721/*"RecommendSupportServantSelectAll"*/, 3, 0, 0);
  RecommendSupportServantSelectListViewManager_TypeInfo->static_fields->ServantSortInfoAll = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportServantSelectListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportServantSelectListViewManager___ctor(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.selectIndex = -1;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void RecommendSupportServantSelectListViewManager__Awake(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportServantSelectListViewManager__ChangeIconScale(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
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
  p_seed = &this->fields.seed;
  *((_DWORD *)p_seed + 84) = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  RecommendSupportServantSelectListViewManager__ModifyList(this, 1, v14);
  RecommendSupportServantSelectListViewManager__SetMode_41651552(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListViewManager__CreateList(
        RecommendSupportServantSelectListViewManager_o *this,
        RecommendSupportData_o *supportServantData,
        int32_t index,
        EventUpValSetupInfo_o *eventSetupInfo,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  RecommendSupportServantSelectListViewManager_c *v13; // x0
  int64_t ServantSortInfoAll; // x0
  struct RecommendSupportServantSelectListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *v16; // x1
  struct ListViewSort_o **p_sort; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct ListViewSort_o *sort; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x22
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v56; // x23
  UserServantEntity_o *v57; // x25
  int32_t selectIndex; // w26
  EventCampaignEntity_array *eventFriendPoints; // x27
  RecommendSupportServantSelectListViewItem_o *v60; // x24
  const MethodInfo *v61; // x7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v77; // x20
  System_Action_o *v78; // x21
  TimeOverChecker_o *v79; // x22
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v87; // x20
  TimeOverChecker_o *v88; // x21
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7

  if ( (byte_596C57E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjects__);
    sub_2213A60(&RecommendSupportServantSelectListViewManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TimeOverChecker_TypeInfo);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_596C57E = 1;
  }
  this->fields.recommendSupportData = supportServantData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.recommendSupportData,
    (int32_t)supportServantData,
    *(System_String_o **)&index,
    (System_String_o *)eventSetupInfo,
    (int32_t)method,
    v5,
    v6,
    v7);
  v13 = RecommendSupportServantSelectListViewManager_TypeInfo;
  this->fields.selectIndex = index;
  this->fields.isCanNotLongPush = 0;
  if ( !*(&v13->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v13, v11, v12);
    v13 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = (int64_t)v13->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ListViewSort__Load((ListViewSort_o *)ServantSortInfoAll, 0);
  ServantSortInfoAll = (int64_t)this->fields.filterButton;
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ServantSortInfoAll, 0);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantSortInfoAll, 1, 0);
  static_fields = RecommendSupportServantSelectListViewManager_TypeInfo->static_fields;
  v16 = static_fields->ServantSortInfoAll;
  this->fields.sort = static_fields->ServantSortInfoAll;
  p_sort = &this->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  ServantSortInfoAll = (int64_t)this->fields.sort;
  if ( eventSetupInfo )
  {
    if ( !ServantSortInfoAll )
      goto LABEL_48;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)ServantSortInfoAll,
                           0,
                           eventSetupInfo->fields.supportFilterEventCampaignIds,
                           eventSetupInfo->fields.supportFilterEventIds,
                           0,
                           eventSetupInfo->fields.servantFilterIds,
                           0,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    sort = this->fields.sort;
    ServantSortInfoAll = BasicHelper__IsNullOrEmpty(
                           (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                           0);
    if ( !sort )
      goto LABEL_48;
    sort->fields.isBonusKind = (ServantSortInfoAll & 1) == 0;
  }
  else
  {
    if ( !ServantSortInfoAll )
      goto LABEL_48;
    *(_BYTE *)(ServantSortInfoAll + 61) = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  ServantSortInfoAll = (int64_t)this->fields.bonusFilterKindButton;
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ServantSortInfoAll, 0);
  if ( !*p_sort )
    goto LABEL_48;
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantSortInfoAll, (*p_sort)->fields.isBonusKind, 0);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  ServantSortInfoAll = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)ServantSortInfoAll,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)ServantSortInfoAll, 0);
  ServantSortInfoAll = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)ServantSortInfoAll,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)ServantSortInfoAll, 0, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !OrganizationList )
    goto LABEL_48;
  max_length = OrganizationList->max_length;
  if ( (int)max_length >= 1 )
  {
    v56 = 0;
    while ( 1 )
    {
      if ( v56 >= (unsigned int)max_length )
        sub_2213CE4(ServantSortInfoAll);
      v57 = OrganizationList->m_Items[v56];
      selectIndex = this->fields.selectIndex;
      eventFriendPoints = this->fields.eventFriendPoints;
      v60 = (RecommendSupportServantSelectListViewItem_o *)sub_2213CCC(RecommendSupportServantSelectListViewItem_TypeInfo);
      RecommendSupportServantSelectListViewItem___ctor(
        v60,
        v56,
        v57,
        supportServantData,
        selectIndex,
        eventSetupInfo,
        eventFriendPoints,
        v61);
      ServantSortInfoAll = (int64_t)this->fields.itemList;
      if ( !ServantSortInfoAll )
        break;
      v68 = *(_QWORD *)(ServantSortInfoAll + 16);
      v69 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ServantSortInfoAll + 28);
      if ( !v68 )
        break;
      v70 = *(int *)(ServantSortInfoAll + 24);
      if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ServantSortInfoAll,
          (Il2CppObject *)v60,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = v68 + 8 * v70;
        *(_DWORD *)(ServantSortInfoAll + 24) = v70 + 1;
        *(_QWORD *)(v71 + 32) = v60;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v71 + 32), (int32_t)v60, v62, v63, v64, v65, v66, v67);
      }
      LODWORD(max_length) = OrganizationList->max_length;
      if ( (__int64)++v56 >= (int)max_length )
        goto LABEL_39;
    }
LABEL_48:
    sub_2213CDC(ServantSortInfoAll, v11);
  }
LABEL_39:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v54);
  ServantSortInfoAll = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_48;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ServantSortInfoAll, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  RecommendSupportServantSelectListViewManager__SetFilterButtonImage(this, v73);
  EventFriendCampaignFinishedAt = RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(
                                    this,
                                    v74);
  timeOverChecker = this->fields.timeOverChecker;
  v77 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v78 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v78,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjects__,
      0);
    v79 = (TimeOverChecker_o *)sub_2213CCC(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v79, v78, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.timeOverChecker = v79;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.timeOverChecker,
      (int32_t)v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    timeOverChecker = this->fields.timeOverChecker;
    if ( !timeOverChecker )
      goto LABEL_48;
  }
  TimeOverChecker__Start(timeOverChecker, v77, 0);
  eventStartChecker = this->fields.eventStartChecker;
  if ( eventStartChecker )
  {
    ServantSortInfoAll = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
  }
  else
  {
    v87 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v87,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
      0);
    v88 = (TimeOverChecker_o *)sub_2213CCC(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v88, v87, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.eventStartChecker = v88;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventStartChecker,
      (int32_t)v88,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
    eventStartChecker = this->fields.eventStartChecker;
    ServantSortInfoAll = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
    if ( !eventStartChecker )
      goto LABEL_48;
  }
  TimeOverChecker__Start(eventStartChecker, ServantSortInfoAll, 0);
}


void RecommendSupportServantSelectListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  RecommendSupportServantSelectListViewManager_c *v3; // x0
  ListViewSort_o *ServantSortInfoAll; // x0

  if ( (byte_596C57A & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewManager_TypeInfo);
    byte_596C57A = 1;
  }
  v3 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !*(&RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo, v1, v2);
    v3 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = v3->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(ServantSortInfoAll, 0);
}


void RecommendSupportServantSelectListViewManager__DestroyList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
}


void RecommendSupportServantSelectListViewManager__EndCloseShowServant(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportServantSelectListViewManager__RequestListObject_41679616(this, 3, v2);
}


void RecommendSupportServantSelectListViewManager__EndCloseShowServantQuestJump(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596C589 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596C589 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void RecommendSupportServantSelectListViewManager__EndSelectFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  RecommendSupportServantSelectListViewManager___c_c *v9; // x8
  CommonUI_o *v10; // x19
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__58_0; // x20
  Il2CppObject *v13; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596C58C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager___c__EndSelectFilterKind_b__58_0__);
    sub_2213A60(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_596C58C = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    RecommendSupportServantSelectListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !*(&RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo, v7, v8);
    v9 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__58_0 = static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7, v8);
      static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__58_0,
      v13,
      Method_RecommendSupportServantSelectListViewManager___c__EndSelectFilterKind_b__58_0__,
      0);
    v14 = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    v14->__9__58_0 = _9__58_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__58_0, (int32_t)_9__58_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !v10 )
    sub_2213CDC(Instance, v7);
  CommonUI__CloseServantFilterSelectMenu(v10, _9__58_0, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListViewManager__EndShowServant(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x0
  intptr_t v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  System_Action_o *v16; // x21

  if ( (byte_596C588 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_EndCloseShowServantQuestJump__);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_EndCloseShowServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C588 = 1;
  }
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  if ( !UnityEngine_Behaviour__get_enabled(scrollView, 0) )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(scrollView, 1, 0);
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_17;
    UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
  }
  if ( questId < 1 )
  {
    RecommendSupportServantSelectListViewManager__UpdateItemState(this, 0, v10);
    if ( isDecide )
    {
      RecommendSupportServantSelectListViewManager__ModifyList(this, 0, v14);
      if ( isNeedSort )
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
      RecommendSupportServantSelectListViewManager__RequestListObject_41679616(this, 4, v15);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v13 = Method_RecommendSupportServantSelectListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v13 = Method_RecommendSupportServantSelectListViewManager_EndCloseShowServantQuestJump__;
  }
  v16 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, v13, 0);
  if ( !Instance )
LABEL_17:
    sub_2213CDC(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t RecommendSupportServantSelectListViewManager__GetAmountSortValue(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 v9; // x2
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  System_Collections_Generic_List_ListViewItem__c *klass; // x23
  void *monitor; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_596C591 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (RecommendSupportServantSelectListViewManager_o *)sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_596C591 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (RecommendSupportServantSelectListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (RecommendSupportServantSelectListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                                 (System_Collections_Generic_List_object__o *)this,
                                                                 v8,
                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( this )
      {
        naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (RecommendSupportServantSelectListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
        {
          itemSortList = this->fields.itemSortList;
          if ( !itemSortList )
            break;
          klass = itemSortList[2].klass;
          monitor = itemSortList[2].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId, v9);
          *(_QWORD *)&v15.fields.currentCryptoKey = klass;
          *(_QWORD *)&v15.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0) == svtId )
            ++v7;
        }
      }
      if ( size == ++v8 )
        return v7;
    }
LABEL_19:
    sub_2213CDC(this, *(_QWORD *)&svtId);
  }
  return 0;
}


int64_t RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct EventCampaignEntity_array *v7; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  unsigned int v10; // w22
  void *monitor; // x20
  EventCampaignEntity_o *v12; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C594 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_596C594 = 1;
  }
  eventFriendPoints = this->fields.eventFriendPoints;
  entity = 0;
  if ( eventFriendPoints )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
    v7 = this->fields.eventFriendPoints;
    if ( !v7 )
      goto LABEL_24;
    max_length = v7->max_length;
    if ( max_length >= 1 )
    {
      v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v10 = 0;
      monitor = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
          sub_2213CE4(Master_object);
        v12 = v7->m_Items[v10];
        if ( !v12 || !v9 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v9,
                                          &entity,
                                          v12->fields.eventId,
                                          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( monitor )
          {
            if ( !entity )
              break;
            if ( (__int64)entity[6].monitor < (__int64)monitor )
              monitor = entity[6].monitor;
          }
          else
          {
            if ( !entity )
              break;
            monitor = entity[6].monitor;
          }
        }
        max_length = v7->max_length;
        if ( (int)++v10 >= max_length )
          return (int64_t)monitor;
      }
LABEL_24:
      sub_2213CDC(Master_object, v6);
    }
  }
  return 0;
}


bool RecommendSupportServantSelectListViewManager__GetFocusItemIndex(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596C596 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (RecommendSupportServantSelectListViewManager_o *)sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_596C596 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
      sub_2213CDC(this, index);
    v8 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        break;
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportServantSelectListViewItem_TypeInfo
        || BYTE5(Item[20].monitor) )
      {
        break;
      }
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


RecommendSupportServantSelectListViewItem_o *RecommendSupportServantSelectListViewManager__GetItem(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596C580 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_596C580 = 1;
  }
  result = (RecommendSupportServantSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (RecommendSupportServantSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)result,
                                                              index,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (RecommendSupportServantSelectListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportServantSelectListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


System_String_o *RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool RecommendSupportServantSelectListViewManager__GetSwapChoiceList(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unChoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596C593 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_596C593 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_37;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)naturalAligment
          && *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                             + 8 * naturalAligment
                                                             - 8) == RecommendSupportServantSelectListViewItem_TypeInfo )
        {
          v21 = *(_QWORD *)(Item + 200);
          if ( v21 )
          {
            if ( *(_BYTE *)(Item + 194) )
            {
              if ( *(_BYTE *)(Item + 193) )
              {
                v22 = *(_OWORD *)(v21 + 16);
                v23 = *(_OWORD *)(v21 + 32);
                v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v55.fields.currentCryptoKey = v22;
                *(_OWORD *)&v55.fields.fakeValue = v23;
                if ( !v24 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
                v54 = v55;
                Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
                if ( !v8 )
                  goto LABEL_37;
                items = v8->fields._items;
                v26 = Method_System_Collections_Generic_List_long__Add__;
                ++v8->fields._version;
                if ( !items )
                  goto LABEL_37;
                v27 = v8->fields._size;
                v10 = Item;
                if ( (unsigned int)v27 >= LODWORD(items->max_length) )
                {
                  v35 = v26[4];
                  v36 = v8;
LABEL_30:
                  System_Collections_Generic_List_long___AddWithResize(
                    v36,
                    v10,
                    *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
                  continue;
                }
                v28 = &items->obj.klass + v27;
                v8->fields._size = v27 + 1;
              }
              else
              {
                v29 = *(_OWORD *)(v21 + 16);
                v30 = *(_OWORD *)(v21 + 32);
                v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v55.fields.currentCryptoKey = v29;
                *(_OWORD *)&v55.fields.fakeValue = v30;
                if ( !v31 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
                v53 = v55;
                Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
                if ( !v7 )
                  goto LABEL_37;
                v32 = v7->fields._items;
                v33 = Method_System_Collections_Generic_List_long__Add__;
                ++v7->fields._version;
                if ( !v32 )
                  goto LABEL_37;
                v34 = v7->fields._size;
                v10 = Item;
                if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
                {
                  v35 = v33[4];
                  v36 = v7;
                  goto LABEL_30;
                }
                v28 = &v32->obj.klass + v34;
                v7->fields._size = v34 + 1;
              }
              v28[4] = (Il2CppClass *)v10;
            }
          }
        }
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unChoiceList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unChoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool RecommendSupportServantSelectListViewManager__GetSwapLockList(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596C592 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_596C592 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_37;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)naturalAligment
          && *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                             + 8 * naturalAligment
                                                             - 8) == RecommendSupportServantSelectListViewItem_TypeInfo )
        {
          v21 = *(_QWORD *)(Item + 200);
          if ( v21 )
          {
            if ( *(_BYTE *)(Item + 192) )
            {
              if ( *(_BYTE *)(Item + 175) )
              {
                v22 = *(_OWORD *)(v21 + 16);
                v23 = *(_OWORD *)(v21 + 32);
                v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v55.fields.currentCryptoKey = v22;
                *(_OWORD *)&v55.fields.fakeValue = v23;
                if ( !v24 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
                v54 = v55;
                Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
                if ( !v8 )
                  goto LABEL_37;
                items = v8->fields._items;
                v26 = Method_System_Collections_Generic_List_long__Add__;
                ++v8->fields._version;
                if ( !items )
                  goto LABEL_37;
                v27 = v8->fields._size;
                v10 = Item;
                if ( (unsigned int)v27 >= LODWORD(items->max_length) )
                {
                  v35 = v26[4];
                  v36 = v8;
LABEL_30:
                  System_Collections_Generic_List_long___AddWithResize(
                    v36,
                    v10,
                    *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
                  continue;
                }
                v28 = &items->obj.klass + v27;
                v8->fields._size = v27 + 1;
              }
              else
              {
                v29 = *(_OWORD *)(v21 + 16);
                v30 = *(_OWORD *)(v21 + 32);
                v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v55.fields.currentCryptoKey = v29;
                *(_OWORD *)&v55.fields.fakeValue = v30;
                if ( !v31 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
                v53 = v55;
                Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
                if ( !v7 )
                  goto LABEL_37;
                v32 = v7->fields._items;
                v33 = Method_System_Collections_Generic_List_long__Add__;
                ++v7->fields._version;
                if ( !v32 )
                  goto LABEL_37;
                v34 = v7->fields._size;
                v10 = Item;
                if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
                {
                  v35 = v33[4];
                  v36 = v7;
                  goto LABEL_30;
                }
                v28 = &v32->obj.klass + v34;
                v7->fields._size = v34 + 1;
              }
              v28[4] = (Il2CppClass *)v10;
            }
          }
        }
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void RecommendSupportServantSelectListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  RecommendSupportServantSelectListViewManager_c *v3; // x0
  ListViewSort_o *ServantSortInfoAll; // x0

  if ( (byte_596C57B & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewManager_TypeInfo);
    byte_596C57B = 1;
  }
  v3 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !*(&RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo, v1, v2);
    v3 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = v3->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    sub_2213CDC(0, v1);
  ListViewSort__InitLoad(ServantSortInfoAll, 0);
}


void RecommendSupportServantSelectListViewManager__ModifyItem(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportServantSelectListViewManager__RequestListObject_41679616(this, 4, v2);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListViewManager__ModifyList(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int64_t v8; // x21
  int size; // w27
  unsigned __int64 v10; // x20
  unsigned __int64 v11; // x28
  __int64 v12; // x8
  UserServantEntity_o **v13; // x28
  __int64 v14; // t1
  __int128 v15; // q0
  __int128 v16; // q1
  int v17; // w8
  int64_t v18; // x22
  int32_t v19; // w23
  RecommendSupportServantSelectListViewItem_o *v20; // x24
  __int64 naturalAligment; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  __int128 v24; // q1
  int v25; // w8
  const MethodInfo *v26; // x1
  int32_t v27; // w20
  Il2CppObject *Item; // x0
  __int64 v29; // x2
  ListViewItem_o *v30; // x21
  __int64 v31; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v34; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+50h] [xbp-80h]

  if ( (byte_596C57F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_596C57F = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isIconSizeChange, method);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_44;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_44;
  v8 = Master_object;
  size = itemList->fields._size;
  v34 = *(unsigned int *)(Master_object + 24);
  if ( *(int *)(Master_object + 24) >= 1 )
  {
    v10 = 0;
    while ( v10 < *(unsigned int *)(v8 + 24) )
    {
      v11 = v8 + 8 * v10;
      v14 = *(_QWORD *)(v11 + 32);
      v13 = (UserServantEntity_o **)(v11 + 32);
      v12 = v14;
      if ( !v14 )
        goto LABEL_44;
      v15 = *(_OWORD *)(v12 + 16);
      v16 = *(_OWORD *)(v12 + 32);
      v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v37.fields.currentCryptoKey = v15;
      *(_OWORD *)&v37.fields.fakeValue = v16;
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
      v36 = v37;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v36, 0);
      if ( size >= 1 )
      {
        v18 = Master_object;
        v19 = 0;
        while ( 1 )
        {
          Master_object = (int64_t)this->fields.itemList;
          if ( !Master_object )
            goto LABEL_44;
          Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)Master_object,
                                     v19,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Master_object )
          {
            v20 = (RecommendSupportServantSelectListViewItem_o *)Master_object;
            naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) >= (unsigned int)naturalAligment
              && *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL)
                                                                 + 8 * naturalAligment
                                                                 - 8) == RecommendSupportServantSelectListViewItem_TypeInfo )
            {
              v22 = *(_QWORD *)(Master_object + 200);
              if ( v22 )
              {
                v23 = *(_OWORD *)(v22 + 16);
                v24 = *(_OWORD *)(v22 + 32);
                v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v37.fields.currentCryptoKey = v23;
                *(_OWORD *)&v37.fields.fakeValue = v24;
                if ( !v25 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
                v35 = v37;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v35, 0);
                if ( Master_object == v18 )
                  break;
              }
            }
          }
          if ( size == ++v19 )
            goto LABEL_25;
        }
        if ( v10 >= *(unsigned int *)(v8 + 24) )
          break;
        RecommendSupportServantSelectListViewItem__ModifyItem(v20, *v13, v6);
        if ( !isIconSizeChange )
        {
          RecommendSupportServantSelectListViewItem__ModifyLockItem(v20, v5);
          RecommendSupportServantSelectListViewItem__ModifyChoiceItem(v20, v26);
        }
      }
LABEL_25:
      if ( ++v10 == v34 )
        goto LABEL_30;
    }
    sub_2213CE4(Master_object);
  }
LABEL_30:
  if ( isIconSizeChange && size >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      Master_object = (int64_t)this->fields.itemList;
      if ( !Master_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Master_object,
               v27,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v30 = (ListViewItem_o *)Item;
        v31 = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v31
          && (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[v31 - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v29);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Master_object = (int64_t)v30->fields.viewObject;
            if ( !Master_object )
              break;
            ListViewObject__SetItemSeed((ListViewObject_o *)Master_object, v30, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v27 )
        return;
    }
LABEL_44:
    sub_2213CDC(Master_object, v5);
  }
}


void RecommendSupportServantSelectListViewManager__OnClickBonusFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_596C58A & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__);
    byte_596C58A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void RecommendSupportServantSelectListViewManager__OnClickFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596C58B & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C58B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 1, sort, v8, -1, 0);
  }
}


void RecommendSupportServantSelectListViewManager__OnClickListView(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportServantSelectListViewManager__OnClickSelectListView(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct RecommendSupportServantSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      callbackFunc->fields.method);
  }
}


void RecommendSupportServantSelectListViewManager__OnClickSortAscendingOrder(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_596C58F & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__);
    byte_596C58F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void RecommendSupportServantSelectListViewManager__OnClickSortKind(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596C58E & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager__OnClickSortKind_b__60_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C58E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager__OnClickSortKind_b__60_0__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 3, sort, 0, v8, 0);
  }
}


void RecommendSupportServantSelectListViewManager__OnLongPushListView(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  UserServantEntity_o *sortValue2B; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  ServantStatusDialog_ResultDelegate_o *v12; // x22
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x2

  if ( (byte_596C587 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_EndShowServant__);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__);
    sub_2213A60(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C587 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      if ( obj )
      {
        linkItem = obj->fields.linkItem;
        if ( !linkItem )
          return;
        naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (RecommendSupportServantSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportServantSelectListViewItem_TypeInfo )
        {
          return;
        }
        sortValue2B = (UserServantEntity_o *)linkItem[1].fields.sortValue2B;
        v9 = Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__;
        if ( !sortValue2B )
        {
          if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__);
          v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0);
          RecommendSupportServantSelectListViewManager__RequestListObject_41679616(this, 3, v14);
          return;
        }
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__);
        v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = (ServantStatusDialog_ResultDelegate_o *)sub_2213CCC(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v12,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListViewManager_EndShowServant__,
          0);
        if ( Instance )
        {
          CommonUI__OpenServantStatusDialog_37384068((CommonUI_o *)Instance, 1, sortValue2B, v12, 0, 0, 0);
          ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0);
          return;
        }
      }
    }
    sub_2213CDC(scrollView, obj);
  }
}


void RecommendSupportServantSelectListViewManager__OnMoveEnd(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596C586 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C586 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListViewManager__RequestListObject(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596C584 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__get_Count__);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C584 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__,
        0);
      if ( !current )
        sub_2213CDC(v13, v14);
      RecommendSupportServantSelectListViewObject__Init_41682972(
        (RecommendSupportServantSelectListViewObject_o *)current,
        mode,
        v12,
        delay,
        v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListViewManager__RequestListObject_41679616(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596C585 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__get_Count__);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C585 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__,
        0);
      if ( !current )
        sub_2213CDC(v11, v12);
      RecommendSupportServantSelectListViewObject__Init_41683056(
        (RecommendSupportServantSelectListViewObject_o *)current,
        mode,
        v10,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  }
}


void RecommendSupportServantSelectListViewManager__ResetEventCampaignListViewObjects(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *current; // x8
  __int64 naturalAligment; // x11
  struct EventCampaignEntity_array *eventFriendPoints; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  TimeOverChecker_o *timeOverChecker; // x20
  const MethodInfo *v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_596C582 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C582 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  memset(&v26, 0, sizeof(v26));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v27 = v25;
  v25.fields._list = 0;
  *(_QWORD *)&v25.fields._index = &v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v27.fields._current;
    if ( v27.fields._current )
    {
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v27.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportServantSelectListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
      {
        eventFriendPoints = this->fields.eventFriendPoints;
        v27.fields._current[17].monitor = eventFriendPoints;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&current[17].monitor,
          (int32_t)eventFriendPoints,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__get_ClippingObjectList(this, v21);
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
  v25.fields._list = 0;
  *(_QWORD *)&v25.fields._index = &v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
  {
    if ( !v26.fields._current )
      sub_2213CDC(0, v22);
    RecommendSupportServantSelectListViewObject__SetupDisp(
      (RecommendSupportServantSelectListViewObject_o *)v26.fields._current,
      v22);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  timeOverChecker = this->fields.timeOverChecker;
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v24);
  if ( !timeOverChecker )
LABEL_20:
    sub_2213CDC(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, (int64_t)Instance, 0);
}


void RecommendSupportServantSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *current; // x8
  __int64 naturalAligment; // x11
  struct EventCampaignEntity_array *eventFriendPoints; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  TimeOverChecker_o *eventStartChecker; // x19
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_596C583 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C583 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v26 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v26.fields._current;
    if ( v26.fields._current )
    {
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v26.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportServantSelectListViewItem_c *)v26.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
      {
        eventFriendPoints = this->fields.eventFriendPoints;
        v26.fields._current[17].monitor = eventFriendPoints;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&current[17].monitor,
          (int32_t)eventFriendPoints,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__get_ClippingObjectList(this, v21);
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
  {
    if ( !v25.fields._current )
      sub_2213CDC(0, v22);
    RecommendSupportServantSelectListViewObject__SetupDisp(
      (RecommendSupportServantSelectListViewObject_o *)v25.fields._current,
      v22);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  eventStartChecker = this->fields.eventStartChecker;
  Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
  if ( !eventStartChecker )
LABEL_20:
    sub_2213CDC(Instance, v4);
  TimeOverChecker__Start(eventStartChecker, (int64_t)Instance, 0);
}


void RecommendSupportServantSelectListViewManager__SetCanLongPushFlag(
        RecommendSupportServantSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void RecommendSupportServantSelectListViewManager__SetFilterButtonImage(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_596C58D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596C58D = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void RecommendSupportServantSelectListViewManager__SetMode(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  RecommendSupportServantSelectListViewManager__SetMode_41651552(this, mode, v10);
}


void RecommendSupportServantSelectListViewManager__SetMode_41651552(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ListViewManager_o *v3; // x19
  int32_t v4; // w1

  v3 = (ListViewManager_o *)this;
  if ( mode == 3 )
  {
    v4 = 4;
  }
  else
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput(v3, mode == 2, 0);
    if ( mode == 1 )
    {
      this = (RecommendSupportServantSelectListViewManager_o *)v3;
      v4 = 2;
    }
    else
    {
      if ( mode != 2 )
        return;
      this = (RecommendSupportServantSelectListViewManager_o *)v3;
      v4 = 3;
    }
  }
  RecommendSupportServantSelectListViewManager__RequestListObject_41679616(this, v4, method);
}


void RecommendSupportServantSelectListViewManager__SetMode_41682408(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  RecommendSupportServantSelectListViewManager__SetMode_41651552(this, mode, v10);
}


void RecommendSupportServantSelectListViewManager__SetObjectItem(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x19
  __int64 naturalAligment; // x11
  int v7; // w8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_596C581 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RecommendSupportServantSelectListViewObject_TypeInfo);
    byte_596C581 = 1;
  }
  if ( v4 )
  {
    naturalAligment = RecommendSupportServantSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (RecommendSupportServantSelectListViewObject_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportServantSelectListViewObject_TypeInfo )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  v7 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.initMode == 2 )
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, item);
    v8 = UnityEngine_Object__op_Inequality(v4, 0, 0);
    if ( v8 )
    {
      if ( v4 )
      {
        v11 = 3;
LABEL_19:
        RecommendSupportServantSelectListViewObject__Init_41680812(
          (RecommendSupportServantSelectListViewObject_o *)v4,
          v11,
          v10);
        return;
      }
      goto LABEL_21;
    }
  }
  else
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, item);
    v8 = UnityEngine_Object__op_Inequality(v4, 0, 0);
    if ( v8 )
    {
      if ( v4 )
      {
        v11 = 2;
        goto LABEL_19;
      }
LABEL_21:
      sub_2213CDC(v8, v9);
    }
  }
}


void RecommendSupportServantSelectListViewManager__SetSortButtonImage(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  __int64 v10; // x2
  struct ListViewSort_o *v11; // x8
  int32_t sortKind; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v20; // x20

  if ( (byte_596C590 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596C590 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_40;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( !v11 )
      goto LABEL_40;
    sortKind = v11->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v13 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
      v16 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v17 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
      v16 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
    }
    if ( v14->fields.isAscendingOrder )
      v18 = v15;
    else
      v18 = v16;
    UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v20 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v20 )
      {
        UILabel__set_text(v20, (System_String_o *)sort, 0);
        return;
      }
    }
LABEL_40:
    sub_2213CDC(sort, v5);
  }
}


void RecommendSupportServantSelectListViewManager__UpdateItemState(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  _QWORD *SelfUserGame; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  RecommendSupportServantSelectListViewManager___c_c *v10; // x0
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__70_0; // x21
  Il2CppObject *v13; // x22
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 IsLeave; // x0
  __int64 v27; // x1
  __int64 v28; // x21
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x20
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x2
  __int64 v41; // x20
  __int64 v42; // x8
  __int128 v43; // q0
  __int128 v44; // q1
  int v45; // w8
  UserServantEntity_o *v46; // x0
  char v47; // w8
  UserServantEntity_o *v48; // x0
  __int64 v49; // x19
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-90h]
  __int64 v56; // [xsp+48h] [xbp-68h]
  __int64 *v57; // [xsp+50h] [xbp-60h]
  __int64 v58; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_596C595 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ListViewItem__RecommendSupportServantSelectListViewItem___);
    sub_2213A60(&System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager___c__UpdateItemState_b__70_0__);
    sub_2213A60(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_596C595 = 1;
  }
  v58 = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_52;
  v8 = SelfUserGame[16];
  itemList = this->fields.itemList;
  v10 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  if ( !*(&RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo, v6, v7);
    v10 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__70_0 = (System_Func_object__object__o *)static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v6, v7);
      static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__70_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__70_0,
      v13,
      Method_RecommendSupportServantSelectListViewManager___c__UpdateItemState_b__70_0__,
      0);
    v14 = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    v14->__9__70_0 = (struct System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__o *)_9__70_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__70_0, (int32_t)_9__70_0, v15, v16, v17, v18, v19, v20);
  }
  SelfUserGame = System_Linq_Enumerable__Select_object__object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                   (System_Func_TSource__TResult__o *)_9__70_0,
                   (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_ListViewItem__RecommendSupportServantSelectListViewItem___);
  if ( !SelfUserGame )
LABEL_52:
    sub_2213CDC(SelfUserGame, v6);
  v21 = *SelfUserGame;
  v22 = SelfUserGame;
  v23 = *(unsigned __int16 *)(*SelfUserGame + 302LL);
  if ( *(_WORD *)(*SelfUserGame + 302LL) )
  {
    v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__c **)v24 - 1) != System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_15;
    }
    v25 = v21 + 16LL * *v24 + 312;
  }
  else
  {
LABEL_15:
    v25 = sub_224BC3C(
            SelfUserGame,
            System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo,
            0);
  }
  IsLeave = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  v58 = IsLeave;
  v56 = 0;
  v57 = &v58;
  if ( !IsLeave )
LABEL_47:
    sub_2213CDC(IsLeave, v27);
  v28 = IsLeave;
  while ( 1 )
  {
    v29 = *(_QWORD *)v28;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_23;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_23:
      v32 = sub_224BC3C(v28, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
    if ( (v33 & 1) == 0 )
      break;
    v35 = v58;
    if ( !v58 )
      sub_2213CDC(v33, v34);
    v36 = *(_QWORD *)v58;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__c **)v38 - 1) != System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_31;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_31:
      v39 = sub_224BC3C(
              v58,
              System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo,
              0);
    }
    IsLeave = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
    v41 = IsLeave;
    if ( !IsLeave )
      goto LABEL_42;
    v42 = *(_QWORD *)(IsLeave + 200);
    *(_BYTE *)(IsLeave + 236) = isPushMode;
    if ( !v42 )
      sub_2213CDC(IsLeave, v27);
    v43 = *(_OWORD *)(v42 + 16);
    v44 = *(_OWORD *)(v42 + 32);
    v45 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v55.fields.currentCryptoKey = v43;
    *(_OWORD *)&v55.fields.fakeValue = v44;
    if ( !v45 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v40);
    v54 = v55;
    IsLeave = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
    *(_BYTE *)(v41 + 237) = IsLeave == v8;
    if ( isPushMode )
    {
      v46 = *(UserServantEntity_o **)(v41 + 200);
      if ( !v46 )
        sub_2213CDC(0, v27);
      IsLeave = UserServantEntity__IsLeave(v46, 0);
      if ( (IsLeave & 1) != 0 )
      {
        v47 = 0;
      }
      else
      {
        v48 = *(UserServantEntity_o **)(v41 + 200);
        if ( !v48 )
          sub_2213CDC(0, v27);
        IsLeave = UserServantEntity__IsEventJoin(v48, 0);
        v47 = IsLeave ^ 1;
      }
      v28 = v58;
      *(_BYTE *)(v41 + 238) = v47 & 1;
      if ( !v28 )
        goto LABEL_47;
    }
    else
    {
      *(_BYTE *)(v41 + 238) = 1;
LABEL_42:
      v28 = v58;
      if ( !v58 )
        goto LABEL_47;
    }
  }
  v49 = *v57;
  if ( *v57 )
  {
    v50 = *(_QWORD *)v49;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_58;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_58:
      v53 = sub_224BC3C(*v57, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8));
  }
  if ( v56 )
    sub_2213CD4(v56);
}


void RecommendSupportServantSelectListViewManager___OnClickSortKind_b__60_0(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  RecommendSupportServantSelectListViewManager___c_c *v8; // x8
  CommonUI_o *v9; // x19
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__60_1; // x20
  Il2CppObject *v12; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596C598 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager___c__OnClickSortKind_b__60_1__);
    sub_2213A60(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_596C598 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !*(&RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo, v6, v7);
    v8 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__60_1 = static_fields->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__60_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__60_1,
      v12,
      Method_RecommendSupportServantSelectListViewManager___c__OnClickSortKind_b__60_1__,
      0);
    v13 = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    v13->__9__60_1 = _9__60_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__60_1, (int32_t)_9__60_1, v14, v15, v16, v17, v18, v19);
  }
  if ( !v9 )
    sub_2213CDC(Instance, v6);
  CommonUI__CloseServantSortSelectMenu(v9, _9__60_1, 0);
}


void RecommendSupportServantSelectListViewManager__add_callbackFunc(
        RecommendSupportServantSelectListViewManager_o *this,
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportServantSelectListViewManager_o *v11; // x0
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C576 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    byte_596C576 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (RecommendSupportServantSelectListViewManager_CallbackFunc_c *)v6->klass != RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportServantSelectListViewManager_o *)sub_221405C(
                                                            v6,
                                                            RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                            v7,
                                                            v8);
  RecommendSupportServantSelectListViewManager__remove_callbackFunc(v11, v12, v13);
}


void RecommendSupportServantSelectListViewManager__add_callbackFunc2(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportServantSelectListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C578 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C578 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportServantSelectListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  RecommendSupportServantSelectListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *RecommendSupportServantSelectListViewManager__get_ClippingObjectList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596C57D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C57D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)RecommendSupportServantSelectListViewObject__GetItem(
                                 (RecommendSupportServantSelectListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *)v3;
}


System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *RecommendSupportServantSelectListViewManager__get_ObjectList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RecommendSupportServantSelectListViewManager___c_c *v4; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__33_0; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  RecommendSupportServantSelectListViewManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *v21; // x9
  System_Func_object__object__o *_9__33_1; // x20
  Il2CppObject *v23; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_596C57C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportServantSelectListViewObject___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RecommendSupportServantSelectListViewObject___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_2213A60(&System_Func_GameObject__RecommendSupportServantSelectListViewObject__TypeInfo);
    sub_2213A60(&System_Func_GameObject__bool__TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_0__);
    sub_2213A60(&Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_1__);
    sub_2213A60(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_596C57C = 1;
  }
  v4 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo, method, v2);
    v4 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__33_0 = (System_Func_object__bool__o *)static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__33_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__33_0,
      v8,
      Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_0__,
      0);
    v9 = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    v9->__9__33_0 = (struct System_Func_GameObject__bool__o *)_9__33_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__33_0, (int32_t)_9__33_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v19 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v20 = v16;
  if ( !*(&RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo, v17, v18);
    v19 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__33_1 = (System_Func_object__object__o *)v21->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      v21 = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__33_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_GameObject__RecommendSupportServantSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__33_1,
      v23,
      Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_1__,
      0);
    v24 = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    v24->__9__33_1 = (struct System_Func_GameObject__RecommendSupportServantSelectListViewObject__o *)_9__33_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__33_1, (int32_t)_9__33_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__33_1,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportServantSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v31,
                                                                                             (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendSupportServantSelectListViewObject___);
}


void RecommendSupportServantSelectListViewManager__remove_callbackFunc(
        RecommendSupportServantSelectListViewManager_o *this,
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportServantSelectListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C577 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    byte_596C577 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (RecommendSupportServantSelectListViewManager_CallbackFunc_c *)v6->klass != RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportServantSelectListViewManager_o *)sub_221405C(
                                                            v6,
                                                            RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                            v7,
                                                            v8);
  RecommendSupportServantSelectListViewManager__add_callbackFunc2(v11, v12, v13);
}


void RecommendSupportServantSelectListViewManager__remove_callbackFunc2(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportServantSelectListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596C579 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C579 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportServantSelectListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  RecommendSupportServantSelectListViewManager__Awake(v11, v12);
}


void RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20057D0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2005778;
}


System_IAsyncResult_o *RecommendSupportServantSelectListViewManager_CallbackFunc__BeginInvoke(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_596C599 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewManager_ResultKind_TypeInfo);
    byte_596C599 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(RecommendSupportServantSelectListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return sub_2213A14(this, v10, callback, object);
}


void RecommendSupportServantSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void RecommendSupportServantSelectListViewManager_CallbackFunc__Invoke(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void RecommendSupportServantSelectListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C59A & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_596C59A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportServantSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportServantSelectListViewManager___c___ctor(
        RecommendSupportServantSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportServantSelectListViewManager___c___EndSelectFilterKind_b__58_0(
        RecommendSupportServantSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportServantSelectListViewManager___c___OnClickSortKind_b__60_1(
        RecommendSupportServantSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


RecommendSupportServantSelectListViewItem_o *RecommendSupportServantSelectListViewManager___c___UpdateItemState_b__70_0(
        RecommendSupportServantSelectListViewManager___c_o *this,
        ListViewItem_o *listViewItem,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_596C59D & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_596C59D = 1;
  }
  if ( !listViewItem )
    return 0;
  naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( listViewItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (RecommendSupportServantSelectListViewItem_c *)listViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
    return (RecommendSupportServantSelectListViewItem_o *)listViewItem;
  return 0;
}


bool RecommendSupportServantSelectListViewManager___c___get_ObjectList_b__33_0(
        RecommendSupportServantSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_596C59B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C59B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go, method);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0, 0);
}


RecommendSupportServantSelectListViewObject_o *RecommendSupportServantSelectListViewManager___c___get_ObjectList_b__33_1(
        RecommendSupportServantSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_596C59C & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewManager___c_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
    byte_596C59C = 1;
  }
  if ( !go )
    sub_2213CDC(this, go);
  return (RecommendSupportServantSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            go,
                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
}