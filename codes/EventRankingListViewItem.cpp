void EventRankingListViewItem___ctor(
        EventRankingListViewItem_o *this,
        EventRankingRoundItemInfo_o *info,
        int32_t ranking,
        bool isJoinTerm,
        bool isGetReward,
        int32_t nowTerm,
        const MethodInfo *method)
{
  bool v11; // w24
  bool v12; // w25
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  const MethodInfo_47A29F8 *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t eventId; // w23
  int32_t groupId; // w22
  bool IsEventRaceGoalScriptPlayed; // w0
  const MethodInfo_47A29F8 *v27; // x8
  struct GiftEntity_array *GiftListById; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t imageId; // [xsp+Ch] [xbp-44h] BYREF

  v11 = isJoinTerm;
  v12 = isGetReward;
  if ( (byte_596A97A & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A97A = 1;
  }
  imageId = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.itemInfo = info;
  this->fields.isGetReward = 0;
  this->fields.isJoinTerm = 0;
  this->fields.isPlayedGoal = 0;
  this->fields.ranking = 0;
  this->fields.groupImageId = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemInfo, (int32_t)info, v13, v14, v15, v16, v17, v18);
  this->fields.ranking = ranking;
  this->fields.isJoinTerm = v11;
  this->fields.isGetReward = v12;
  if ( !info )
    goto LABEL_13;
  v21 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.groupImageId = info->fields.groupIconImageId;
  Instance = SingletonMonoBehaviour_object___get_Instance(v21);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
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
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v22, v23);
  IsEventRaceGoalScriptPlayed = CondType__IsEventRaceGoalScriptPlayed(eventId, nowTerm, groupId, 0);
  v27 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isPlayedGoal = IsEventRaceGoalScriptPlayed;
  Instance = SingletonMonoBehaviour_object___get_Instance(v27);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
LABEL_13:
    sub_2213CDC(Instance, v20);
  }
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, info->fields.rewardItemId, 0);
  this->fields.giftEntityList = GiftListById;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.giftEntityList,
    (int32_t)GiftListById,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


bool EventRankingListViewItem__SetSortValue(
        EventRankingListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  bool result; // w0
  int64_t ranking; // x9

  result = 1;
  ranking = this->fields.ranking;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = ranking;
  return result;
}


int32_t EventRankingListViewItem__get_EventId(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  return itemInfo->fields.supportPoint;
}