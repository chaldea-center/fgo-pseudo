void __fastcall EventRankingListViewItem___ctor(
        EventRankingListViewItem_o *this,
        EventRankingRoundItemInfo_o *info,
        int32_t ranking,
        bool isJoinTerm,
        bool isGetReward,
        int32_t nowTerm,
        const MethodInfo *method)
{
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  bool v21; // zf
  BalanceConfig_c *v22; // x0
  int32_t eventId; // w23
  int32_t groupId; // w22
  struct GiftEntity_array *GiftListById; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4352612 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352612 = 1;
  }
  imageId = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.itemInfo = info;
  this->fields.isPlayedGoal = 0;
  this->fields.groupImageId = 0;
  this->fields.isJoinTerm = 0;
  *(_QWORD *)&this->fields.isGoal = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.itemInfo,
    (System_Int32_array **)info,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.ranking = ranking;
  if ( !info )
    goto LABEL_21;
  this->fields.isGoal = info->fields.goalPoint <= info->fields.nowPoint;
  v21 = info->fields.mostSupportGroupId == info->fields.groupId;
  this->fields.isMostSupport = v21;
  if ( v21 )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    if ( v22->static_fields->raceRewardRankMax <= ranking )
      this->fields.isDispGetStamp = 1;
  }
  this->fields.isJoinTerm = isJoinTerm;
  this->fields.isGetReward = isGetReward;
  this->fields.groupImageId = info->fields.groupIconImageId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
  if ( !Instance )
    goto LABEL_21;
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
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  this->fields.isPlayedGoal = CondType__IsEventRaceGoalScriptPlayed(eventId, nowTerm, groupId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
LABEL_21:
    sub_B7076C(Instance, v20);
  }
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, info->fields.rewardItemId, 0LL);
  this->fields.giftEntityList = GiftListById;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.giftEntityList,
    (System_Int32_array **)GiftListById,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
  return itemInfo->fields.rewardItemId;
}


int64_t __fastcall EventRankingListViewItem__get_SupportPoint(
        EventRankingListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRankingRoundItemInfo_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B7076C(this, method);
  return itemInfo->fields.supportPoint;
}