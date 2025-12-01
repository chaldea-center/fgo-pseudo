void EventMissionItemListViewItem___ctor(
        EventMissionItemListViewItem_o *this,
        EventMissionEntity_o *missionData,
        bool isDaily,
        const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v8; // x1
  int32_t id; // w8
  __int64 v10; // x1
  __int64 v11; // x1
  bool isNowMission; // w0
  EventMissionItemListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v14; // x8

  if ( (byte_4CC17A9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC17A9 = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0);
  this->fields.eventMissionEnt = missionData;
  eventMissionEnt = (EventMissionEntity_o *)sub_1C71354(&this->fields.eventMissionEnt, missionData);
  if ( !missionData )
    goto LABEL_7;
  this->fields.currentEventId = missionData->fields.missionTargetId;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  this->fields.currentMissionId = id;
  this->fields.dispNo = missionData->fields.dispNo;
  v10 = StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354(&this->fields.condMsg, v10);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0;
  this->fields.progNum = 0;
  v11 = StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354(&this->fields.progTxt, v11);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  this->fields.rewardRarityId = missionData->fields.rewardRarity;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0),
        klass = this->klass,
        this->fields.isDailyMission = isDaily,
        this->fields.isNowMission = isNowMission,
        ((void (__fastcall *)(EventMissionItemListViewItem_o *, const MethodInfo *))klass->vtable._6_CheckMissionCond.methodPtr)(
          this,
          klass->vtable._6_CheckMissionCond.method),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0),
        (v14 = this->fields.eventMissionEnt) == 0) )
  {
LABEL_7:
    sub_1C71608(eventMissionEnt, v8);
  }
  this->fields.sortValue2 = -v14->fields.id;
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
  EventMissionConditionEntity_o *v7; // x10

  if ( (byte_4CC17AB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC17AB = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
        sub_1C71610(Instance);
      v7 = Instance->m_Items[v6];
      if ( !v7 )
        break;
      if ( v7->fields.missionProgressType != 4 && max_length != ++v6 )
        continue;
      return v6 < max_length;
    }
LABEL_15:
    sub_1C71608(Instance, v4);
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
      sub_1C71610(this);
    v5 = giftEnts->m_Items[v4];
    if ( !v5 )
      sub_1C71608(this, method);
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
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t num; // w8

  if ( (byte_4CC17AA & 1) == 0 )
  {
    sub_1C713B0(&MissionInfoMaker_TypeInfo);
    byte_4CC17AA = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( giftEnts )
  {
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, 0);
    MissionInfoMaker__SetGiftInfo(
      IconGiftEntity,
      &this->fields.itemEnt,
      &this->fields.svtEnt,
      &this->fields.cmdEnt,
      &this->fields.servantCostumeEnt,
      0);
    if ( !IconGiftEntity )
      sub_1C71608(v5, v6);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
    num = IconGiftEntity->fields.num;
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
  int32_t progStatus; // w9
  EventMissionItemListViewItem_o *v4; // x19
  int32_t v6; // w1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  bool result; // w0

  progStatus = this->fields.progStatus;
  v4 = this;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  switch ( progStatus )
  {
    case 0:
    case 1:
      if ( !sort )
        goto LABEL_16;
      v6 = 15;
      break;
    case 2:
      if ( !sort )
        goto LABEL_16;
      v6 = 14;
      break;
    case 3:
      if ( !sort )
        goto LABEL_16;
      v6 = 13;
      break;
    case 4:
      if ( !sort )
        goto LABEL_16;
      v6 = 16;
      break;
    case 5:
      if ( !sort )
        goto LABEL_16;
      v6 = 17;
      break;
    default:
      goto LABEL_13;
  }
  this = (EventMissionItemListViewItem_o *)ListViewSort__GetFilter(sort, v6, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
LABEL_13:
  eventMissionEnt = v4->fields.eventMissionEnt;
  if ( !eventMissionEnt )
LABEL_16:
    sub_1C71608(this, sort);
  result = 1;
  v4->fields.sortValue1 = eventMissionEnt->fields.dispNo;
  return result;
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
    sub_1C71608(0, method);
  v4 = this->fields.progStatus < 2u;
  return v4 & EventMissionEntity__IsHideReward(eventMissionEnt, 0);
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