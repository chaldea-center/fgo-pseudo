void EventRankingListViewItem___ctor(
        EventRankingListViewItem_o *this,
        EventRankingRoundItemInfo_o *info,
        int32_t ranking,
        bool isJoinTerm,
        bool isGetReward,
        int32_t nowTerm,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  bool v15; // w23
  bool v16; // w22
  bool IsMostSupport; // w0
  int32_t v18; // w25
  BalanceConfig_c *v19; // x0
  int32_t eventId; // w23
  int32_t groupId; // w22
  struct GiftEntity_array *GiftListById; // x0
  int32_t imageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C512F3 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C512F3 = 1;
  }
  imageId = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.itemInfo = info;
  this->fields.isPlayedGoal = 0;
  this->fields.groupImageId = 0;
  *(_QWORD *)&this->fields.isGoal = 0;
  this->fields.isJoinTerm = 0;
  Instance = (Il2CppObject *)sub_1C3E508(&this->fields.itemInfo, info);
  this->fields.ranking = ranking;
  if ( !info )
    goto LABEL_18;
  v15 = isJoinTerm;
  v16 = isGetReward;
  this->fields.isGoal = EventRankingRoundItemInfo__get_IsGoal(info, 0);
  IsMostSupport = EventRankingRoundItemInfo__get_IsMostSupport(info, 0);
  this->fields.isMostSupport = IsMostSupport;
  if ( IsMostSupport )
  {
    v18 = this->fields.ranking;
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    if ( v18 >= v19->static_fields->raceRewardRankMax )
      this->fields.isDispGetStamp = 1;
  }
  this->fields.isJoinTerm = v15;
  this->fields.isGetReward = v16;
  this->fields.groupImageId = info->fields.groupIconImageId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  if ( EventPointGroupAddMaster__IsClearCondChangeImage(
         (EventPointGroupAddMaster_o *)Instance,
         info->fields.eventId,
         nowTerm,
         info->fields.groupId,
         &imageId,
         0) )
  {
    this->fields.groupImageId = imageId;
  }
  eventId = info->fields.eventId;
  groupId = info->fields.groupId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  this->fields.isPlayedGoal = CondType__IsEventRaceGoalScriptPlayed(eventId, nowTerm, groupId, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
LABEL_18:
    sub_1C3E7C0(Instance, v14);
  }
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, info->fields.rewardItemId, 0);
  this->fields.giftEntityList = GiftListById;
  sub_1C3E508(&this->fields.giftEntityList, GiftListById);
}


bool EventRankingListViewItem__SetSortValue(
        EventRankingListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int64_t ranking; // x9
  bool result; // w0

  ranking = this->fields.ranking;
  *(_WORD *)&this->fields.isTermination = 0;
  result = 1;
  this->fields.sortValue1 = ranking;
  return result;
}


int32_t EventRankingListViewItem__get_EventId(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C3E7C0(this, method);
  return itemInfo->fields.eventId;
}


GiftEntity_array *EventRankingListViewItem__get_GiftList(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.giftEntityList;
}


int32_t EventRankingListViewItem__get_GroupId(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C3E7C0(this, method);
  return itemInfo->fields.groupId;
}


int32_t EventRankingListViewItem__get_GroupImageId(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.groupImageId;
}


System_String_o *EventRankingListViewItem__get_GroupName(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C3E7C0(this, method);
  return itemInfo->fields.teamName;
}


bool EventRankingListViewItem__get_IsDispRewardGet(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isDispGetStamp;
}


bool EventRankingListViewItem__get_IsGetReward(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isGetReward;
}


bool EventRankingListViewItem__get_IsGoal(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isGoal;
}


bool EventRankingListViewItem__get_IsGoalScriptPlayed(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPlayedGoal;
}


bool EventRankingListViewItem__get_IsJoinTerm(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isJoinTerm;
}


bool EventRankingListViewItem__get_IsMostSupport(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMostSupport;
}


int32_t EventRankingListViewItem__get_Ranking(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.ranking;
}


int32_t EventRankingListViewItem__get_RewardItemId(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C3E7C0(this, method);
  return itemInfo->fields.rewardItemId;
}


int64_t EventRankingListViewItem__get_SupportPoint(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C3E7C0(this, method);
  return itemInfo->fields.supportPoint;
}