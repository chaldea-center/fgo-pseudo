void RecommendSupportServantSelectListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C33989 & 1) == 0 )
  {
    sub_1C32C20(&ListViewSort_TypeInfo);
    sub_1C32C20(&RecommendSupportServantSelectListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11232/*"RecommendSupportServantSelectAll"*/);
    byte_4C33989 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
  ListViewSort___ctor_43736460(v1, (System_String_o *)StringLiteral_11232/*"RecommendSupportServantSelectAll"*/, 3, 0, 0);
  RecommendSupportServantSelectListViewManager_TypeInfo->static_fields->ServantSortInfoAll = v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)RecommendSupportServantSelectListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v7; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  struct ListViewSort_o *sort; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v7 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v7 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_8;
    smallSizeSeed = this->fields.normalSizeSeed;
    v7 = 1;
  }
  this->fields.seed = smallSizeSeed;
  p_seed = &this->fields.seed;
  *((_DWORD *)p_seed + 84) = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C32E7C(0);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  RecommendSupportServantSelectListViewManager__ModifyList(this, 1, v10);
  RecommendSupportServantSelectListViewManager__SetMode_34831540(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void RecommendSupportServantSelectListViewManager__CreateList(
        RecommendSupportServantSelectListViewManager_o *this,
        RecommendSupportData_o *supportServantData,
        int32_t index,
        EventUpValSetupInfo_o *eventSetupInfo,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_c *v8; // x0
  int64_t ServantSortInfoAll; // x0
  struct RecommendSupportServantSelectListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *v11; // x1
  struct ListViewSort_o **p_sort; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct ListViewSort_o *sort; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x22
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v30; // x23
  UserServantEntity_o *v31; // x25
  int32_t selectIndex; // w26
  EventCampaignEntity_array *eventFriendPoints; // x27
  RecommendSupportServantSelectListViewItem_o *v34; // x24
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v46; // x20
  System_Action_o *v47; // x22
  TimeOverChecker_o *v48; // x23
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v52; // x21
  TimeOverChecker_o *v53; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3

  if ( (byte_4C33970 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjects__);
    sub_1C32C20(&RecommendSupportServantSelectListViewManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TimeOverChecker_TypeInfo);
    sub_1C32C20(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C33970 = 1;
  }
  this->fields.recommendSupportData = supportServantData;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.recommendSupportData,
    (int32_t)supportServantData,
    index,
    (const MethodInfo *)eventSetupInfo);
  this->fields.selectIndex = index;
  this->fields.isCanNotLongPush = 0;
  v8 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo);
    v8 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = (int64_t)v8->static_fields->ServantSortInfoAll;
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
  v11 = static_fields->ServantSortInfoAll;
  this->fields.sort = static_fields->ServantSortInfoAll;
  p_sort = &this->fields.sort;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v11, v13, v14);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v18, v19);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v15, v16);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v21, v22);
  }
  ServantSortInfoAll = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)ServantSortInfoAll,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)ServantSortInfoAll, 0);
  ServantSortInfoAll = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)ServantSortInfoAll,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)ServantSortInfoAll, 0, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v27, v28);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !OrganizationList )
    goto LABEL_48;
  max_length = OrganizationList->max_length;
  if ( (int)max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)max_length )
        sub_1C32E84(ServantSortInfoAll);
      v31 = OrganizationList->m_Items[v30];
      selectIndex = this->fields.selectIndex;
      eventFriendPoints = this->fields.eventFriendPoints;
      v34 = (RecommendSupportServantSelectListViewItem_o *)sub_1C32E6C(RecommendSupportServantSelectListViewItem_TypeInfo);
      RecommendSupportServantSelectListViewItem___ctor(
        v34,
        v30,
        v31,
        supportServantData,
        selectIndex,
        eventSetupInfo,
        eventFriendPoints,
        0);
      ServantSortInfoAll = (int64_t)this->fields.itemList;
      if ( !ServantSortInfoAll )
        break;
      v37 = *(_QWORD *)(ServantSortInfoAll + 16);
      v38 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ServantSortInfoAll + 28);
      if ( !v37 )
        break;
      v39 = *(int *)(ServantSortInfoAll + 24);
      if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ServantSortInfoAll,
          (Il2CppObject *)v34,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = v37 + 8 * v39;
        *(_DWORD *)(ServantSortInfoAll + 24) = v39 + 1;
        *(_QWORD *)(v40 + 32) = v34;
        sub_1C32BC4((CGThumbnailListItem_o *)(v40 + 32), (int32_t)v34, v35, v36);
      }
      LODWORD(max_length) = OrganizationList->max_length;
      if ( (__int64)++v30 >= (int)max_length )
        goto LABEL_39;
    }
LABEL_48:
    sub_1C32E7C(ServantSortInfoAll);
  }
LABEL_39:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  ServantSortInfoAll = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_48;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ServantSortInfoAll, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  RecommendSupportServantSelectListViewManager__SetFilterButtonImage(this, v42);
  EventFriendCampaignFinishedAt = RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(
                                    this,
                                    v43);
  timeOverChecker = this->fields.timeOverChecker;
  v46 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v47 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v47,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjects__,
      0);
    v48 = (TimeOverChecker_o *)sub_1C32E6C(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v48, v47, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.timeOverChecker = v48;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.timeOverChecker, (int32_t)v48, v49, v50);
    timeOverChecker = this->fields.timeOverChecker;
    if ( !timeOverChecker )
      goto LABEL_48;
  }
  TimeOverChecker__Start(timeOverChecker, v46, 0);
  eventStartChecker = this->fields.eventStartChecker;
  if ( eventStartChecker )
  {
    ServantSortInfoAll = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
  }
  else
  {
    v52 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v52,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
      0);
    v53 = (TimeOverChecker_o *)sub_1C32E6C(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v53, v52, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.eventStartChecker = v53;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventStartChecker, (int32_t)v53, v54, v55);
    eventStartChecker = this->fields.eventStartChecker;
    ServantSortInfoAll = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
    if ( !eventStartChecker )
      goto LABEL_48;
  }
  TimeOverChecker__Start(eventStartChecker, ServantSortInfoAll, 0);
}


void RecommendSupportServantSelectListViewManager__DeleteContinueData(const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_c *v1; // x0
  ListViewSort_o *ServantSortInfoAll; // x0

  if ( (byte_4C3396C & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportServantSelectListViewManager_TypeInfo);
    byte_4C3396C = 1;
  }
  v1 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo);
    v1 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = v1->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    sub_1C32E7C(0);
  ListViewSort__DeleteContinueData(ServantSortInfoAll, 0);
}


void RecommendSupportServantSelectListViewManager__DestroyList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C32E7C(0);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v4, v5);
}


void RecommendSupportServantSelectListViewManager__EndCloseShowServant(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportServantSelectListViewManager__RequestListObject_34826280(this, 3, v2);
}


void RecommendSupportServantSelectListViewManager__EndCloseShowServantQuestJump(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3397B & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3397B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void RecommendSupportServantSelectListViewManager__EndSelectFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  RecommendSupportServantSelectListViewManager___c_c *v7; // x8
  CommonUI_o *v8; // x19
  System_Action_o *_9__58_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3397E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager___c__EndSelectFilterKind_b__58_0__);
    sub_1C32C20(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_4C3397E = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    RecommendSupportServantSelectListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v7 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__58_0 = v7->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__58_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__58_0,
      v10,
      Method_RecommendSupportServantSelectListViewManager___c__EndSelectFilterKind_b__58_0__,
      0);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = _9__58_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v12, v13);
  }
  if ( !v8 )
    sub_1C32E7C(Instance);
  CommonUI__CloseServantFilterSelectMenu(v8, _9__58_0, 0);
}


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

  if ( (byte_4C3397A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_EndCloseShowServantQuestJump__);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_EndCloseShowServant__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3397A = 1;
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
      RecommendSupportServantSelectListViewManager__RequestListObject_34826280(this, 4, v15);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v13 = Method_RecommendSupportServantSelectListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v13 = Method_RecommendSupportServantSelectListViewManager_EndCloseShowServantQuestJump__;
  }
  v16 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, v13, 0);
  if ( !Instance )
LABEL_17:
    sub_1C32E7C(scrollView);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0);
}


int64_t RecommendSupportServantSelectListViewManager__GetAmountSortValue(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C33983 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C33983 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C32E7C(itemList);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v7,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo
        && RecommendSupportServantSelectListViewItem__get_SvtId((RecommendSupportServantSelectListViewItem_o *)Item, 0) == svtId )
      {
        ++v8;
      }
    }
    if ( size == ++v7 )
      return v8;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_13;
  }
}


int64_t RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  struct EventCampaignEntity_array *eventFriendPoints; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  unsigned int v7; // w22
  void *monitor; // x20
  EventCampaignEntity_o *v9; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C33986 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4C33986 = 1;
  }
  entity = 0;
  if ( this->fields.eventFriendPoints )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
    eventFriendPoints = this->fields.eventFriendPoints;
    if ( !eventFriendPoints )
      goto LABEL_23;
    max_length = eventFriendPoints->max_length;
    if ( max_length >= 1 )
    {
      v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v7 = 0;
      monitor = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
          sub_1C32E84(Master_object);
        v9 = eventFriendPoints->m_Items[v7];
        if ( !v9 || !v6 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v6,
                                          &entity,
                                          v9->fields.eventId,
                                          (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
        if ( (int)++v7 >= max_length )
          return (int64_t)monitor;
      }
LABEL_23:
      sub_1C32E7C(Master_object);
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

  if ( (byte_4C33988 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (RecommendSupportServantSelectListViewManager_o *)sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C33988 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
      sub_1C32E7C(this);
    v8 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v8,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        break;
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportServantSelectListViewItem_TypeInfo
        || BYTE4(Item[21].klass) )
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

  if ( (byte_4C33972 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C33972 = 1;
  }
  result = (RecommendSupportServantSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (RecommendSupportServantSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)result,
                                                              index,
                                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C32E7C(0);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool RecommendSupportServantSelectListViewManager__GetSwapChoiceList(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unChoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int64_t itemList; // x0
  int v12; // w25
  int32_t v13; // w24
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C33985 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C33985 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v12 = *(_DWORD *)(itemList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v13,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment )
        goto LABEL_9;
      if ( *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) != RecommendSupportServantSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v15 = *(_QWORD *)(itemList + 200);
      if ( !v15 || !*(_BYTE *)(itemList + 194) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 193) )
      {
        v16 = *(_OWORD *)(v15 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v39 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v39, 0);
        if ( !v8 )
          goto LABEL_37;
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_long__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v8->fields._size;
        v20 = itemList;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v26 = v18[4];
          v27 = v8;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v27,
            v20,
            *(const MethodInfo_37807F0 **)(*(_QWORD *)(v26 + 192) + 112LL));
          goto LABEL_9;
        }
        v21 = &items->obj.klass + size;
        v8->fields._size = size + 1;
      }
      else
      {
        v22 = *(_OWORD *)(v15 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v38, 0);
        if ( !v7 )
          goto LABEL_37;
        v23 = v7->fields._items;
        v24 = Method_System_Collections_Generic_List_long__Add__;
        ++v7->fields._version;
        if ( !v23 )
          goto LABEL_37;
        v25 = v7->fields._size;
        v20 = itemList;
        if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
        {
          v26 = v24[4];
          v27 = v7;
          goto LABEL_30;
        }
        v21 = &v23->obj.klass + v25;
        v7->fields._size = v25 + 1;
      }
      v21[4] = (Il2CppClass *)v20;
LABEL_9:
      if ( v12 == ++v13 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C32E7C(itemList);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)choiceList, 0, v9, v10);
    v36 = unChoiceList;
    v35 = 0;
    *unChoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C32BC4((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unChoiceList = v32;
    v36 = unChoiceList;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool RecommendSupportServantSelectListViewManager__GetSwapLockList(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int64_t itemList; // x0
  int v12; // w25
  int32_t v13; // w24
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C33984 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C33984 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v12 = *(_DWORD *)(itemList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v13,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment )
        goto LABEL_9;
      if ( *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) != RecommendSupportServantSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v15 = *(_QWORD *)(itemList + 200);
      if ( !v15 || !*(_BYTE *)(itemList + 192) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 175) )
      {
        v16 = *(_OWORD *)(v15 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v39 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v39, 0);
        if ( !v8 )
          goto LABEL_37;
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_long__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v8->fields._size;
        v20 = itemList;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v26 = v18[4];
          v27 = v8;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v27,
            v20,
            *(const MethodInfo_37807F0 **)(*(_QWORD *)(v26 + 192) + 112LL));
          goto LABEL_9;
        }
        v21 = &items->obj.klass + size;
        v8->fields._size = size + 1;
      }
      else
      {
        v22 = *(_OWORD *)(v15 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v38, 0);
        if ( !v7 )
          goto LABEL_37;
        v23 = v7->fields._items;
        v24 = Method_System_Collections_Generic_List_long__Add__;
        ++v7->fields._version;
        if ( !v23 )
          goto LABEL_37;
        v25 = v7->fields._size;
        v20 = itemList;
        if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
        {
          v26 = v24[4];
          v27 = v7;
          goto LABEL_30;
        }
        v21 = &v23->obj.klass + v25;
        v7->fields._size = v25 + 1;
      }
      v21[4] = (Il2CppClass *)v20;
LABEL_9:
      if ( v12 == ++v13 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C32E7C(itemList);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)lockList, 0, v9, v10);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C32BC4((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void RecommendSupportServantSelectListViewManager__InitLoad(const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_c *v1; // x0
  ListViewSort_o *ServantSortInfoAll; // x0

  if ( (byte_4C3396D & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportServantSelectListViewManager_TypeInfo);
    byte_4C3396D = 1;
  }
  v1 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo);
    v1 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = v1->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    sub_1C32E7C(0);
  ListViewSort__InitLoad(ServantSortInfoAll, 0);
}


void RecommendSupportServantSelectListViewManager__ModifyItem(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportServantSelectListViewManager__RequestListObject_34826280(this, 4, v2);
}


void RecommendSupportServantSelectListViewManager__ModifyList(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  UserServantMaster_o *Master_object; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  UserServantMaster_o *v7; // x21
  unsigned int v8; // w29
  UserServantMaster_c **v9; // x28
  UserServantMaster_c *v10; // x8
  UserServantEntity_o **v11; // x28
  UserServantMaster_c *v12; // t1
  Il2CppType byval_arg; // q0
  UserServantMaster_o *v14; // x22
  int32_t v15; // w24
  RecommendSupportServantSelectListViewItem_o *v16; // x23
  __int64 naturalAligment; // x10
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x8
  __int128 v19; // q0
  int32_t v20; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v22; // x21
  __int64 v23; // x10
  UnityEngine_Object_o *klass; // x22
  struct System_String_o *MasterName_k__BackingField; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+50h] [xbp-80h]

  if ( (byte_4C33971 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C33971 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (UserServantMaster_o *)UserServantMaster__getOrganizationList(Master_object, 0);
  if ( !Master_object )
    goto LABEL_44;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_44;
  size = itemList->fields._size;
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  v7 = Master_object;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = &v7->klass + (int)v8;
      v12 = v9[4];
      v11 = (UserServantEntity_o **)(v9 + 4);
      v10 = v12;
      if ( !v12 )
        break;
      byval_arg = v10->_1.byval_arg;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v10->_1.name;
      *(Il2CppType *)&v29.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v28 = v29;
      Master_object = (UserServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                               &v28,
                                               0);
      if ( size >= 1 )
      {
        v14 = Master_object;
        v15 = 0;
        while ( 1 )
        {
          Master_object = (UserServantMaster_o *)this->fields.itemList;
          if ( !Master_object )
            goto LABEL_44;
          Master_object = (UserServantMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)Master_object,
                                                   v15,
                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Master_object )
          {
            v16 = (RecommendSupportServantSelectListViewItem_o *)Master_object;
            naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
            if ( Master_object->klass->_2.naturalAligment >= (unsigned int)naturalAligment
              && (RecommendSupportServantSelectListViewItem_c *)Master_object->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
            {
              seriazlier = Master_object[2].fields.seriazlier;
              if ( seriazlier )
              {
                v19 = *(_OWORD *)&seriazlier->fields.tmp1;
                *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&seriazlier->fields.sb;
                *(_OWORD *)&v29.fields.fakeValue = v19;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v27 = v29;
                Master_object = (UserServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                         &v27,
                                                         0);
                if ( Master_object == v14 )
                  break;
              }
            }
          }
          if ( size == ++v15 )
            goto LABEL_24;
        }
        if ( v8 >= LODWORD(v7->fields._MasterName_k__BackingField) )
          goto LABEL_45;
        RecommendSupportServantSelectListViewItem__ModifyItem(v16, *v11, 0);
        if ( !isIconSizeChange )
        {
          RecommendSupportServantSelectListViewItem__ModifyLockItem(v16, 0);
          RecommendSupportServantSelectListViewItem__ModifyChoiceItem(v16, 0);
        }
      }
LABEL_24:
      if ( ++v8 == (_DWORD)MasterName_k__BackingField )
        goto LABEL_30;
      if ( v8 >= LODWORD(v7->fields._MasterName_k__BackingField) )
LABEL_45:
        sub_1C32E84(Master_object);
    }
LABEL_44:
    sub_1C32E7C(Master_object);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v20 = 0;
    while ( 1 )
    {
      Master_object = (UserServantMaster_o *)this->fields.itemList;
      if ( !Master_object )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Master_object,
               v20,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v22 = (ListViewItem_o *)Item;
        v23 = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v23
          && (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[v23 - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Master_object = (UserServantMaster_o *)v22->fields.viewObject;
            if ( !Master_object )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Master_object, v22, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v20 )
        return;
    }
  }
}


void RecommendSupportServantSelectListViewManager__OnClickBonusFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *sort; // x0

  if ( (byte_4C3397C & 1) == 0 )
  {
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__);
    byte_4C3397C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C32E7C(0);
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

  if ( (byte_4C3397D & 1) == 0 )
  {
    sub_1C32C20(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_EndSelectFilterKind__);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3397D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C32E6C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C32E7C(v9);
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
  const MethodInfo *v3; // x3
  struct RecommendSupportServantSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C32E7C(v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C33981 & 1) == 0 )
  {
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__);
    byte_4C33981 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C32E7C(v5);
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

  if ( (byte_4C33980 & 1) == 0 )
  {
    sub_1C32C20(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager__OnClickSortKind_b__60_0__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C33980 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C32E6C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager__OnClickSortKind_b__60_0__,
      0);
    if ( !v7 )
      sub_1C32E7C(v9);
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
  const MethodInfo *v13; // x2

  if ( (byte_4C33979 & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_EndShowServant__);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__);
    sub_1C32C20(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C33979 = 1;
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
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1C32C38(Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__);
        v10 = (System_Reflection_MethodBase_o *)sub_1C32C04(v9, v9[4]);
        if ( !sortValue2B )
        {
          OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
          RecommendSupportServantSelectListViewManager__RequestListObject_34826280(this, 3, v13);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = (ServantStatusDialog_ResultDelegate_o *)sub_1C32E6C(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v12,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListViewManager_EndShowServant__,
          0);
        if ( Instance )
        {
          CommonUI__OpenServantStatusDialog_31201624((CommonUI_o *)Instance, 1, sortValue2B, v12, 0, 0, 0);
          ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0);
          return;
        }
      }
    }
    sub_1C32E7C(scrollView);
  }
}


void RecommendSupportServantSelectListViewManager__OnMoveEnd(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C33978 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33978 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1C32E7C(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C33976 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__get_Count__);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C33976 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__,
        0);
      if ( !current )
        sub_1C32E7C(v11);
      RecommendSupportServantSelectListViewObject__Init_34832244(
        (RecommendSupportServantSelectListViewObject_o *)current,
        mode,
        v10,
        delay,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListViewManager__RequestListObject_34826280(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C33977 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__get_Count__);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C33977 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v9);
      RecommendSupportServantSelectListViewObject__Init_34832328(
        (RecommendSupportServantSelectListViewObject_o *)current,
        mode,
        v8,
        v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  }
}


void RecommendSupportServantSelectListViewManager__ResetEventCampaignListViewObjects(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  Il2CppClass **p_eventFriendPoints; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 naturalAligment; // x11
  Il2CppClass *v11; // x1
  CGThumbnailListItem_o *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  TimeOverChecker_o *timeOverChecker; // x20
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C33974 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33974 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  memset(&v18, 0, sizeof(v18));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  p_eventFriendPoints = (Il2CppClass **)&this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v6, v7);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v19.fields._current )
    {
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v19.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportServantSelectListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
      {
        v11 = *p_eventFriendPoints;
        v12 = (CGThumbnailListItem_o *)&v19.fields._current[18];
        v19.fields._current[18].klass = *p_eventFriendPoints;
        sub_1C32BC4(v12, (int32_t)v11, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__get_ClippingObjectList(this, v13);
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
  {
    if ( !v18.fields._current )
      sub_1C32E7C(0);
    RecommendSupportServantSelectListViewObject__SetupDisp(
      (RecommendSupportServantSelectListViewObject_o *)v18.fields._current,
      v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  timeOverChecker = this->fields.timeOverChecker;
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v16);
  if ( !timeOverChecker )
LABEL_20:
    sub_1C32E7C(Instance);
  TimeOverChecker__Start(timeOverChecker, (int64_t)Instance, 0);
}


void RecommendSupportServantSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  Il2CppClass **p_eventFriendPoints; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 naturalAligment; // x11
  Il2CppClass *v11; // x1
  CGThumbnailListItem_o *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  TimeOverChecker_o *eventStartChecker; // x19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C33975 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33975 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  memset(&v17, 0, sizeof(v17));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0);
  p_eventFriendPoints = (Il2CppClass **)&this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v6, v7);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v18.fields._current )
    {
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v18.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportServantSelectListViewItem_c *)v18.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
      {
        v11 = *p_eventFriendPoints;
        v12 = (CGThumbnailListItem_o *)&v18.fields._current[18];
        v18.fields._current[18].klass = *p_eventFriendPoints;
        sub_1C32BC4(v12, (int32_t)v11, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__get_ClippingObjectList(this, v13);
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_1C32E7C(0);
    RecommendSupportServantSelectListViewObject__SetupDisp(
      (RecommendSupportServantSelectListViewObject_o *)v17.fields._current,
      v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  eventStartChecker = this->fields.eventStartChecker;
  Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
  if ( !eventStartChecker )
LABEL_20:
    sub_1C32E7C(Instance);
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

  if ( (byte_4C3397F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17485/*"btn_filter_on"*/);
    sub_1C32C20(&StringLiteral_17484/*"btn_filter"*/);
    byte_4C3397F = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C32E7C(sort);
  }
  v5 = (System_String_o **)&StringLiteral_17484/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17485/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void RecommendSupportServantSelectListViewManager__SetMode(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  RecommendSupportServantSelectListViewManager__SetMode_34831540(this, mode, v6);
}


void RecommendSupportServantSelectListViewManager__SetMode_34831540(
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
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
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
  RecommendSupportServantSelectListViewManager__RequestListObject_34826280(this, v4, method);
}


void RecommendSupportServantSelectListViewManager__SetMode_34831668(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  RecommendSupportServantSelectListViewManager__SetMode_34831540(this, mode, v6);
}


void RecommendSupportServantSelectListViewManager__SetObjectItem(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  int32_t initMode; // w19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  if ( (byte_4C33973 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&RecommendSupportServantSelectListViewObject_TypeInfo);
    byte_4C33973 = 1;
  }
  if ( obj )
  {
    naturalAligment = RecommendSupportServantSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (RecommendSupportServantSelectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportServantSelectListViewObject_TypeInfo )
        obj = 0;
    }
    else
    {
      obj = 0;
    }
  }
  initMode = this->fields.initMode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( initMode == 2 )
  {
    if ( v8 )
    {
      if ( obj )
      {
        v10 = 3;
LABEL_17:
        RecommendSupportServantSelectListViewObject__Init_34829828(
          (RecommendSupportServantSelectListViewObject_o *)obj,
          v10,
          v9);
        return;
      }
      goto LABEL_19;
    }
  }
  else if ( v8 )
  {
    if ( obj )
    {
      v10 = 2;
      goto LABEL_17;
    }
LABEL_19:
    sub_1C32E7C(v8);
  }
}


void RecommendSupportServantSelectListViewManager__SetSortButtonImage(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v5; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v7; // x8
  int32_t sortKind; // w9
  System_String_o **v9; // x8
  struct ListViewSort_o *v10; // x8
  System_String_o **v11; // x9
  System_String_o **v12; // x10
  System_String_o **v13; // x8
  System_String_o **v14; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v16; // x20

  if ( (byte_4C33982 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17521/*"btn_sort_up"*/);
    sub_1C32C20(&StringLiteral_17619/*"btn_txt_up"*/);
    sub_1C32C20(&StringLiteral_17570/*"btn_txt_new"*/);
    sub_1C32C20(&StringLiteral_17560/*"btn_txt_down"*/);
    sub_1C32C20(&StringLiteral_17577/*"btn_txt_old"*/);
    sub_1C32C20(&StringLiteral_17518/*"btn_sort_down"*/);
    byte_4C33982 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v5 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v5 )
      goto LABEL_40;
    UILabel__set_text(v5, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v7 = this->fields.sort;
    if ( !v7 )
      goto LABEL_40;
    sortKind = v7->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v9 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17577/*"btn_txt_old"*/ : &StringLiteral_17570/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v9, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v11 = (System_String_o **)&StringLiteral_17518/*"btn_sort_down"*/;
      v12 = (System_String_o **)&StringLiteral_17521/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v13 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17619/*"btn_txt_up"*/ : &StringLiteral_17560/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v10 = this->fields.sort;
      if ( !v10 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v11 = (System_String_o **)&StringLiteral_17521/*"btn_sort_up"*/;
      v12 = (System_String_o **)&StringLiteral_17518/*"btn_sort_down"*/;
    }
    if ( v10->fields.isAscendingOrder )
      v14 = v11;
    else
      v14 = v12;
    UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v16 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v16 )
      {
        UILabel__set_text(v16, (System_String_o *)sort, 0);
        return;
      }
    }
LABEL_40:
    sub_1C32E7C(sort);
  }
}


void RecommendSupportServantSelectListViewManager__UpdateItemState(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  _QWORD *SelfUserGame; // x0
  __int64 v6; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  RecommendSupportServantSelectListViewManager___c_c *v8; // x0
  System_Func_object__object__o *_9__70_0; // x21
  Il2CppObject *v10; // x22
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  _QWORD *v15; // x19
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x19
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 v30; // x8
  __int128 v31; // q0
  UserServantEntity_o *v32; // x0
  bool v33; // w8
  UserServantEntity_o *v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-70h]

  if ( (byte_4C33987 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_ListViewItem__RecommendSupportServantSelectListViewItem___);
    sub_1C32C20(&System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager___c__UpdateItemState_b__70_0__);
    sub_1C32C20(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_4C33987 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_53;
  v6 = SelfUserGame[16];
  itemList = this->fields.itemList;
  v8 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v8 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__70_0 = (System_Func_object__object__o *)v8->static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__70_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__70_0,
      v10,
      Method_RecommendSupportServantSelectListViewManager___c__UpdateItemState_b__70_0__,
      0);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__o *)_9__70_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__70_0, (int32_t)_9__70_0, v12, v13);
  }
  SelfUserGame = System_Linq_Enumerable__Select_object__object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                   (System_Func_TSource__TResult__o *)_9__70_0,
                   (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_ListViewItem__RecommendSupportServantSelectListViewItem___);
  if ( !SelfUserGame )
LABEL_53:
    sub_1C32E7C(SelfUserGame);
  v14 = *SelfUserGame;
  v15 = SelfUserGame;
  v16 = *(unsigned __int16 *)(*SelfUserGame + 302LL);
  if ( *(_WORD *)(*SelfUserGame + 302LL) )
  {
    v17 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__c **)v17 - 1) != System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_15;
    }
    v18 = v14 + 16LL * *v17 + 312;
  }
  else
  {
LABEL_15:
    v18 = sub_1C83438(
            SelfUserGame,
            System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo,
            0);
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v19 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_1C83438(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__c **)v26 - 1) != System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_29;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_29:
      v27 = sub_1C83438(
              v19,
              System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo,
              0);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    v29 = v28;
    if ( v28 )
    {
      v30 = *(_QWORD *)(v28 + 200);
      *(_BYTE *)(v28 + 236) = isPushMode;
      if ( !v30 )
        sub_1C32E7C(v28);
      v31 = *(_OWORD *)(v30 + 32);
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
      *(_OWORD *)&v40.fields.fakeValue = v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v39 = v40;
      *(_BYTE *)(v29 + 237) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v39, 0) == v6;
      if ( isPushMode )
      {
        v32 = *(UserServantEntity_o **)(v29 + 200);
        if ( !v32 )
          sub_1C32E7C(0);
        if ( UserServantEntity__IsLeave(v32, 0) )
        {
          v33 = 0;
        }
        else
        {
          v34 = *(UserServantEntity_o **)(v29 + 200);
          if ( !v34 )
            sub_1C32E7C(0);
          v33 = !UserServantEntity__IsEventJoin(v34, 0);
        }
      }
      else
      {
        v33 = 1;
      }
      *(_BYTE *)(v29 + 238) = v33;
    }
  }
  v35 = *(_QWORD *)v19;
  v36 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_47;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_47:
    v38 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v19, *(_QWORD *)(v38 + 8));
}


void RecommendSupportServantSelectListViewManager___OnClickSortKind_b__60_0(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  RecommendSupportServantSelectListViewManager___c_c *v6; // x8
  CommonUI_o *v7; // x19
  System_Action_o *_9__60_1; // x20
  Il2CppObject *v9; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3398A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager___c__OnClickSortKind_b__60_1__);
    sub_1C32C20(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_4C3398A = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v6 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__60_1 = v6->static_fields->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__60_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__60_1,
      v9,
      Method_RecommendSupportServantSelectListViewManager___c__OnClickSortKind_b__60_1__,
      0);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_1 = _9__60_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__60_1, (int32_t)_9__60_1, v11, v12);
  }
  if ( !v7 )
    sub_1C32E7C(Instance);
  CommonUI__CloseServantSortSelectMenu(v7, _9__60_1, 0);
}


void RecommendSupportServantSelectListViewManager__add_callbackFunc(
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

  if ( (byte_4C33968 & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4C33968 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (RecommendSupportServantSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1C3313C(v7);
  RecommendSupportServantSelectListViewManager__remove_callbackFunc(v10, v11, v12);
}


void RecommendSupportServantSelectListViewManager__add_callbackFunc2(
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

  if ( (byte_4C3396A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C3396A = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1C3313C(v7);
  RecommendSupportServantSelectListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *RecommendSupportServantSelectListViewManager__get_ClippingObjectList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  ListViewItem_o *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3396F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3396F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C32E7C(0);
      Item = (ListViewItem_o *)RecommendSupportServantSelectListViewObject__GetItem(
                                 (RecommendSupportServantSelectListViewObject_o *)Component_object,
                                 v8);
      if ( !Item )
        sub_1C32E7C(0);
      if ( Item->fields.isTermination )
      {
        v13 = ListViewManager__ClippingItem_43718444((ListViewManager_o *)this, Item, 0);
        if ( v13 )
        {
          if ( !v3 )
            sub_1C32E7C(v13);
          items = v3->fields._items;
          v15 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C32E7C(v13);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C32E7C(Item);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C32E7C(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *)v3;
}


System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *RecommendSupportServantSelectListViewManager__get_ObjectList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Func_object__bool__o *_9__33_0; // x20
  Il2CppObject *v6; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  RecommendSupportServantSelectListViewManager___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__object__o *_9__33_1; // x20
  Il2CppObject *v14; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4C3396E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportServantSelectListViewObject___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_RecommendSupportServantSelectListViewObject___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C32C20(&System_Func_GameObject__RecommendSupportServantSelectListViewObject__TypeInfo);
    sub_1C32C20(&System_Func_GameObject__bool__TypeInfo);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_0__);
    sub_1C32C20(&Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_1__);
    sub_1C32C20(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_4C3396E = 1;
  }
  v3 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v3 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__33_0 = (System_Func_object__bool__o *)v3->static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__33_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__33_0,
      v6,
      Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_0__,
      0);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_GameObject__bool__o *)_9__33_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v11 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v12 = v10;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v11 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__33_1 = (System_Func_object__object__o *)v11->static_fields->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__33_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_GameObject__RecommendSupportServantSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__33_1,
      v14,
      Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_1__,
      0);
    v15 = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    v15->__9__33_1 = (struct System_Func_GameObject__RecommendSupportServantSelectListViewObject__o *)_9__33_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v15->__9__33_1, (int32_t)_9__33_1, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__33_1,
                                                               (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportServantSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v18,
                                                                                             (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_RecommendSupportServantSelectListViewObject___);
}


void RecommendSupportServantSelectListViewManager__remove_callbackFunc(
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

  if ( (byte_4C33969 & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4C33969 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (RecommendSupportServantSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1C3313C(v7);
  RecommendSupportServantSelectListViewManager__add_callbackFunc2(v10, v11, v12);
}


void RecommendSupportServantSelectListViewManager__remove_callbackFunc2(
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

  if ( (byte_4C3396B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C3396B = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1C3313C(v7);
  RecommendSupportServantSelectListViewManager__Awake(v10, v11);
}


void RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A72938;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A728E0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *RecommendSupportServantSelectListViewManager_CallbackFunc__BeginInvoke(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = result;
  v20 = kind;
  if ( (byte_4C3398B & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&RecommendSupportServantSelectListViewManager_ResultKind_TypeInfo);
    byte_4C3398B = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             RecommendSupportServantSelectListViewManager_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&result,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v18, callback, object);
}


void RecommendSupportServantSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3398C & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_4C3398C = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(RecommendSupportServantSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewManager___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4C3398F & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C3398F = 1;
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
  if ( (byte_4C3398D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3398D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0, 0);
}


RecommendSupportServantSelectListViewObject_o *RecommendSupportServantSelectListViewManager___c___get_ObjectList_b__33_1(
        RecommendSupportServantSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4C3398E & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewManager___c_o *)sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
    byte_4C3398E = 1;
  }
  if ( !go )
    sub_1C32E7C(this);
  return (RecommendSupportServantSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            go,
                                                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
}