void __fastcall EventMissionItemListViewItem___ctor(
        EventMissionItemListViewItem_o *this,
        EventMissionEntity_o *missionData,
        bool isDaily,
        const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v8; // x1
  int32_t id; // w8
  bool isNowMission; // w0
  EventMissionItemListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v12; // x8

  if ( (byte_4B3F00A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, missionData);
    byte_4B3F00A = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventMissionEnt = missionData;
  eventMissionEnt = (EventMissionEntity_o *)sub_1BDB81C(&this->fields.eventMissionEnt);
  if ( !missionData )
    goto LABEL_7;
  this->fields.currentEventId = missionData->fields.missionTargetId;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  this->fields.currentMissionId = id;
  this->fields.dispNo = missionData->fields.dispNo;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(&this->fields.condMsg);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(&this->fields.progTxt);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  this->fields.rewardRarityId = missionData->fields.rewardRarity;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        klass = this->klass,
        this->fields.isDailyMission = isDaily,
        this->fields.isNowMission = isNowMission,
        ((void (__fastcall *)(EventMissionItemListViewItem_o *, Il2CppMethodPointer))klass->vtable._6_CheckMissionCond.method)(
          this,
          klass->vtable._7_SetGiftData.methodPtr),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0LL),
        (v12 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_7:
    sub_1BDBAD4(eventMissionEnt, v8);
  }
  this->fields.sortValue2 = -v12->fields.id;
  MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)this, 0LL);
}


bool __fastcall EventMissionItemListViewItem__ExistClearConditionEntity(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventMissionConditionEntity_array *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  int max_length; // w8
  int v9; // w9
  EventMissionConditionEntity_o *v10; // x10

  if ( (byte_4B3F00C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B3F00C = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
    v9 = 0;
    while ( 1 )
    {
      if ( max_length == v9 )
        sub_1BDBADC(Instance, v5, v6, v7);
      v10 = Instance->m_Items[v9];
      if ( !v10 )
        break;
      if ( v10->fields.missionProgressType != 4 && max_length != ++v9 )
        continue;
      return v9 < max_length;
    }
LABEL_15:
    sub_1BDBAD4(Instance, v5);
  }
  v9 = 0;
  return v9 < max_length;
}


GiftEntity_o *__fastcall EventMissionItemListViewItem__GetIsRewardQp(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  struct GiftEntity_array *giftEnts; // x20
  int max_length; // w8
  __int64 v6; // x21
  GiftEntity_o *v7; // x19

  giftEnts = this->fields.giftEnts;
  if ( !giftEnts )
    return 0LL;
  max_length = giftEnts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1BDBADC(this, method, v2, v3);
    v7 = giftEnts->m_Items[v6];
    if ( !v7 )
      sub_1BDBAD4(this, method);
    this = (EventMissionItemListViewItem_o *)GiftEntity__isQp(giftEnts->m_Items[v6], 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    max_length = giftEnts->max_length;
    if ( (int)++v6 >= max_length )
      return 0LL;
  }
  return v7;
}


void __fastcall EventMissionItemListViewItem__SetGiftData(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t num; // w8

  if ( (byte_4B3F00B & 1) == 0 )
  {
    sub_1BDB878(&MissionInfoMaker_TypeInfo, method);
    byte_4B3F00B = 1;
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
      sub_1BDBAD4(v5, v6);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
    num = IconGiftEntity->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}


bool __fastcall EventMissionItemListViewItem__SetSortValue(
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
  this->fields.sortValue1 = -1LL;
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
  this = (EventMissionItemListViewItem_o *)ListViewSort__GetFilter(sort, v6, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
LABEL_13:
  eventMissionEnt = v4->fields.eventMissionEnt;
  if ( !eventMissionEnt )
LABEL_16:
    sub_1BDBAD4(this, sort);
  result = 1;
  v4->fields.sortValue1 = eventMissionEnt->fields.dispNo;
  return result;
}


int32_t __fastcall EventMissionItemListViewItem__get_GetRewardNum(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardNum;
}


bool __fastcall EventMissionItemListViewItem__get_IsDailyMission(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isDailyMission;
}


bool __fastcall EventMissionItemListViewItem__get_IsHideReward(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1BDBAD4(0LL, method);
  v4 = this->fields.progStatus < 2u;
  return v4 & EventMissionEntity__IsHideReward(eventMissionEnt, 0LL);
}


bool __fastcall EventMissionItemListViewItem__get_IsHideRewardDetail(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHideRewardDetail;
}


bool __fastcall EventMissionItemListViewItem__get_IsShowRewardInfo(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return MissionListViewItem__get_IsShowRewardInfo((MissionListViewItem_o *)this, 0LL) || this->fields.progStatus == 5;
}


int32_t __fastcall EventMissionItemListViewItem__get_RewardRarityId(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardRarityId;
}


void __fastcall EventMissionItemListViewItem__set_IsHideRewardDetail(
        EventMissionItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isHideRewardDetail = value;
}