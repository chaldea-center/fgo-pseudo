void __fastcall EventRankingListViewItem___ctor(
        EventRankingListViewItem_o *this,
        EventRankingRoundItemInfo_o *info,
        int32_t ranking,
        bool isJoinTerm,
        bool isGetReward,
        int32_t nowTerm,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  bool v25; // w23
  bool v26; // zf
  BalanceConfig_c *v27; // x0
  int32_t eventId; // w23
  int32_t groupId; // w22
  struct GiftEntity_array *GiftListById; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int32_t imageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C2622D & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, info);
    sub_1C3B764(&CondType_TypeInfo, v13);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMasterData_GiftMaster___, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4C2622D = 1;
  }
  imageId = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.itemInfo = info;
  this->fields.isPlayedGoal = 0;
  this->fields.groupImageId = 0;
  *(_QWORD *)&this->fields.isGoal = 0LL;
  this->fields.isJoinTerm = 0;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.itemInfo, (int64_t)info, v17, v18, v19, v20, v21, v22);
  this->fields.ranking = ranking;
  if ( !info )
    goto LABEL_19;
  v25 = isGetReward;
  this->fields.isGoal = info->fields.goalPoint <= info->fields.nowPoint;
  v26 = info->fields.mostSupportGroupId == info->fields.groupId;
  this->fields.isMostSupport = v26;
  if ( v26 )
  {
    v27 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    if ( v27->static_fields->raceRewardRankMax <= ranking )
      this->fields.isDispGetStamp = 1;
  }
  this->fields.isJoinTerm = isJoinTerm;
  this->fields.isGetReward = v25;
  this->fields.groupImageId = info->fields.groupIconImageId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( EventPointGroupAddMaster__IsClearCondChangeImage(
         (EventPointGroupAddMaster_o *)Instance,
         info->fields.eventId,
         nowTerm,
         info->fields.groupId,
         &imageId,
         0LL) )
  {
    this->fields.groupImageId = imageId;
  }
  eventId = info->fields.eventId;
  groupId = info->fields.groupId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  this->fields.isPlayedGoal = CondType__IsEventRaceGoalScriptPlayed(eventId, nowTerm, groupId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
LABEL_19:
    sub_1C3B9C0(Instance, v24);
  }
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, info->fields.rewardItemId, 0LL);
  this->fields.giftEntityList = GiftListById;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.giftEntityList,
    (int64_t)GiftListById,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


bool __fastcall EventRankingListViewItem__SetSortValue(
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


int32_t __fastcall EventRankingListViewItem__get_EventId(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C3B9C0(this, method);
  return itemInfo->fields.eventId;
}


GiftEntity_array *__fastcall EventRankingListViewItem__get_GiftList(
        EventRankingListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.giftEntityList;
}


int32_t __fastcall EventRankingListViewItem__get_GroupId(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C3B9C0(this, method);
  return itemInfo->fields.groupId;
}


int32_t __fastcall EventRankingListViewItem__get_GroupImageId(
        EventRankingListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.groupImageId;
}


System_String_o *__fastcall EventRankingListViewItem__get_GroupName(
        EventRankingListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C3B9C0(this, method);
  return itemInfo->fields.teamName;
}


bool __fastcall EventRankingListViewItem__get_IsDispRewardGet(
        EventRankingListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isDispGetStamp;
}


bool __fastcall EventRankingListViewItem__get_IsGetReward(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isGetReward;
}


bool __fastcall EventRankingListViewItem__get_IsGoal(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isGoal;
}


bool __fastcall EventRankingListViewItem__get_IsGoalScriptPlayed(
        EventRankingListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPlayedGoal;
}


bool __fastcall EventRankingListViewItem__get_IsJoinTerm(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isJoinTerm;
}


bool __fastcall EventRankingListViewItem__get_IsMostSupport(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMostSupport;
}


int32_t __fastcall EventRankingListViewItem__get_Ranking(EventRankingListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.ranking;
}


int32_t __fastcall EventRankingListViewItem__get_RewardItemId(
        EventRankingListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C3B9C0(this, method);
  return itemInfo->fields.rewardItemId;
}


int64_t __fastcall EventRankingListViewItem__get_SupportPoint(
        EventRankingListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C3B9C0(this, method);
  return itemInfo->fields.supportPoint;
}