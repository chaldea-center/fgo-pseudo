void EventRandomMissionListViewItem___ctor(
        EventRandomMissionListViewItem_o *this,
        UserEventRandomMissionEntity_o *randomMissionEnt,
        EventMissionEntity_o *missionData,
        bool isDmy,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t missionTargetId; // w8
  int32_t dispNo; // w10
  int32_t id; // w9
  struct System_String_o *v32; // x1
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t rewardRarity; // w9
  bool isNowMission; // w0
  EventRandomMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v43; // x8

  if ( (byte_596A957 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A957 = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0);
  this->fields.eventRandomMissionEnt = randomMissionEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventRandomMissionEnt,
    (int32_t)randomMissionEnt,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.eventMissionEnt = missionData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventMissionEnt,
    (int32_t)missionData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !missionData )
    goto LABEL_9;
  missionTargetId = missionData->fields.missionTargetId;
  dispNo = missionData->fields.dispNo;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  v32 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.currentEventId = missionTargetId;
  this->fields.currentMissionId = id;
  this->fields.dispNo = dispNo;
  this->fields.condMsg = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.condMsg, (int32_t)v32, v23, v24, v25, v26, v27, v28);
  v33 = (int)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0;
  this->fields.progNum = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.progTxt, v33, v34, v35, v36, v37, v38, v39);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  rewardRarity = missionData->fields.rewardRarity;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  this->fields.rewardRarityId = rewardRarity;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0),
        klass = this->klass,
        this->fields.isNowMission = isNowMission,
        ((void (__fastcall *)(EventRandomMissionListViewItem_o *, const MethodInfo *))klass->vtable._6_CheckMissionCond.methodPtr)(
          this,
          klass->vtable._6_CheckMissionCond.method),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0),
        (v43 = this->fields.eventMissionEnt) == 0) )
  {
LABEL_9:
    sub_2213CDC(eventMissionEnt, v22);
  }
  this->fields.sortValue2 = -v43->fields.id;
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
  EventMissionConditionEntity_o *v7; // x11

  if ( (byte_596A959 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A959 = 1;
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


UserEventRandomMissionEntity_o *EventRandomMissionListViewItem__GetUserEventRandomMissionEntity(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventRandomMissionEnt;
}


void EventRandomMissionListViewItem__SetGiftData(EventRandomMissionListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t num; // w8

  if ( (byte_596A958 & 1) == 0 )
  {
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    byte_596A958 = 1;
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
    sub_2213CDC(eventRandomMissionEnt, sort);
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
    sub_2213CDC(0, method);
  v4 = this->fields.progStatus < 2u;
  return EventMissionEntity__IsHideReward(eventMissionEnt, 0) && v4;
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