void EventRankingListViewItem___ctor(
        EventRankingListViewItem_o *this,
        EventRankingRoundItemInfo_o *info,
        int32_t ranking,
        bool isJoinTerm,
        bool isGetReward,
        int32_t nowTerm,
        const MethodInfo *method)
{
  bool v11; // w25
  bool v12; // w24
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t eventId; // w23
  int32_t groupId; // w22
  struct GiftEntity_array *GiftListById; // x0
  int32_t imageId; // [xsp+Ch] [xbp-44h] BYREF

  v11 = isJoinTerm;
  v12 = isGetReward;
  if ( (byte_4E719ED & 1) == 0 )
  {
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E719ED = 1;
  }
  imageId = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.itemInfo = info;
  this->fields.isGetReward = 0;
  this->fields.isJoinTerm = 0;
  this->fields.isPlayedGoal = 0;
  this->fields.ranking = 0;
  this->fields.groupImageId = 0;
  Instance = (Il2CppObject *)sub_1D0F058(&this->fields.itemInfo, info);
  this->fields.ranking = ranking;
  this->fields.isJoinTerm = v11;
  this->fields.isGetReward = v12;
  if ( !info )
    goto LABEL_13;
  this->fields.groupImageId = info->fields.groupIconImageId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
  if ( !Instance )
    goto LABEL_13;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
LABEL_13:
    sub_1D0F30C(Instance, v14);
  }
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, info->fields.rewardItemId, 0);
  this->fields.giftEntityList = GiftListById;
  sub_1D0F058(&this->fields.giftEntityList, GiftListById);
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
    sub_1D0F30C(this, method);
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
    sub_1D0F30C(this, method);
  return itemInfo->fields.groupId;
}


int32_t EventRankingListViewItem__get_GroupImageId(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.groupImageId;
}


bool EventRankingListViewItem__get_IsGetReward(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isGetReward;
}


bool EventRankingListViewItem__get_IsGoalScriptPlayed(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPlayedGoal;
}


bool EventRankingListViewItem__get_IsJoinTerm(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isJoinTerm;
}


int32_t EventRankingListViewItem__get_Ranking(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.ranking;
}


int64_t EventRankingListViewItem__get_SupportPoint(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1D0F30C(this, method);
  return itemInfo->fields.supportPoint;
}