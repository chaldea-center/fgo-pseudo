void EventRandomMissionListViewItem___ctor(
        EventRandomMissionListViewItem_o *this,
        UserEventRandomMissionEntity_o *randomMissionEnt,
        EventMissionEntity_o *missionData,
        bool isDmy,
        const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v10; // x1
  int32_t id; // w8
  __int64 v12; // x1
  __int64 v13; // x1
  bool isNowMission; // w0
  EventRandomMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v16; // x8

  if ( (byte_4D26C50 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D26C50 = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0);
  this->fields.eventRandomMissionEnt = randomMissionEnt;
  sub_1C9403C(&this->fields.eventRandomMissionEnt, randomMissionEnt);
  this->fields.eventMissionEnt = missionData;
  eventMissionEnt = (EventMissionEntity_o *)sub_1C9403C(&this->fields.eventMissionEnt, missionData);
  if ( !missionData )
    goto LABEL_9;
  this->fields.currentEventId = missionData->fields.missionTargetId;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  this->fields.currentMissionId = id;
  this->fields.dispNo = missionData->fields.dispNo;
  v12 = StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C(&this->fields.condMsg, v12);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0;
  this->fields.progNum = 0;
  v13 = StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C(&this->fields.progTxt, v13);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  this->fields.rewardRarityId = missionData->fields.rewardRarity;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0),
        klass = this->klass,
        this->fields.isNowMission = isNowMission,
        ((void (__fastcall *)(EventRandomMissionListViewItem_o *, const MethodInfo *))klass->vtable._6_CheckMissionCond.methodPtr)(
          this,
          klass->vtable._6_CheckMissionCond.method),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0),
        (v16 = this->fields.eventMissionEnt) == 0) )
  {
LABEL_9:
    sub_1C942F0(eventMissionEnt, v10);
  }
  this->fields.sortValue2 = -v16->fields.id;
  MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)this, 0);
  if ( isDmy )
  {
    this->fields._IsDummy_k__BackingField = 1;
    this->fields.sortValue2 = 0xFFFFFFFF80000000LL;
    this->fields.sortValue1 = 0x7FFFFFFFFFFFFFFFLL;
  }
}


bool EventRandomMissionListViewItem__ExistClearConditionEntity(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  EventMissionConditionEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w8
  int v6; // w9
  EventMissionConditionEntity_o *v7; // x10

  if ( (byte_4D26C52 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26C52 = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
        sub_1C942F8(Instance);
      v7 = Instance->m_Items[v6];
      if ( !v7 )
        break;
      if ( v7->fields.missionProgressType != 4 && max_length != ++v6 )
        continue;
      return v6 < max_length;
    }
LABEL_15:
    sub_1C942F0(Instance, v4);
  }
  v6 = 0;
  return v6 < max_length;
}


UserEventRandomMissionEntity_o *EventRandomMissionListViewItem__GetUserEventRandomMissionEntity(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventRandomMissionEnt;
}


void EventRandomMissionListViewItem__SetGiftData(EventRandomMissionListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t num; // w8

  if ( (byte_4D26C51 & 1) == 0 )
  {
    sub_1C94098(&MissionInfoMaker_TypeInfo);
    byte_4D26C51 = 1;
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
      sub_1C942F0(v5, v6);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
    num = IconGiftEntity->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}


bool EventRandomMissionListViewItem__SetSortValue(
        EventRandomMissionListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UserEventRandomMissionEntity_o *eventRandomMissionEnt; // x0
  int64_t startedAt; // x8
  struct UserEventRandomMissionEntity_o *v6; // x8

  eventRandomMissionEnt = this->fields.eventRandomMissionEnt;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !eventRandomMissionEnt )
    goto LABEL_9;
  eventRandomMissionEnt = (UserEventRandomMissionEntity_o *)UserEventRandomMissionEntity__IsInProgress(
                                                              eventRandomMissionEnt,
                                                              0);
  if ( ((unsigned __int8)eventRandomMissionEnt & 1) != 0 )
  {
    if ( this->fields._IsDummy_k__BackingField )
    {
      startedAt = 0x7FFFFFFFFFFFFFFFLL;
LABEL_7:
      this->fields.sortValue1 = startedAt;
      return (unsigned __int8)eventRandomMissionEnt & 1;
    }
    v6 = this->fields.eventRandomMissionEnt;
    if ( v6 )
    {
      startedAt = v6->fields.startedAt;
      goto LABEL_7;
    }
LABEL_9:
    sub_1C942F0(eventRandomMissionEnt, sort);
  }
  return (unsigned __int8)eventRandomMissionEnt & 1;
}


void EventRandomMissionListViewItem__SetTimeOver(
        EventRandomMissionListViewItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields._IsTimeOver_k__BackingField = flag;
}


int32_t EventRandomMissionListViewItem__get_GetRewardNum(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardNum;
}


bool EventRandomMissionListViewItem__get_IsDummy(EventRandomMissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDummy_k__BackingField;
}


bool EventRandomMissionListViewItem__get_IsHideReward(EventRandomMissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1C942F0(0, method);
  v4 = this->fields.progStatus < 2u;
  return v4 & EventMissionEntity__IsHideReward(eventMissionEnt, 0);
}


bool EventRandomMissionListViewItem__get_IsShowRewardInfo(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return MissionListViewItem__get_IsShowRewardInfo((MissionListViewItem_o *)this, 0) || this->fields.progStatus == 5;
}


bool EventRandomMissionListViewItem__get_IsTimeOver(EventRandomMissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsTimeOver_k__BackingField;
}


int32_t EventRandomMissionListViewItem__get_RewardRarityId(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardRarityId;
}


void EventRandomMissionListViewItem__set_IsDummy(
        EventRandomMissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDummy_k__BackingField = value;
}


void EventRandomMissionListViewItem__set_IsTimeOver(
        EventRandomMissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTimeOver_k__BackingField = value;
}