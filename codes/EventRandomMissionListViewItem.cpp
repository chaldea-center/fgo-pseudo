void __fastcall EventRandomMissionListViewItem___ctor(
        EventRandomMissionListViewItem_o *this,
        UserEventRandomMissionEntity_o *randomMissionEnt,
        EventMissionEntity_o *missionData,
        bool isDmy,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t id; // w8
  int32_t v18; // w1
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  bool isNowMission; // w0
  EventRandomMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v24; // x8

  if ( (byte_4AB9D30 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, randomMissionEnt);
    byte_4AB9D30 = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventRandomMissionEnt = randomMissionEnt;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventRandomMissionEnt,
    (int32_t)randomMissionEnt,
    v9,
    v10);
  this->fields.eventMissionEnt = missionData;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.eventMissionEnt, (int32_t)missionData, v11, v12);
  if ( !missionData )
    goto LABEL_9;
  this->fields.currentEventId = missionData->fields.missionTargetId;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  this->fields.currentMissionId = id;
  this->fields.dispNo = missionData->fields.dispNo;
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.condMsg, v18, v15, v16);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.progTxt, v19, v20, v21);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  this->fields.rewardRarityId = missionData->fields.rewardRarity;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        klass = this->klass,
        this->fields.isNowMission = isNowMission,
        ((void (__fastcall *)(EventRandomMissionListViewItem_o *, Il2CppMethodPointer))klass->vtable._6_CheckMissionCond.method)(
          this,
          klass->vtable._7_SetGiftData.methodPtr),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0LL),
        (v24 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_9:
    sub_1BAB678(eventMissionEnt, v14);
  }
  this->fields.sortValue2 = -v24->fields.id;
  MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)this, 0LL);
  if ( isDmy )
  {
    this->fields._IsDummy_k__BackingField = 1;
    this->fields.sortValue2 = 0xFFFFFFFF80000000LL;
    this->fields.sortValue1 = 0x7FFFFFFFFFFFFFFFLL;
  }
}


bool __fastcall EventRandomMissionListViewItem__ExistClearConditionEntity(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventMissionConditionEntity_array *Instance; // x0
  __int64 v5; // x1
  int max_length; // w8
  int v7; // w9
  EventMissionConditionEntity_o *v8; // x10

  if ( (byte_4AB9D32 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4AB9D32 = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = EventMissionConditionMaster__getMissionCondList(
               (EventMissionConditionMaster_o *)Instance,
               this->fields.currentEventId,
               this->fields.currentMissionId,
               0LL);
  if ( !Instance )
    goto LABEL_15;
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( max_length == v7 )
        sub_1BAB680(Instance, v5);
      v8 = Instance->m_Items[v7];
      if ( !v8 )
        break;
      if ( v8->fields.missionProgressType != 4 && max_length != ++v7 )
        continue;
      return v7 < max_length;
    }
LABEL_15:
    sub_1BAB678(Instance, v5);
  }
  v7 = 0;
  return v7 < max_length;
}


UserEventRandomMissionEntity_o *__fastcall EventRandomMissionListViewItem__GetUserEventRandomMissionEntity(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventRandomMissionEnt;
}


void __fastcall EventRandomMissionListViewItem__SetGiftData(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t num; // w8

  if ( (byte_4AB9D31 & 1) == 0 )
  {
    sub_1BAB41C(&MissionInfoMaker_TypeInfo, method);
    byte_4AB9D31 = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( giftEnts )
  {
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, 0LL);
    MissionInfoMaker__SetGiftInfo(
      IconGiftEntity,
      &this->fields.itemEnt,
      &this->fields.svtEnt,
      &this->fields.cmdEnt,
      &this->fields.servantCostumeEnt,
      0LL);
    if ( !IconGiftEntity )
      sub_1BAB678(v5, v6);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
    num = IconGiftEntity->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}


bool __fastcall EventRandomMissionListViewItem__SetSortValue(
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
                                                              0LL);
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
    sub_1BAB678(eventRandomMissionEnt, sort);
  }
  return (unsigned __int8)eventRandomMissionEnt & 1;
}


void __fastcall EventRandomMissionListViewItem__SetTimeOver(
        EventRandomMissionListViewItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields._IsTimeOver_k__BackingField = flag;
}


int32_t __fastcall EventRandomMissionListViewItem__get_GetRewardNum(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardNum;
}


bool __fastcall EventRandomMissionListViewItem__get_IsDummy(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDummy_k__BackingField;
}


bool __fastcall EventRandomMissionListViewItem__get_IsHideReward(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1BAB678(0LL, method);
  v4 = this->fields.progStatus < 2u;
  return v4 & EventMissionEntity__IsHideReward(eventMissionEnt, 0LL);
}


bool __fastcall EventRandomMissionListViewItem__get_IsShowRewardInfo(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return MissionListViewItem__get_IsShowRewardInfo((MissionListViewItem_o *)this, 0LL) || this->fields.progStatus == 5;
}


bool __fastcall EventRandomMissionListViewItem__get_IsTimeOver(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsTimeOver_k__BackingField;
}


int32_t __fastcall EventRandomMissionListViewItem__get_RewardRarityId(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardRarityId;
}


void __fastcall EventRandomMissionListViewItem__set_IsDummy(
        EventRandomMissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDummy_k__BackingField = value;
}


void __fastcall EventRandomMissionListViewItem__set_IsTimeOver(
        EventRandomMissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTimeOver_k__BackingField = value;
}