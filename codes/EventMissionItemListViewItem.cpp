void EventMissionItemListViewItem___ctor(
        EventMissionItemListViewItem_o *this,
        EventMissionEntity_o *missionData,
        bool isDaily,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t missionTargetId; // w8
  int32_t dispNo; // w10
  int32_t id; // w9
  struct System_String_o *v24; // x1
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t rewardRarity; // w9
  bool isNowMission; // w0
  EventMissionItemListViewItem_c *klass; // x8
  const MethodInfo *v35; // x1
  void (__fastcall *methodPtr)(EventMissionItemListViewItem_o *, const MethodInfo *); // x9
  struct EventMissionEntity_o *v37; // x8

  if ( (byte_596A6FB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A6FB = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0);
  this->fields.eventMissionEnt = missionData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventMissionEnt,
    (int32_t)missionData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !missionData )
    goto LABEL_7;
  missionTargetId = missionData->fields.missionTargetId;
  dispNo = missionData->fields.dispNo;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  v24 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.currentEventId = missionTargetId;
  this->fields.currentMissionId = id;
  this->fields.dispNo = dispNo;
  this->fields.condMsg = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.condMsg, (int32_t)v24, v15, v16, v17, v18, v19, v20);
  v25 = (int)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0;
  this->fields.progNum = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.progTxt, v25, v26, v27, v28, v29, v30, v31);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  rewardRarity = missionData->fields.rewardRarity;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  this->fields.rewardRarityId = rewardRarity;
  if ( !eventMissionEnt )
    goto LABEL_7;
  isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0);
  klass = this->klass;
  this->fields.isNowMission = isNowMission;
  methodPtr = (void (__fastcall *)(EventMissionItemListViewItem_o *, const MethodInfo *))klass->vtable._6_CheckMissionCond.methodPtr;
  v35 = klass->vtable._6_CheckMissionCond.method;
  this->fields.isDailyMission = isDaily;
  methodPtr(this, v35);
  MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0);
  v37 = this->fields.eventMissionEnt;
  if ( !v37 )
LABEL_7:
    sub_2213CDC(eventMissionEnt, v14);
  this->fields.sortValue2 = -v37->fields.id;
  MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)this, 0);
}


bool EventMissionItemListViewItem__ExistClearConditionEntity(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  EventMissionConditionEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w8
  int v6; // w9
  EventMissionConditionEntity_o *v7; // x11

  if ( (byte_596A6FD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A6FD = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = EventMissionConditionMaster__getMissionCondList(
               (EventMissionConditionMaster_o *)Instance,
               this->fields.currentEventId,
               this->fields.currentMissionId,
               0);
  if ( !Instance )
    goto LABEL_15;
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_2213CE4(Instance);
      v7 = Instance->m_Items[v6];
      if ( !v7 )
        break;
      if ( v7->fields.missionProgressType != 4 && (max_length & ~(max_length >> 31)) != ++v6 )
        continue;
      return v6 < max_length;
    }
LABEL_15:
    sub_2213CDC(Instance, v4);
  }
  v6 = 0;
  return v6 < max_length;
}


GiftEntity_o *EventMissionItemListViewItem__GetIsRewardQp(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEnts; // x20
  int max_length; // w8
  __int64 v4; // x21
  GiftEntity_o *v5; // x19

  giftEnts = this->fields.giftEnts;
  if ( !giftEnts )
    return 0;
  max_length = giftEnts->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
    v5 = giftEnts->m_Items[v4];
    if ( !v5 )
      sub_2213CDC(this, method);
    this = (EventMissionItemListViewItem_o *)GiftEntity__isQp(giftEnts->m_Items[v4], 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    max_length = giftEnts->max_length;
    if ( (int)++v4 >= max_length )
      return 0;
  }
  return v5;
}


void EventMissionItemListViewItem__SetGiftData(EventMissionItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t num; // w8

  if ( (byte_596A6FC & 1) == 0 )
  {
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    byte_596A6FC = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( giftEnts )
  {
    if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method, v2);
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, 0);
    MissionInfoMaker__SetGiftInfo(
      IconGiftEntity,
      &this->fields.itemEnt,
      &this->fields.svtEnt,
      &this->fields.cmdEnt,
      &this->fields.servantCostumeEnt,
      0);
    if ( !IconGiftEntity )
      sub_2213CDC(v6, v7);
    num = IconGiftEntity->fields.num;
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}


bool EventMissionItemListViewItem__SetSortValue(
        EventMissionItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t progStatus; // w8
  EventMissionItemListViewItem_o *v4; // x19
  ListViewSort_o *v5; // x0
  int32_t v6; // w1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  bool result; // w0

  progStatus = this->fields.progStatus;
  v4 = this;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  if ( progStatus > 2 )
  {
    switch ( progStatus )
    {
      case 5:
        if ( !sort )
          goto LABEL_21;
        v5 = sort;
        v6 = 17;
        break;
      case 4:
        if ( !sort )
          goto LABEL_21;
        v5 = sort;
        v6 = 16;
        break;
      case 3:
        if ( !sort )
          goto LABEL_21;
        v5 = sort;
        v6 = 13;
        break;
      default:
        goto LABEL_18;
    }
  }
  else if ( (unsigned int)progStatus >= 2 )
  {
    if ( progStatus != 2 )
      goto LABEL_18;
    if ( !sort )
      goto LABEL_21;
    v5 = sort;
    v6 = 14;
  }
  else
  {
    if ( !sort )
      goto LABEL_21;
    v5 = sort;
    v6 = 15;
  }
  this = (EventMissionItemListViewItem_o *)ListViewSort__GetFilter(v5, v6, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_18:
    eventMissionEnt = v4->fields.eventMissionEnt;
    if ( eventMissionEnt )
    {
      result = 1;
      v4->fields.sortValue1 = eventMissionEnt->fields.dispNo;
      return result;
    }
LABEL_21:
    sub_2213CDC(this, sort);
  }
  return 0;
}


int32_t EventMissionItemListViewItem__get_GetRewardNum(EventMissionItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardNum;
}


bool EventMissionItemListViewItem__get_IsDailyMission(EventMissionItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isDailyMission;
}


bool EventMissionItemListViewItem__get_IsHideReward(EventMissionItemListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_2213CDC(0, method);
  v4 = this->fields.progStatus < 2u;
  return EventMissionEntity__IsHideReward(eventMissionEnt, 0) && v4;
}


bool EventMissionItemListViewItem__get_IsHideRewardDetail(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHideRewardDetail;
}


bool EventMissionItemListViewItem__get_IsShowRewardInfo(EventMissionItemListViewItem_o *this, const MethodInfo *method)
{
  return MissionListViewItem__get_IsShowRewardInfo((MissionListViewItem_o *)this, 0) || this->fields.progStatus == 5;
}


int32_t EventMissionItemListViewItem__get_RewardRarityId(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardRarityId;
}


void EventMissionItemListViewItem__set_IsHideRewardDetail(
        EventMissionItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isHideRewardDetail = value;
}