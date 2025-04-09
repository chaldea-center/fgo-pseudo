void __fastcall RecommendSupportServantSelectListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49B701F & 1) == 0 )
  {
    sub_1B4CF90(&ListViewSort_TypeInfo, v1);
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_TypeInfo, v2);
    sub_1B4CF90(&StringLiteral_10987/*"RecommendSupportServantSelectAll"*/, v3);
    byte_49B701F = 1;
  }
  v4 = (ListViewSort_o *)sub_1B4D1DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_41359140(v4, (System_String_o *)StringLiteral_10987/*"RecommendSupportServantSelectAll"*/, 3, 0, 0LL);
  RecommendSupportServantSelectListViewManager_TypeInfo->static_fields->ServantSortInfoAll = v4;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)RecommendSupportServantSelectListViewManager_TypeInfo->static_fields,
    (int32_t)v4,
    v5,
    v6);
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
  sub_1B4CF34((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1B4D1EC(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  RecommendSupportServantSelectListViewManager__ModifyList(this, 1, v10);
  RecommendSupportServantSelectListViewManager__SetMode_32915760(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__CreateList(
        RecommendSupportServantSelectListViewManager_o *this,
        RecommendSupportData_o *supportServantData,
        int32_t index,
        EventUpValSetupInfo_o *eventSetupInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  RecommendSupportServantSelectListViewManager_c *v20; // x0
  int64_t ServantSortInfoAll; // x0
  struct RecommendSupportServantSelectListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *v23; // x1
  struct ListViewSort_o **p_sort; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct ListViewSort_o *sort; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UserServantEntity_array *OrganizationList; // x22
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  unsigned __int64 v42; // x23
  UserServantEntity_o *v43; // x25
  int32_t selectIndex; // w26
  EventCampaignEntity_array *eventFriendPoints; // x27
  RecommendSupportServantSelectListViewItem_o *v46; // x24
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v58; // x20
  System_Action_o *v59; // x22
  TimeOverChecker_o *v60; // x23
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v64; // x21
  TimeOverChecker_o *v65; // x22
  int32_t v66; // w2
  const MethodInfo *v67; // x3

  if ( (byte_49B7006 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, supportServantData);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventCampaignMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v11);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItem_TypeInfo, v12);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjectsStart__, v13);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjects__, v14);
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_TypeInfo, v15);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B4CF90(&TimeOverChecker_TypeInfo, v17);
    sub_1B4CF90(&StringLiteral_11543/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v18);
    byte_49B7006 = 1;
  }
  this->fields.recommendSupportData = supportServantData;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.recommendSupportData,
    (int32_t)supportServantData,
    index,
    (const MethodInfo *)eventSetupInfo);
  this->fields.selectIndex = index;
  this->fields.isCanNotLongPush = 0;
  v20 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo);
    v20 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = (int64_t)v20->static_fields->ServantSortInfoAll;
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
  v23 = static_fields->ServantSortInfoAll;
  this->fields.sort = static_fields->ServantSortInfoAll;
  p_sort = &this->fields.sort;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v23, v25, v26);
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
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v30, v31);
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
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v27, v28);
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
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v33, v34);
  }
  ServantSortInfoAll = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)ServantSortInfoAll,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)ServantSortInfoAll, 0LL);
  ServantSortInfoAll = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  ServantSortInfoAll = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)ServantSortInfoAll,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !ServantSortInfoAll )
    goto LABEL_48;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns(
                           (EventCampaignMaster_o *)ServantSortInfoAll,
                           0,
                           0LL);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v39, v40);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !OrganizationList )
    goto LABEL_48;
  v41 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v41 >= 1 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      if ( v42 >= (unsigned int)v41 )
        sub_1B4D1F4(ServantSortInfoAll, v19);
      v43 = OrganizationList->m_Items[v42];
      selectIndex = this->fields.selectIndex;
      eventFriendPoints = this->fields.eventFriendPoints;
      v46 = (RecommendSupportServantSelectListViewItem_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewItem_TypeInfo);
      RecommendSupportServantSelectListViewItem___ctor(
        v46,
        v42,
        v43,
        supportServantData,
        selectIndex,
        eventSetupInfo,
        eventFriendPoints,
        0LL);
      ServantSortInfoAll = (int64_t)this->fields.itemList;
      if ( !ServantSortInfoAll )
        break;
      v49 = *(_QWORD *)(ServantSortInfoAll + 16);
      v50 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ServantSortInfoAll + 28);
      if ( !v49 )
        break;
      v51 = *(int *)(ServantSortInfoAll + 24);
      if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ServantSortInfoAll,
          (Il2CppObject *)v46,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = v49 + 8 * v51;
        *(_DWORD *)(ServantSortInfoAll + 24) = v51 + 1;
        *(_QWORD *)(v52 + 32) = v46;
        sub_1B4CF34((CGThumbnailListItem_o *)(v52 + 32), (int32_t)v46, v47, v48);
      }
      LODWORD(v41) = OrganizationList->max_length;
      if ( (__int64)++v42 >= (int)v41 )
        goto LABEL_39;
    }
LABEL_48:
    sub_1B4D1EC(ServantSortInfoAll, v19);
  }
LABEL_39:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  ServantSortInfoAll = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11543/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_48;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ServantSortInfoAll, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  RecommendSupportServantSelectListViewManager__SetFilterButtonImage(this, v54);
  EventFriendCampaignFinishedAt = RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(
                                    this,
                                    v55);
  timeOverChecker = this->fields.timeOverChecker;
  v58 = EventFriendCampaignFinishedAt;
  if ( !timeOverChecker )
  {
    v59 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjects__,
      0LL);
    v60 = (TimeOverChecker_o *)sub_1B4D1DC(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v60, v59, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    this->fields.timeOverChecker = v60;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.timeOverChecker, (int32_t)v60, v61, v62);
    timeOverChecker = this->fields.timeOverChecker;
    if ( !timeOverChecker )
      goto LABEL_48;
  }
  TimeOverChecker__Start(timeOverChecker, v58, 0LL);
  eventStartChecker = this->fields.eventStartChecker;
  if ( eventStartChecker )
  {
    ServantSortInfoAll = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  }
  else
  {
    v64 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v64,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
      0LL);
    v65 = (TimeOverChecker_o *)sub_1B4D1DC(TimeOverChecker_TypeInfo);
    TimeOverChecker___ctor(v65, v64, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    this->fields.eventStartChecker = v65;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.eventStartChecker, (int32_t)v65, v66, v67);
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
  RecommendSupportServantSelectListViewManager_c *v2; // x0
  ListViewSort_o *ServantSortInfoAll; // x0

  if ( (byte_49B7002 & 1) == 0 )
  {
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_TypeInfo, v1);
    byte_49B7002 = 1;
  }
  v2 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo);
    v2 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = v2->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    sub_1B4D1EC(0LL, v1);
  ListViewSort__DeleteContinueData(ServantSortInfoAll, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__DestroyList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B4D1EC(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
}


void __fastcall RecommendSupportServantSelectListViewManager__EndCloseShowServant(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportServantSelectListViewManager__RequestListObject_32910500(this, 3, v2);
}


void __fastcall RecommendSupportServantSelectListViewManager__EndCloseShowServantQuestJump(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49B7011 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49B7011 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__EndSelectFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  RecommendSupportServantSelectListViewManager___c_c *v11; // x8
  CommonUI_o *v12; // x19
  System_Action_o *_9__58_0; // x20
  Il2CppObject *v14; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_49B7014 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager___c__EndSelectFilterKind_b__58_0__, v6);
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager___c_TypeInfo, v7);
    byte_49B7014 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    RecommendSupportServantSelectListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v11 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__58_0 = v11->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__58_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__58_0,
      v14,
      Method_RecommendSupportServantSelectListViewManager___c__EndSelectFilterKind_b__58_0__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = _9__58_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v16, v17);
  }
  if ( !v12 )
    sub_1B4D1EC(Instance, v10);
  CommonUI__CloseServantFilterSelectMenu(v12, _9__58_0, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v15; // x0
  intptr_t v16; // w2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x21

  if ( (byte_49B7010 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_EndCloseShowServantQuestJump__, v9);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_EndCloseShowServant__, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_49B7010 = 1;
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
    RecommendSupportServantSelectListViewManager__UpdateItemState(this, 0, v13);
    if ( isDecide )
    {
      RecommendSupportServantSelectListViewManager__ModifyList(this, 0, v17);
      if ( isNeedSort )
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      RecommendSupportServantSelectListViewManager__RequestListObject_32910500(this, 4, v18);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    v16 = Method_RecommendSupportServantSelectListViewManager_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    v16 = Method_RecommendSupportServantSelectListViewManager_EndCloseShowServantQuestJump__;
  }
  v19 = v15;
  System_Action___ctor(v15, (Il2CppObject *)this, v16, 0LL);
  if ( !Instance )
LABEL_17:
    sub_1B4D1EC(scrollView, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall RecommendSupportServantSelectListViewManager__GetAmountSortValue(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49B7019 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItem_TypeInfo, v6);
    byte_49B7019 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1B4D1EC(itemList, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
    return 0LL;
  v9 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v9,
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewItem_TypeInfo
        && RecommendSupportServantSelectListViewItem__get_SvtId(
             (RecommendSupportServantSelectListViewItem_o *)Item,
             0LL) == svtId )
      {
        ++v10;
      }
    }
    if ( size == ++v9 )
      return v10;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_13;
  }
}


int64_t __fastcall RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  unsigned int v10; // w22
  void *monitor; // x20
  EventCampaignEntity_o *v12; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B701C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4);
    byte_49B701C = 1;
  }
  entity = 0LL;
  if ( this->fields.eventFriendPoints )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMaster___);
    eventFriendPoints = this->fields.eventFriendPoints;
    if ( !eventFriendPoints )
      goto LABEL_23;
    max_length = eventFriendPoints->max_length;
    if ( max_length >= 1 )
    {
      v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v10 = 0;
      monitor = 0LL;
      while ( 1 )
      {
        if ( v10 >= max_length )
          sub_1B4D1F4(Master_object, v6);
        v12 = eventFriendPoints->m_Items[v10];
        if ( !v12 || !v9 )
          break;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v9,
                                          &entity,
                                          v12->fields.eventId,
                                          (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
        if ( (int)++v10 >= max_length )
          return (int64_t)monitor;
      }
LABEL_23:
      sub_1B4D1EC(Master_object, v6);
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
  int32_t v9; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49B701E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index);
    this = (RecommendSupportServantSelectListViewManager_o *)sub_1B4CF90(
                                                               &RecommendSupportServantSelectListViewItem_TypeInfo,
                                                               v8);
    byte_49B701E = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
      sub_1B4D1EC(this, index);
    v9 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v9,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        break;
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportServantSelectListViewItem_TypeInfo
        || BYTE4(Item[20].klass) )
      {
        break;
      }
      if ( sum == ++v9 )
        return 1;
    }
    *index = v9;
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
  RecommendSupportServantSelectListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49B7008 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItem_TypeInfo, v5);
    byte_49B7008 = 1;
  }
  result = (RecommendSupportServantSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (RecommendSupportServantSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)result,
                                                              index,
                                                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B4D1EC(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall RecommendSupportServantSelectListViewManager__GetSwapChoiceList(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unChoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_49B701B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItem_TypeInfo, v14);
    byte_49B701B = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low )
        goto LABEL_9;
      if ( *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                           + 8 * methodPtr_low
                                                           - 8) != RecommendSupportServantSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v24 = *(_QWORD *)(itemList + 192);
      if ( !v24 || !*(_BYTE *)(itemList + 186) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 185) )
      {
        v25 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v48.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v47 = v48;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v47, 0LL);
        if ( !v16 )
          goto LABEL_37;
        items = v16->fields._items;
        v27 = Method_System_Collections_Generic_List_long__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v16->fields._size;
        v17 = itemList;
        if ( (unsigned int)size >= items->max_length )
        {
          v34 = v27[4];
          v35 = v16;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v35,
            v17,
            *(const MethodInfo_3568210 **)(*(_QWORD *)(v34 + 192) + 112LL));
          goto LABEL_9;
        }
        v29 = &items->obj.klass + size;
        v16->fields._size = size + 1;
      }
      else
      {
        v30 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v48.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v46 = v48;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v46, 0LL);
        if ( !v15 )
          goto LABEL_37;
        v31 = v15->fields._items;
        v32 = Method_System_Collections_Generic_List_long__Add__;
        ++v15->fields._version;
        if ( !v31 )
          goto LABEL_37;
        v33 = v15->fields._size;
        v17 = itemList;
        if ( (unsigned int)v33 >= v31->max_length )
        {
          v34 = v32[4];
          v35 = v15;
          goto LABEL_30;
        }
        v29 = &v31->obj.klass + v33;
        v15->fields._size = v33 + 1;
      }
      v29[4] = (Il2CppClass *)v17;
LABEL_9:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1B4D1EC(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *choiceList = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)choiceList, 0, v18, v19);
    v44 = unChoiceList;
    v43 = 0;
    *unChoiceList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v37;
    sub_1B4CF34((CGThumbnailListItem_o *)choiceList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unChoiceList = v40;
    v44 = unChoiceList;
  }
  sub_1B4CF34((CGThumbnailListItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


bool __fastcall RecommendSupportServantSelectListViewManager__GetSwapLockList(
        RecommendSupportServantSelectListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_49B701A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItem_TypeInfo, v14);
    byte_49B701A = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low )
        goto LABEL_9;
      if ( *(RecommendSupportServantSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                           + 8 * methodPtr_low
                                                           - 8) != RecommendSupportServantSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v24 = *(_QWORD *)(itemList + 192);
      if ( !v24 || !*(_BYTE *)(itemList + 184) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 167) )
      {
        v25 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v48.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v47 = v48;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v47, 0LL);
        if ( !v16 )
          goto LABEL_37;
        items = v16->fields._items;
        v27 = Method_System_Collections_Generic_List_long__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v16->fields._size;
        v17 = itemList;
        if ( (unsigned int)size >= items->max_length )
        {
          v34 = v27[4];
          v35 = v16;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v35,
            v17,
            *(const MethodInfo_3568210 **)(*(_QWORD *)(v34 + 192) + 112LL));
          goto LABEL_9;
        }
        v29 = &items->obj.klass + size;
        v16->fields._size = size + 1;
      }
      else
      {
        v30 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v48.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v46 = v48;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v46, 0LL);
        if ( !v15 )
          goto LABEL_37;
        v31 = v15->fields._items;
        v32 = Method_System_Collections_Generic_List_long__Add__;
        ++v15->fields._version;
        if ( !v31 )
          goto LABEL_37;
        v33 = v15->fields._size;
        v17 = itemList;
        if ( (unsigned int)v33 >= v31->max_length )
        {
          v34 = v32[4];
          v35 = v15;
          goto LABEL_30;
        }
        v29 = &v31->obj.klass + v33;
        v15->fields._size = v33 + 1;
      }
      v29[4] = (Il2CppClass *)v17;
LABEL_9:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1B4D1EC(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *lockList = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)lockList, 0, v18, v19);
    v44 = unlockList;
    v43 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v37;
    sub_1B4CF34((CGThumbnailListItem_o *)lockList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unlockList = v40;
    v44 = unlockList;
  }
  sub_1B4CF34((CGThumbnailListItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


void __fastcall RecommendSupportServantSelectListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  RecommendSupportServantSelectListViewManager_c *v2; // x0
  ListViewSort_o *ServantSortInfoAll; // x0

  if ( (byte_49B7003 & 1) == 0 )
  {
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_TypeInfo, v1);
    byte_49B7003 = 1;
  }
  v2 = RecommendSupportServantSelectListViewManager_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager_TypeInfo);
    v2 = RecommendSupportServantSelectListViewManager_TypeInfo;
  }
  ServantSortInfoAll = v2->static_fields->ServantSortInfoAll;
  if ( !ServantSortInfoAll )
    sub_1B4D1EC(0LL, v1);
  ListViewSort__InitLoad(ServantSortInfoAll, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__ModifyItem(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportServantSelectListViewManager__RequestListObject_32910500(this, 4, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__ModifyList(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UserServantMaster_o *Master_object; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  UserServantMaster_o *v14; // x21
  unsigned int v15; // w29
  UserServantMaster_c **v16; // x28
  UserServantMaster_c *v17; // x8
  UserServantEntity_o **v18; // x28
  UserServantMaster_c *v19; // t1
  Il2CppType byval_arg; // q0
  UserServantMaster_o *v21; // x22
  int32_t v22; // w24
  RecommendSupportServantSelectListViewItem_o *v23; // x23
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x8
  __int128 v26; // q0
  int32_t v27; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v29; // x21
  __int64 v30; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_String_o *MasterName_k__BackingField; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+50h] [xbp-80h]

  if ( (byte_49B7007 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, isIconSizeChange);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItem_TypeInfo, v9);
    byte_49B7007 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
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
  v14 = Master_object;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = &v14->klass + (int)v15;
      v19 = v16[4];
      v18 = (UserServantEntity_o **)(v16 + 4);
      v17 = v19;
      if ( !v19 )
        break;
      byval_arg = v17->_1.byval_arg;
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v17->_1.name;
      *(Il2CppType *)&v36.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v35 = v36;
      Master_object = (UserServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(
                                               &v35,
                                               0LL);
      if ( size >= 1 )
      {
        v21 = Master_object;
        v22 = 0;
        while ( 1 )
        {
          Master_object = (UserServantMaster_o *)this->fields.itemList;
          if ( !Master_object )
            goto LABEL_44;
          Master_object = (UserServantMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)Master_object,
                                                   v22,
                                                   (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Master_object )
          {
            v23 = (RecommendSupportServantSelectListViewItem_o *)Master_object;
            methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
              && (RecommendSupportServantSelectListViewItem_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
            {
              lookup = Master_object[2].fields._lookup;
              if ( lookup )
              {
                v26 = *(_OWORD *)&lookup->fields._count;
                *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&lookup->fields._buckets;
                *(_OWORD *)&v36.fields.fakeValue = v26;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v34 = v36;
                Master_object = (UserServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(
                                                         &v34,
                                                         0LL);
                if ( Master_object == v21 )
                  break;
              }
            }
          }
          if ( size == ++v22 )
            goto LABEL_24;
        }
        if ( v15 >= LODWORD(v14->fields._MasterName_k__BackingField) )
          goto LABEL_45;
        RecommendSupportServantSelectListViewItem__ModifyItem(v23, *v18, 0LL);
        if ( !isIconSizeChange )
        {
          RecommendSupportServantSelectListViewItem__ModifyLockItem(v23, 0LL);
          RecommendSupportServantSelectListViewItem__ModifyChoiceItem(v23, 0LL);
        }
      }
LABEL_24:
      if ( ++v15 == (_DWORD)MasterName_k__BackingField )
        goto LABEL_30;
      if ( v15 >= LODWORD(v14->fields._MasterName_k__BackingField) )
LABEL_45:
        sub_1B4D1F4(Master_object, v11);
    }
LABEL_44:
    sub_1B4D1EC(Master_object, v11);
  }
LABEL_30:
  if ( size >= 1 && isIconSizeChange )
  {
    v27 = 0;
    while ( 1 )
    {
      Master_object = (UserServantMaster_o *)this->fields.itemList;
      if ( !Master_object )
        goto LABEL_44;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Master_object,
               v27,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v29 = (ListViewItem_o *)Item;
        v30 = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v30
          && (RecommendSupportServantSelectListViewItem_c *)Item->klass->_2.typeHierarchy[v30 - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Master_object = (UserServantMaster_o *)v29->fields.viewObject;
            if ( !Master_object )
              goto LABEL_44;
            ListViewObject__SetItemSeed((ListViewObject_o *)Master_object, v29, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v27 )
        return;
    }
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnClickBonusFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_49B7012 & 1) == 0 )
  {
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__, method);
    byte_49B7012 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B4D1EC(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnClickFilterKind(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_49B7013 & 1) == 0 )
  {
    sub_1B4CF90(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_EndSelectFilterKind__, v3);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49B7013 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B4D1DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B4D1EC(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 1, sort, v11, -1, 0LL);
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
  const MethodInfo *v3; // x3
  struct RecommendSupportServantSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B4D1EC(v6, v7);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_49B7017 & 1) == 0 )
  {
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__, method);
    byte_49B7017 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B4D1EC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnClickSortKind(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_49B7016 & 1) == 0 )
  {
    sub_1B4CF90(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__, v3);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager__OnClickSortKind_b__60_0__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49B7016 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B4D1DC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListViewManager__OnClickSortKind_b__60_0__,
      0LL);
    if ( !v10 )
      sub_1B4D1EC(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 3, sort, 0, v11, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnLongPushListView(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  UserServantEntity_o *sortValue2B; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *Instance; // x21
  ServantStatusDialog_ResultDelegate_o *v16; // x22
  const MethodInfo *v17; // x2

  if ( (byte_49B700F & 1) == 0 )
  {
    sub_1B4CF90(&RecommendSupportServantSelectListViewItem_TypeInfo, obj);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_EndShowServant__, v5);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__, v6);
    sub_1B4CF90(&ServantStatusDialog_ResultDelegate_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49B700F = 1;
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
        v13 = Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListViewManager_OnLongPushListView__);
        v14 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v13, v13[4]);
        if ( !sortValue2B )
        {
          OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0LL);
          RecommendSupportServantSelectListViewManager__RequestListObject_32910500(this, 3, v17);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v16 = (ServantStatusDialog_ResultDelegate_o *)sub_1B4D1DC(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v16,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListViewManager_EndShowServant__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenServantStatusDialog_30259088((CommonUI_o *)Instance, 1, sortValue2B, v16, 0, 0LL);
          ListViewManager__ClearScrollBarValue((ListViewManager_o *)this, 1, 0LL);
          return;
        }
      }
    }
    sub_1B4D1EC(scrollView, obj);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__OnMoveEnd(
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

  if ( (byte_49B700E & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B700E = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B4D1EC(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49B700C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__,
      v7);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__,
      v8);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__,
      v9);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__,
      v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__get_Count__, v11);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__, v12);
    sub_1B4CF90(&StringLiteral_9737/*"OnMoveEnd"*/, v13);
    byte_49B700C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B4D1EC(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9737/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B4D1EC(v19, v20);
      RecommendSupportServantSelectListViewObject__Init_32916464(
        (RecommendSupportServantSelectListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__RequestListObject_32910500(
        RecommendSupportServantSelectListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49B700D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__,
      v5);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__,
      v6);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__,
      v7);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__,
      v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__get_Count__, v9);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__, v10);
    sub_1B4CF90(&StringLiteral_9737/*"OnMoveEnd"*/, v11);
    byte_49B700D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B4D1EC(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9737/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B4D1EC(v17, v18);
      RecommendSupportServantSelectListViewObject__Init_32916548(
        (RecommendSupportServantSelectListViewObject_o *)current,
        mode,
        v16,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__ResetEventCampaignListViewObjects(
        RecommendSupportServantSelectListViewManager_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  Il2CppClass **p_eventFriendPoints; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 methodPtr_low; // x11
  Il2CppClass *v22; // x1
  CGThumbnailListItem_o *v23; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  TimeOverChecker_o *timeOverChecker; // x20
  const MethodInfo *v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_49B700A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__,
      v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__,
      v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__,
      v8);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__,
      v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItem_TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49B700A = 1;
  }
  memset(&v30, 0, sizeof(v30));
  memset(&v29, 0, sizeof(v29));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = (Il2CppClass **)&this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v17, v18);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v30 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v30.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportServantSelectListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
      {
        v22 = *p_eventFriendPoints;
        v23 = (CGThumbnailListItem_o *)&v30.fields._current[17];
        v30.fields._current[17].klass = *p_eventFriendPoints;
        sub_1B4CF34(v23, (int32_t)v22, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__get_ClippingObjectList(this, v24);
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
  {
    if ( !v29.fields._current )
      sub_1B4D1EC(0LL, v25);
    RecommendSupportServantSelectListViewObject__SetupDisp(
      (RecommendSupportServantSelectListViewObject_o *)v29.fields._current,
      v25);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  timeOverChecker = this->fields.timeOverChecker;
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v27);
  if ( !timeOverChecker )
LABEL_20:
    sub_1B4D1EC(Instance, v14);
  TimeOverChecker__Start(timeOverChecker, (int64_t)Instance, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        RecommendSupportServantSelectListViewManager_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  Il2CppClass **p_eventFriendPoints; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 methodPtr_low; // x11
  Il2CppClass *v22; // x1
  CGThumbnailListItem_o *v23; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  TimeOverChecker_o *eventStartChecker; // x19
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_49B700B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__,
      v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__,
      v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__get_Current__,
      v8);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__,
      v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItem_TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49B700B = 1;
  }
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = (Il2CppClass **)&this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v17, v18);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v29 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v29.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v29.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportServantSelectListViewItem_c *)v29.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewItem_TypeInfo )
      {
        v22 = *p_eventFriendPoints;
        v23 = (CGThumbnailListItem_o *)&v29.fields._current[17];
        v29.fields._current[17].klass = *p_eventFriendPoints;
        sub_1B4CF34(v23, (int32_t)v22, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  Instance = (DataManager_o *)RecommendSupportServantSelectListViewManager__get_ClippingObjectList(this, v24);
  if ( !Instance )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__MoveNext__) )
  {
    if ( !v28.fields._current )
      sub_1B4D1EC(0LL, v25);
    RecommendSupportServantSelectListViewObject__SetupDisp(
      (RecommendSupportServantSelectListViewObject_o *)v28.fields._current,
      v25);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportServantSelectListViewObject__Dispose__);
  eventStartChecker = this->fields.eventStartChecker;
  Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  if ( !eventStartChecker )
LABEL_20:
    sub_1B4D1EC(Instance, v14);
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
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_49B7015 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_17197/*"btn_filter_on"*/, method);
    sub_1B4CF90(&StringLiteral_17196/*"btn_filter"*/, v3);
    byte_49B7015 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B4D1EC(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17196/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17197/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewManager__SetMode(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  RecommendSupportServantSelectListViewManager__SetMode_32915760(this, mode, v6);
}


void __fastcall RecommendSupportServantSelectListViewManager__SetMode_32915760(
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
  RecommendSupportServantSelectListViewManager__RequestListObject_32910500(this, v4, method);
}


void __fastcall RecommendSupportServantSelectListViewManager__SetMode_32915888(
        RecommendSupportServantSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  RecommendSupportServantSelectListViewManager__SetMode_32915760(this, mode, v6);
}


void __fastcall RecommendSupportServantSelectListViewManager__SetObjectItem(
        RecommendSupportServantSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 methodPtr_low; // x11
  int32_t initMode; // w19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t v12; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_49B7009 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, obj);
    sub_1B4CF90(&RecommendSupportServantSelectListViewObject_TypeInfo, v6);
    byte_49B7009 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( initMode == 2 )
  {
    if ( v9 )
    {
      if ( v4 )
      {
        v12 = 3;
LABEL_17:
        RecommendSupportServantSelectListViewObject__Init_32914048(
          (RecommendSupportServantSelectListViewObject_o *)v4,
          v12,
          v11);
        return;
      }
      goto LABEL_19;
    }
  }
  else if ( v9 )
  {
    if ( v4 )
    {
      v12 = 2;
      goto LABEL_17;
    }
LABEL_19:
    sub_1B4D1EC(v9, v10);
  }
}


void __fastcall RecommendSupportServantSelectListViewManager__SetSortButtonImage(
        RecommendSupportServantSelectListViewManager_o *this,
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
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v23; // x20

  if ( (byte_49B7018 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_17227/*"btn_sort_up"*/, v3);
    sub_1B4CF90(&StringLiteral_17318/*"btn_txt_up"*/, v4);
    sub_1B4CF90(&StringLiteral_17271/*"btn_txt_new"*/, v5);
    sub_1B4CF90(&StringLiteral_17261/*"btn_txt_down"*/, v6);
    sub_1B4CF90(&StringLiteral_17278/*"btn_txt_old"*/, v7);
    sub_1B4CF90(&StringLiteral_17224/*"btn_sort_down"*/, v8);
    byte_49B7018 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_40;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_40;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17278/*"btn_txt_old"*/ : &StringLiteral_17271/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v18 = (System_String_o **)&StringLiteral_17224/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17227/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17318/*"btn_txt_up"*/ : &StringLiteral_17261/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v18 = (System_String_o **)&StringLiteral_17227/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17224/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v21 = v18;
    else
      v21 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v23 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v23 )
      {
        UILabel__set_text(v23, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_40:
    sub_1B4D1EC(sort, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager__UpdateItemState(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isPushMode,
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
  _QWORD *SelfUserGame; // x0
  __int64 v14; // x1
  __int64 v15; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  RecommendSupportServantSelectListViewManager___c_c *v17; // x0
  System_Func_object__object__o *_9__70_0; // x21
  Il2CppObject *v19; // x22
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  _QWORD *v24; // x19
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x19
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x21
  __int64 v41; // x8
  __int128 v42; // q0
  __int64 v43; // x1
  UserServantEntity_o *v44; // x0
  __int64 v45; // x1
  bool v46; // w8
  UserServantEntity_o *v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-70h]

  if ( (byte_49B701D & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Linq_Enumerable_Select_ListViewItem__RecommendSupportServantSelectListViewItem___,
      isPushMode);
    sub_1B4CF90(&System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__TypeInfo, v5);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v6);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo, v8);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager___c__UpdateItemState_b__70_0__, v11);
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager___c_TypeInfo, v12);
    byte_49B701D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_53;
  v15 = SelfUserGame[15];
  itemList = this->fields.itemList;
  v17 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v17 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__70_0 = (System_Func_object__object__o *)v17->static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__70_0 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__70_0,
      v19,
      Method_RecommendSupportServantSelectListViewManager___c__UpdateItemState_b__70_0__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Func_ListViewItem__RecommendSupportServantSelectListViewItem__o *)_9__70_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__70_0, (int32_t)_9__70_0, v21, v22);
  }
  SelfUserGame = System_Linq_Enumerable__Select_object__object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                   (System_Func_TSource__TResult__o *)_9__70_0,
                   (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_ListViewItem__RecommendSupportServantSelectListViewItem___);
  if ( !SelfUserGame )
LABEL_53:
    sub_1B4D1EC(SelfUserGame, v14);
  v23 = *SelfUserGame;
  v24 = SelfUserGame;
  v25 = *(unsigned __int16 *)(*SelfUserGame + 302LL);
  if ( *(_WORD *)(*SelfUserGame + 302LL) )
  {
    v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__c **)v26 - 1) != System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_15;
    }
    v27 = v23 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_15:
    v27 = sub_1B9D724(
            SelfUserGame,
            System_Collections_Generic_IEnumerable_RecommendSupportServantSelectListViewItem__TypeInfo,
            0LL);
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  if ( !v29 )
    sub_1B4D1EC(0LL, v28);
  while ( 1 )
  {
    v30 = *(_QWORD *)v29;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_22;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_22:
      v33 = sub_1B9D724(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v29;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__c **)v36 - 1) != System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_29;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_29:
      v37 = sub_1B9D724(
              v29,
              System_Collections_Generic_IEnumerator_RecommendSupportServantSelectListViewItem__TypeInfo,
              0LL);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
    v40 = v38;
    if ( v38 )
    {
      v41 = *(_QWORD *)(v38 + 192);
      *(_BYTE *)(v38 + 216) = isPushMode;
      if ( !v41 )
        sub_1B4D1EC(v38, v39);
      v42 = *(_OWORD *)(v41 + 32);
      *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)(v41 + 16);
      *(_OWORD *)&v53.fields.fakeValue = v42;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v52 = v53;
      *(_BYTE *)(v40 + 217) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v52, 0LL) == v15;
      if ( isPushMode )
      {
        v44 = *(UserServantEntity_o **)(v40 + 192);
        if ( !v44 )
          sub_1B4D1EC(0LL, v43);
        if ( UserServantEntity__IsLeave(v44, 0LL) )
        {
          v46 = 0;
        }
        else
        {
          v47 = *(UserServantEntity_o **)(v40 + 192);
          if ( !v47 )
            sub_1B4D1EC(0LL, v45);
          v46 = !UserServantEntity__IsEventJoin(v47, 0LL);
        }
      }
      else
      {
        v46 = 1;
      }
      *(_BYTE *)(v40 + 218) = v46;
    }
  }
  v48 = *(_QWORD *)v29;
  v49 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_47;
    }
    v51 = v48 + 16LL * *v50 + 312;
  }
  else
  {
LABEL_47:
    v51 = sub_1B9D724(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v51)(v29, *(_QWORD *)(v51 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager___OnClickSortKind_b__60_0(
        RecommendSupportServantSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  RecommendSupportServantSelectListViewManager___c_c *v10; // x8
  CommonUI_o *v11; // x19
  System_Action_o *_9__60_1; // x20
  Il2CppObject *v13; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_49B7020 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager___c__OnClickSortKind_b__60_1__, v6);
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager___c_TypeInfo, v7);
    byte_49B7020 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v10 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__60_1 = v10->static_fields->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__60_1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__60_1,
      v13,
      Method_RecommendSupportServantSelectListViewManager___c__OnClickSortKind_b__60_1__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_1 = _9__60_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__60_1, (int32_t)_9__60_1, v15, v16);
  }
  if ( !v11 )
    sub_1B4D1EC(Instance, v9);
  CommonUI__CloseServantSortSelectMenu(v11, _9__60_1, 0LL);
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

  if ( (byte_49B6FFE & 1) == 0 )
  {
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, value);
    byte_49B6FFE = 1;
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
    v8 = sub_1B8724C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1B4D4AC(v7);
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

  if ( (byte_49B7000 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, value);
    byte_49B7000 = 1;
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
    v8 = sub_1B8724C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1B4D4AC(v7);
  RecommendSupportServantSelectListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *__fastcall RecommendSupportServantSelectListViewManager__get_ClippingObjectList(
        RecommendSupportServantSelectListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49B7005 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__TypeInfo, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    byte_49B7005 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B4D1EC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1B4D1EC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B4D1EC(0LL, v18);
      Item = (ListViewItem_o *)RecommendSupportServantSelectListViewObject__GetItem(
                                 (RecommendSupportServantSelectListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B4D1EC(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_41341816((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B4D1EC(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B4D1EC(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B4D1EC(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B4D1EC(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B4CF34((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *)v11;
}


System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *__fastcall RecommendSupportServantSelectListViewManager__get_ObjectList(
        RecommendSupportServantSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  RecommendSupportServantSelectListViewManager___c_c *v10; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Func_object__bool__o *_9__33_0; // x20
  Il2CppObject *v13; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  RecommendSupportServantSelectListViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__object__o *_9__33_1; // x20
  Il2CppObject *v21; // x21
  struct RecommendSupportServantSelectListViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_49B7004 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportServantSelectListViewObject___,
      method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_RecommendSupportServantSelectListViewObject___, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_GameObject___, v4);
    sub_1B4CF90(&System_Func_GameObject__RecommendSupportServantSelectListViewObject__TypeInfo, v5);
    sub_1B4CF90(&System_Func_GameObject__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_0__, v7);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_1__, v8);
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager___c_TypeInfo, v9);
    byte_49B7004 = 1;
  }
  v10 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v10 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__33_0 = (System_Func_object__bool__o *)v10->static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__33_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__33_0,
      v13,
      Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_0__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_GameObject__bool__o *)_9__33_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v18 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  v19 = v17;
  if ( !RecommendSupportServantSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewManager___c_TypeInfo);
    v18 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
  }
  _9__33_1 = (System_Func_object__object__o *)v18->static_fields->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = RecommendSupportServantSelectListViewManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__33_1 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_GameObject__RecommendSupportServantSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__33_1,
      v21,
      Method_RecommendSupportServantSelectListViewManager___c__get_ObjectList_b__33_1__,
      0LL);
    v22 = RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields;
    v22->__9__33_1 = (struct System_Func_GameObject__RecommendSupportServantSelectListViewObject__o *)_9__33_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v22->__9__33_1, (int32_t)_9__33_1, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__33_1,
                                                               (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportServantSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportServantSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v25,
                                                                                             (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_RecommendSupportServantSelectListViewObject___);
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

  if ( (byte_49B6FFF & 1) == 0 )
  {
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, value);
    byte_49B6FFF = 1;
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
    v8 = sub_1B8724C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1B4D4AC(v7);
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

  if ( (byte_49B7001 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, value);
    byte_49B7001 = 1;
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
    v8 = sub_1B8724C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportServantSelectListViewManager_o *)sub_1B4D4AC(v7);
  RecommendSupportServantSelectListViewManager__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1997948;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19978F0;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_49B7021 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_ResultKind_TypeInfo, v9);
    byte_49B7021 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             RecommendSupportServantSelectListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v14, callback, object);
}


void __fastcall RecommendSupportServantSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportServantSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B7022 & 1) == 0 )
  {
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager___c_TypeInfo, v1);
    byte_49B7022 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(RecommendSupportServantSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewManager___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)RecommendSupportServantSelectListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_49B7025 & 1) == 0 )
  {
    sub_1B4CF90(&RecommendSupportServantSelectListViewItem_TypeInfo, listViewItem);
    byte_49B7025 = 1;
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
  if ( (byte_49B7023 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, go);
    byte_49B7023 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0LL, 0LL);
}


RecommendSupportServantSelectListViewObject_o *__fastcall RecommendSupportServantSelectListViewManager___c___get_ObjectList_b__33_1(
        RecommendSupportServantSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_49B7024 & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewManager___c_o *)sub_1B4CF90(
                                                                   &Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___,
                                                                   go);
    byte_49B7024 = 1;
  }
  if ( !go )
    sub_1B4D1EC(this, go);
  return (RecommendSupportServantSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            go,
                                                            (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListViewObject___);
}