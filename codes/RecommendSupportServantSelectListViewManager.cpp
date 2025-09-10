void RecommendSupportServantSelectListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C232B9 & 1) == 0 )
  {
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&RecommendSupportServantSelectListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11226/*"RecommendSupportServantSelectAll"*/);
    byte_4C232B9 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v1, (System_String_o *)StringLiteral_11226/*"RecommendSupportServantSelectAll"*/, 3, 0, 0);
  RecommendSupportServantSelectListViewManager_TypeInfo->static_fields->ServantSortInfoAll = v1;
  sub_1C2D434(
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
  sub_1C2D434((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  RecommendSupportServantSelectListViewManager__ModifyList(this, 1, v10);
  RecommendSupportServantSelectListViewManager__SetMode_34716492(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void RecommendSupportServantSelectListViewManager__CreateList(
        RecommendSupportServantSelectListViewManager_o *this,
        RecommendSupportData_o *supportServantData,
        int32_t index,
        EventUpValSetupInfo_o *eventSetupInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  RecommendSupportServantSelectListViewManager_c *v9; // x0
  int64_t ServantSortInfoAll; // x0
  struct RecommendSupportServantSelectListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *v12; // x1
  struct ListViewSort_o **p_sort; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct ListViewSort_o *sort; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x22
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v32; // x23
  UserServantEntity_o *v33; // x25
  int32_t selectIndex; // w26
  EventCampaignEntity_array *eventFriendPoints; // x27
  RecommendSupportServantSelectListViewItem_o *v36; // x24
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v48; // x20
  System_Action_o *v49; // x22
  TimeOverChecker_o *v50; // x23
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v54; // x21
  TimeOverChecker_o *v55; // x22
  int32_t v56; // w2
  const MethodInfo *v57; // x3

  if ( (byte_4C232A0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjects__);
    sub_1C2D490(&RecommendSupportServantSelectListViewManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TimeOverChecker_TypeInfo);
    sub_1C2D490(&StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C232A0 = 1;
  }
  this->fields.recommendSupportData = supportServantData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.recommendSupportData,
    (int32_t)supportServantData,
    index,
    (const MethodInfo *)eventSetupInfo);
  this->fields.selectIndex = index;
  this->fields.isCanNotLongPush = 0;
  v9 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo);
    v9 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = (int64_t)v9->static_fields->ServantSortInfoAll;
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
  v12 = static_fields->ServantSortInfoAll;
  this->fields.sort = static_fields->ServantSortInfoAll;
  p_sort = &this->fields.sort;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v12, v14, v15);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v19, v20);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v16, v17);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v22, v23);
  }
  ServantSortInfoAll = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)ServantSortInfoAll,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)ServantSortInfoAll, 0);
  ServantSortInfoAll = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)ServantSortInfoAll,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)ServantSortInfoAll, 0, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v28, v29);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !OrganizationList )
    goto LABEL_48;
  max_length = OrganizationList->max_length;
  if ( (int)max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)max_length )
        sub_1C2D6F4(ServantSortInfoAll, v8, v30);
      v33 = OrganizationList->m_Items[v32];
      selectIndex = this->fields.selectIndex;
      eventFriendPoints = this->fields.eventFriendPoints;
      v36 = (RecommendSupportServantSelectListViewItem_o *)sub_1C2D6DC(RecommendSupportServantSelectListViewItem_TypeInfo);
      RecommendSupportServantSelectListViewItem___ctor(
        v36,
        v32,
        v33,
        supportServantData,
        selectIndex,
        eventSetupInfo,
        eventFriendPoints,
        0);
      ServantSortInfoAll = (int64_t)this->fields.itemList;
      if ( !ServantSortInfoAll )
        break;
      v39 = *(_QWORD *)(ServantSortInfoAll + 16);
      v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ServantSortInfoAll + 28);
      if ( !v39 )
        break;
      v41 = *(int *)(ServantSortInfoAll + 24);
      if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ServantSortInfoAll,
          (Il2CppObject *)v36,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = v39 + 8 * v41;
        *(_DWORD *)(ServantSortInfoAll + 24) = v41 + 1;
        *(_QWORD *)(v42 + 32) = v36;
        sub_1C2D434((CGThumbnailListItem_o *)(v42 + 32), (int32_t)v36, v37, v38);
      }
      LODWORD(max_length) = OrganizationList->max_length;
      if ( (__int64)++v32 >= (int)max_length )
        goto LABEL_39;
    }
LABEL_48:
    sub_1C2D6EC(ServantSortInfoAll, v8);
  }
LABEL_39:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  ServantSortInfoAll = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_48;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ServantSortInfoAll, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  RecommendSupportServantSelectListViewManager__SetFilterButtonImage(this, v44);
  EventFriendCampaignFinishedAt = RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(
                                    this,
                                    v45);
  timeOverChecker = this->fields.timeOverChecker;
  v48 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v49 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v49,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjects__,
      0);
    v50 = (TimeOverChecker_o *)sub_1C2D6DC(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v50, v49, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.timeOverChecker = v50;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.timeOverChecker, (int32_t)v50, v51, v52);
    timeOverChecker = this->fields.timeOverChecker;
    if ( !timeOverChecker )
      goto LABEL_48;
  }
  TimeOverChecker__Start(timeOverChecker, v48, 0);
  eventStartChecker = this->fields.eventStartChecker;
  if ( eventStartChecker )
  {
    ServantSortInfoAll = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
  }
  else
  {
    v54 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v54,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
      0);
    v55 = (TimeOverChecker_o *)sub_1C2D6DC(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v55, v54, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.eventStartChecker = v55;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventStartChecker, (int32_t)v55, v56, v57);
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
  RecommendSupportServantSelectListViewManager_c *v2; // x0
  ListViewSort_o *ServantSortInfoAll; // x0

  if ( (byte_4C2329C & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportServantSelectListViewManager_TypeInfo);
    byte_4C2329C = 1;
  }
  v2 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo);
    v2 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = v2->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    sub_1C2D6EC(0, v1);
  ListViewSort__DeleteContinueData(ServantSortInfoAll, 0);
}


void RecommendSupportServantSelectListViewManager__DestroyList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
}


void RecommendSupportServantSelectListViewManager__EndCloseShowServant(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportServantSelectListViewManager__RequestListObject_34711232(this, 3, v2);
}


void RecommendSupportServantSelectListViewManager__EndCloseShowServantQuestJump(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C232AB & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C232AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
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
  RecommendSupportServantSelectListViewManager___c_c *v8; // x8
  CommonUI_o *v9; // x19
  System_Action_o *_9__58_0; // x20
  Il2CppObject *v11; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C232AE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager___c__EndSelectFilterKind_b__58_0__);
    sub_1C2D490(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_4C232AE = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    RecommendSupportServantSelectListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v8 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__58_0 = v8->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__58_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__58_0,
      v11,
      Method_RecommendSupportServantSelectListViewManager___c__EndSelectFilterKind_b__58_0__,
      0);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = _9__58_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v13, v14);
  }
  if ( !v9 )
    sub_1C2D6EC(Instance, v7);
  CommonUI__CloseServantFilterSelectMenu(v9, _9__58_0, 0);
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

  if ( (byte_4C232AA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_EndCloseShowServantQuestJump__);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_EndCloseShowServant__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C232AA = 1;
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
      RecommendSupportServantSelectListViewManager__RequestListObject_34711232(this, 4, v15);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    v13 = Method_RecommendSupportServantSelectListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    v13 = Method_RecommendSupportServantSelectListViewManager_EndCloseShowServantQuestJump__;
  }
  v16 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, v13, 0);
  if ( !Instance )
LABEL_17:
    sub_1C2D6EC(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C232B3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C232B3 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C2D6EC(itemList, *(_QWORD *)&svtId);
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
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventCampaignEntity_array *eventFriendPoints; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  unsigned int v9; // w22
  void *monitor; // x20
  EventCampaignEntity_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C232B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4C232B6 = 1;
  }
  entity = 0;
  if ( this->fields.eventFriendPoints )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
    eventFriendPoints = this->fields.eventFriendPoints;
    if ( !eventFriendPoints )
      goto LABEL_23;
    max_length = eventFriendPoints->max_length;
    if ( max_length >= 1 )
    {
      v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v9 = 0;
      monitor = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1C2D6F4(Master_object, v4, v5);
        v11 = eventFriendPoints->m_Items[v9];
        if ( !v11 || !v8 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v8,
                                          &entity,
                                          v11->fields.eventId,
                                          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
        if ( (int)++v9 >= max_length )
          return (int64_t)monitor;
      }
LABEL_23:
      sub_1C2D6EC(Master_object, v4);
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

  if ( (byte_4C232B8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (RecommendSupportServantSelectListViewManager_o *)sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C232B8 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
      sub_1C2D6EC(this, index);
    v8 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v8,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C232A2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C232A2 = 1;
  }
  result = (RecommendSupportServantSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (RecommendSupportServantSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)result,
                                                              index,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2D6EC(0, method);
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
  int64_t v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
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

  if ( (byte_4C232B5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C232B5 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment )
        goto LABEL_9;
      if ( *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) != RecommendSupportServantSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v16 = *(_QWORD *)(itemList + 200);
      if ( !v16 || !*(_BYTE *)(itemList + 194) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 193) )
      {
        v17 = *(_OWORD *)(v16 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v39 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
        if ( !v8 )
          goto LABEL_37;
        items = v8->fields._items;
        v19 = Method_System_Collections_Generic_List_long__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v8->fields._size;
        v9 = itemList;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v26 = v19[4];
          v27 = v8;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v27,
            v9,
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v26 + 192) + 112LL));
          goto LABEL_9;
        }
        v21 = &items->obj.klass + size;
        v8->fields._size = size + 1;
      }
      else
      {
        v22 = *(_OWORD *)(v16 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v38, 0);
        if ( !v7 )
          goto LABEL_37;
        v23 = v7->fields._items;
        v24 = Method_System_Collections_Generic_List_long__Add__;
        ++v7->fields._version;
        if ( !v23 )
          goto LABEL_37;
        v25 = v7->fields._size;
        v9 = itemList;
        if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
        {
          v26 = v24[4];
          v27 = v7;
          goto LABEL_30;
        }
        v21 = &v23->obj.klass + v25;
        v7->fields._size = v25 + 1;
      }
      v21[4] = (Il2CppClass *)v9;
LABEL_9:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C2D6EC(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)choiceList, 0, v10, v11);
    v36 = unChoiceList;
    v35 = 0;
    *unChoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C2D434((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unChoiceList = v32;
    v36 = unChoiceList;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v36, v35, v33, v34);
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
  int64_t v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
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

  if ( (byte_4C232B4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C232B4 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment )
        goto LABEL_9;
      if ( *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) != RecommendSupportServantSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v16 = *(_QWORD *)(itemList + 200);
      if ( !v16 || !*(_BYTE *)(itemList + 192) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 175) )
      {
        v17 = *(_OWORD *)(v16 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v39 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
        if ( !v8 )
          goto LABEL_37;
        items = v8->fields._items;
        v19 = Method_System_Collections_Generic_List_long__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v8->fields._size;
        v9 = itemList;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v26 = v19[4];
          v27 = v8;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v27,
            v9,
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v26 + 192) + 112LL));
          goto LABEL_9;
        }
        v21 = &items->obj.klass + size;
        v8->fields._size = size + 1;
      }
      else
      {
        v22 = *(_OWORD *)(v16 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v38, 0);
        if ( !v7 )
          goto LABEL_37;
        v23 = v7->fields._items;
        v24 = Method_System_Collections_Generic_List_long__Add__;
        ++v7->fields._version;
        if ( !v23 )
          goto LABEL_37;
        v25 = v7->fields._size;
        v9 = itemList;
        if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
        {
          v26 = v24[4];
          v27 = v7;
          goto LABEL_30;
        }
        v21 = &v23->obj.klass + v25;
        v7->fields._size = v25 + 1;
      }
      v21[4] = (Il2CppClass *)v9;
LABEL_9:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C2D6EC(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C2D434((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void RecommendSupportServantSelectListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  RecommendSupportServantSelectListViewManager_c *v2; // x0
  ListViewSort_o *ServantSortInfoAll; // x0

  if ( (byte_4C2329D & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportServantSelectListViewManager_TypeInfo);
    byte_4C2329D = 1;
  }
  v2 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo);
    v2 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = v2->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    sub_1C2D6EC(0, v1);
  ListViewSort__InitLoad(ServantSortInfoAll, 0);
}


void RecommendSupportServantSelectListViewManager__ModifyItem(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportServantSelectListViewManager__RequestListObject_34711232(this, 4, v2);
}


void RecommendSupportServantSelectListViewManager__ModifyList(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  UserServantMaster_o *Master_object; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  UserServantMaster_o *v8; // x21
  unsigned int v9; // w29
  UserServantMaster_c **v10; // x28
  UserServantMaster_c *v11; // x8
  UserServantEntity_o **v12; // x28
  UserServantMaster_c *v13; // t1
  Il2CppType byval_arg; // q0
  __int64 v15; // x2
  UserServantMaster_o *v16; // x22
  int32_t v17; // w24
  RecommendSupportServantSelectListViewItem_o *v18; // x23
  __int64 naturalAligment; // x10
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x8
  __int128 v21; // q0
  int32_t v22; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v24; // x21
  __int64 v25; // x10
  UnityEngine_Object_o *klass; // x22
  struct System_String_o *MasterName_k__BackingField; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+50h] [xbp-80h]

  if ( (byte_4C232A1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C232A1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
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
  v8 = Master_object;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = &v8->klass + (int)v9;
      v13 = v10[4];
      v12 = (UserServantEntity_o **)(v10 + 4);
      v11 = v13;
      if ( !v13 )
        break;
      byval_arg = v11->_1.byval_arg;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v11->_1.name;
      *(Il2CppType *)&v31.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v30 = v31;
      Master_object = (UserServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                               &v30,
                                               0);
      if ( size >= 1 )
      {
        v16 = Master_object;
        v17 = 0;
        while ( 1 )
        {
          Master_object = (UserServantMaster_o *)this->fields.itemList;
          if ( !Master_object )
            goto LABEL_44;
          Master_object = (UserServantMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)Master_object,
                                                   v17,
                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Master_object )
          {
            v18 = (RecommendSupportServantSelectListViewItem_o *)Master_object;
            naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
            if ( Master_object->klass->_2.naturalAligment >= (unsigned int)naturalAligment
              && (RecommendSupportServantSelectListViewItem_c *)Master_object->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
            {
              seriazlier = Master_object[2].fields.seriazlier;
              if ( seriazlier )
              {
                v21 = *(_OWORD *)&seriazlier->fields.tmp1;
                *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&seriazlier->fields.sb;
                *(_OWORD *)&v31.fields.fakeValue = v21;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v29 = v31;
                Master_object = (UserServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                         &v29,
                                                         0);
                if ( Master_object == v16 )
                  break;
              }
            }
          }
          if ( size == ++v17 )
            goto LABEL_24;
        }
        if ( v9 >= LODWORD(v8->fields._MasterName_k__BackingField) )
          goto LABEL_45;
        RecommendSupportServantSelectListViewItem__ModifyItem(v18, *v12, 0);
        if ( !isIconSizeChange )
        {
          RecommendSupportServantSelectListViewItem__ModifyLockItem(v18, 0);
          RecommendSupportServantSelectListViewItem__ModifyChoiceItem(v18, 0);
        }
      }
LABEL_24:
      if ( ++v9 == (_DWORD)MasterName_k__BackingField )
        goto LABEL_30;
      if ( v9 >= LODWORD(v8->fields._MasterName_k__BackingField) )
LABEL_45:
        sub_1C2D6F4(Master_object, v5, v15);
    }
LABEL_44:
    sub_1C2D6EC(Master_object, v5);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v22 = 0;
    while ( 1 )
    {
      Master_object = (UserServantMaster_o *)this->fields.itemList;
      if ( !Master_object )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Master_object,
               v22,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v24 = (ListViewItem_o *)Item;
        v25 = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v25
          && (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[v25 - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Master_object = (UserServantMaster_o *)v24->fields.viewObject;
            if ( !Master_object )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Master_object, v24, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v22 )
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
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4C232AC & 1) == 0 )
  {
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__);
    byte_4C232AC = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(0, v5);
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

  if ( (byte_4C232AD & 1) == 0 )
  {
    sub_1C2D490(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_EndSelectFilterKind__);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C232AD = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C2D6EC(v6, v7);
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
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C232B1 & 1) == 0 )
  {
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__);
    byte_4C232B1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C232B0 & 1) == 0 )
  {
    sub_1C2D490(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager__OnClickSortKind_b__60_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C232B0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager__OnClickSortKind_b__60_0__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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

  if ( (byte_4C232A9 & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_EndShowServant__);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__);
    sub_1C2D490(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C232A9 = 1;
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
          v9 = (_QWORD *)sub_1C2D4A8(Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__);
        v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
        if ( !sortValue2B )
        {
          OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
          RecommendSupportServantSelectListViewManager__RequestListObject_34711232(this, 3, v13);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = (ServantStatusDialog_ResultDelegate_o *)sub_1C2D6DC(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v12,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListViewManager_EndShowServant__,
          0);
        if ( Instance )
        {
          CommonUI__OpenServantStatusDialog_31178516((CommonUI_o *)Instance, 1, sortValue2B, v12, 0, 0, 0);
          ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0);
          return;
        }
      }
    }
    sub_1C2D6EC(scrollView, obj);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C232A8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C232A8 = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C232A6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__get_Count__);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C232A6 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__,
        0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      RecommendSupportServantSelectListViewObject__Init_34717196(
        (RecommendSupportServantSelectListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListViewManager__RequestListObject_34711232(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C232A7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__get_Count__);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C232A7 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      RecommendSupportServantSelectListViewObject__Init_34717280(
        (RecommendSupportServantSelectListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  }
}


void RecommendSupportServantSelectListViewManager__ResetEventCampaignListViewObjects(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  Il2CppClass **p_eventFriendPoints; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 naturalAligment; // x11
  Il2CppClass *v12; // x1
  CGThumbnailListItem_o *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  TimeOverChecker_o *timeOverChecker; // x20
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C232A4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C232A4 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  memset(&v19, 0, sizeof(v19));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  p_eventFriendPoints = (Il2CppClass **)&this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v7, v8);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v20 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v20.fields._current )
    {
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v20.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportServantSelectListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
      {
        v12 = *p_eventFriendPoints;
        v13 = (CGThumbnailListItem_o *)&v20.fields._current[18];
        v20.fields._current[18].klass = *p_eventFriendPoints;
        sub_1C2D434(v13, (int32_t)v12, v9, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__get_ClippingObjectList(this, v14);
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
  {
    if ( !v19.fields._current )
      sub_1C2D6EC(0, v15);
    RecommendSupportServantSelectListViewObject__SetupDisp(
      (RecommendSupportServantSelectListViewObject_o *)v19.fields._current,
      v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  timeOverChecker = this->fields.timeOverChecker;
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v17);
  if ( !timeOverChecker )
LABEL_20:
    sub_1C2D6EC(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, (int64_t)Instance, 0);
}


void RecommendSupportServantSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  Il2CppClass **p_eventFriendPoints; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 naturalAligment; // x11
  Il2CppClass *v12; // x1
  CGThumbnailListItem_o *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  TimeOverChecker_o *eventStartChecker; // x19
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C232A5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C232A5 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  memset(&v18, 0, sizeof(v18));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0);
  p_eventFriendPoints = (Il2CppClass **)&this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v7, v8);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v19.fields._current )
    {
      naturalAligment = RecommendSupportServantSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v19.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportServantSelectListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
      {
        v12 = *p_eventFriendPoints;
        v13 = (CGThumbnailListItem_o *)&v19.fields._current[18];
        v19.fields._current[18].klass = *p_eventFriendPoints;
        sub_1C2D434(v13, (int32_t)v12, v9, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__get_ClippingObjectList(this, v14);
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
  {
    if ( !v18.fields._current )
      sub_1C2D6EC(0, v15);
    RecommendSupportServantSelectListViewObject__SetupDisp(
      (RecommendSupportServantSelectListViewObject_o *)v18.fields._current,
      v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  eventStartChecker = this->fields.eventStartChecker;
  Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0);
  if ( !eventStartChecker )
LABEL_20:
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C232AF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C232AF = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C2D6EC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17480/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17481/*"btn_filter_on"*/;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  RecommendSupportServantSelectListViewManager__SetMode_34716492(this, mode, v6);
}


void RecommendSupportServantSelectListViewManager__SetMode_34716492(
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
  RecommendSupportServantSelectListViewManager__RequestListObject_34711232(this, v4, method);
}


void RecommendSupportServantSelectListViewManager__SetMode_34716620(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  RecommendSupportServantSelectListViewManager__SetMode_34716492(this, mode, v6);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w1

  if ( (byte_4C232A3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&RecommendSupportServantSelectListViewObject_TypeInfo);
    byte_4C232A3 = 1;
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
        v11 = 3;
LABEL_17:
        RecommendSupportServantSelectListViewObject__Init_34714780(
          (RecommendSupportServantSelectListViewObject_o *)obj,
          v11,
          v10);
        return;
      }
      goto LABEL_19;
    }
  }
  else if ( v8 )
  {
    if ( obj )
    {
      v11 = 2;
      goto LABEL_17;
    }
LABEL_19:
    sub_1C2D6EC(v8, v9);
  }
}


void RecommendSupportServantSelectListViewManager__SetSortButtonImage(
        RecommendSupportServantSelectListViewManager_o *this,
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4C232B2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17517/*"btn_sort_up"*/);
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    sub_1C2D490(&StringLiteral_17566/*"btn_txt_new"*/);
    sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    sub_1C2D490(&StringLiteral_17573/*"btn_txt_old"*/);
    sub_1C2D490(&StringLiteral_17514/*"btn_sort_down"*/);
    byte_4C232B2 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_40;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_40;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17573/*"btn_txt_old"*/ : &StringLiteral_17566/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17615/*"btn_txt_up"*/ : &StringLiteral_17556/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0);
        return;
      }
    }
LABEL_40:
    sub_1C2D6EC(sort, v4);
  }
}


void RecommendSupportServantSelectListViewManager__UpdateItemState(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  _QWORD *SelfUserGame; // x0
  __int64 v6; // x1
  __int64 v7; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  RecommendSupportServantSelectListViewManager___c_c *v9; // x0
  System_Func_object__object__o *_9__70_0; // x21
  Il2CppObject *v11; // x22
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  _QWORD *v16; // x19
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x21
  __int64 v33; // x8
  __int128 v34; // q0
  __int64 v35; // x1
  UserServantEntity_o *v36; // x0
  __int64 v37; // x1
  bool v38; // w8
  UserServantEntity_o *v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-70h]

  if ( (byte_4C232B7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_ListViewItem__RecommendSupportServantSelectListViewItem___);
    sub_1C2D490(&System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager___c__UpdateItemState_b__70_0__);
    sub_1C2D490(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_4C232B7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_53;
  v7 = SelfUserGame[16];
  itemList = this->fields.itemList;
  v9 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v9 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__70_0 = (System_Func_object__object__o *)v9->static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__70_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__70_0,
      v11,
      Method_RecommendSupportServantSelectListViewManager___c__UpdateItemState_b__70_0__,
      0);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__o *)_9__70_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__70_0, (int32_t)_9__70_0, v13, v14);
  }
  SelfUserGame = System_Linq_Enumerable__Select_object__object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                   (System_Func_TSource__TResult__o *)_9__70_0,
                   (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_ListViewItem__RecommendSupportServantSelectListViewItem___);
  if ( !SelfUserGame )
LABEL_53:
    sub_1C2D6EC(SelfUserGame, v6);
  v15 = *SelfUserGame;
  v16 = SelfUserGame;
  v17 = *(unsigned __int16 *)(*SelfUserGame + 302LL);
  if ( *(_WORD *)(*SelfUserGame + 302LL) )
  {
    v18 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__c **)v18 - 1) != System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_15;
    }
    v19 = v15 + 16LL * *v18 + 312;
  }
  else
  {
LABEL_15:
    v19 = sub_1C7DCA8(
            SelfUserGame,
            System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo,
            0);
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1C2D6EC(0, v20);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_22;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_22:
      v25 = sub_1C7DCA8(v21, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__c **)v28 - 1) != System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_29;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_29:
      v29 = sub_1C7DCA8(
              v21,
              System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo,
              0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( v30 )
    {
      v33 = *(_QWORD *)(v30 + 200);
      *(_BYTE *)(v30 + 236) = isPushMode;
      if ( !v33 )
        sub_1C2D6EC(v30, v31);
      v34 = *(_OWORD *)(v33 + 32);
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
      *(_OWORD *)&v45.fields.fakeValue = v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v45;
      *(_BYTE *)(v32 + 237) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v44, 0) == v7;
      if ( isPushMode )
      {
        v36 = *(UserServantEntity_o **)(v32 + 200);
        if ( !v36 )
          sub_1C2D6EC(0, v35);
        if ( UserServantEntity__IsLeave(v36, 0) )
        {
          v38 = 0;
        }
        else
        {
          v39 = *(UserServantEntity_o **)(v32 + 200);
          if ( !v39 )
            sub_1C2D6EC(0, v37);
          v38 = !UserServantEntity__IsEventJoin(v39, 0);
        }
      }
      else
      {
        v38 = 1;
      }
      *(_BYTE *)(v32 + 238) = v38;
    }
  }
  v40 = *(_QWORD *)v21;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_47;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_47:
    v43 = sub_1C7DCA8(v21, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v21, *(_QWORD *)(v43 + 8));
}


void RecommendSupportServantSelectListViewManager___OnClickSortKind_b__60_0(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  RecommendSupportServantSelectListViewManager___c_c *v7; // x8
  CommonUI_o *v8; // x19
  System_Action_o *_9__60_1; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C232BA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager___c__OnClickSortKind_b__60_1__);
    sub_1C2D490(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_4C232BA = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v7 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__60_1 = v7->static_fields->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__60_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__60_1,
      v10,
      Method_RecommendSupportServantSelectListViewManager___c__OnClickSortKind_b__60_1__,
      0);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_1 = _9__60_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__60_1, (int32_t)_9__60_1, v12, v13);
  }
  if ( !v8 )
    sub_1C2D6EC(Instance, v6);
  CommonUI__CloseServantSortSelectMenu(v8, _9__60_1, 0);
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

  if ( (byte_4C23298 & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4C23298 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C2329A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2329A = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1C2D9AC(v7);
  RecommendSupportServantSelectListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *RecommendSupportServantSelectListViewManager__get_ClippingObjectList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C2329F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2329F = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)RecommendSupportServantSelectListViewObject__GetItem(
                                 (RecommendSupportServantSelectListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C2329E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportServantSelectListViewObject___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_RecommendSupportServantSelectListViewObject___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C2D490(&System_Func_GameObject__RecommendSupportServantSelectListViewObject__TypeInfo);
    sub_1C2D490(&System_Func_GameObject__bool__TypeInfo);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_0__);
    sub_1C2D490(&Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_1__);
    sub_1C2D490(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_4C2329E = 1;
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
    _9__33_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__33_0,
      v6,
      Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_0__,
      0);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_GameObject__bool__o *)_9__33_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_GameObject___);
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
    _9__33_1 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_GameObject__RecommendSupportServantSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__33_1,
      v14,
      Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_1__,
      0);
    v15 = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    v15->__9__33_1 = (struct System_Func_GameObject__RecommendSupportServantSelectListViewObject__o *)_9__33_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->__9__33_1, (int32_t)_9__33_1, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__33_1,
                                                               (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportServantSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v18,
                                                                                             (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_RecommendSupportServantSelectListViewObject___);
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

  if ( (byte_4C23299 & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4C23299 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C2329B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2329B = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1C2D9AC(v7);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6D210;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6D1B8;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4C232BB & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&RecommendSupportServantSelectListViewManager_ResultKind_TypeInfo);
    byte_4C232BB = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             RecommendSupportServantSelectListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void RecommendSupportServantSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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

  if ( (byte_4C232BC & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportServantSelectListViewManager___c_TypeInfo);
    byte_4C232BC = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(RecommendSupportServantSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewManager___c_o *)v1;
  sub_1C2D434(
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

  if ( (byte_4C232BF & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportServantSelectListViewItem_TypeInfo);
    byte_4C232BF = 1;
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
  if ( (byte_4C232BD & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C232BD = 1;
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
  if ( (byte_4C232BE & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewManager___c_o *)sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
    byte_4C232BE = 1;
  }
  if ( !go )
    sub_1C2D6EC(this, go);
  return (RecommendSupportServantSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            go,
                                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
}