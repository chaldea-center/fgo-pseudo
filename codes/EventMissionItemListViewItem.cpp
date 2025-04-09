void __fastcall EventMissionItemListViewItem___ctor(
        EventMissionItemListViewItem_o *this,
        EventMissionEntity_o *missionData,
        bool isDaily,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t id; // w8
  int32_t v14; // w1
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool isNowMission; // w0
  EventMissionItemListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v20; // x8

  if ( (byte_49BEFFA & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, missionData);
    byte_49BEFFA = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventMissionEnt = missionData;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.eventMissionEnt, (int32_t)missionData, v7, v8);
  if ( !missionData )
    goto LABEL_7;
  this->fields.currentEventId = missionData->fields.missionTargetId;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  this->fields.currentMissionId = id;
  this->fields.dispNo = missionData->fields.dispNo;
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.condMsg, v14, v11, v12);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.progTxt, v15, v16, v17);
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
        (v20 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_7:
    sub_1B4D1EC(eventMissionEnt, v10);
  }
  this->fields.sortValue2 = -v20->fields.id;
  MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)this, 0LL);
}


bool __fastcall EventMissionItemListViewItem__ExistClearConditionEntity(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventMissionConditionEntity_array *Instance; // x0
  __int64 v5; // x1
  int max_length; // w8
  int v7; // w9
  EventMissionConditionEntity_o *v8; // x10

  if ( (byte_49BEFFC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49BEFFC = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
        sub_1B4D1F4(Instance, v5);
      v8 = Instance->m_Items[v7];
      if ( !v8 )
        break;
      if ( v8->fields.missionProgressType != 4 && max_length != ++v7 )
        continue;
      return v7 < max_length;
    }
LABEL_15:
    sub_1B4D1EC(Instance, v5);
  }
  v7 = 0;
  return v7 < max_length;
}


GiftEntity_o *__fastcall EventMissionItemListViewItem__GetIsRewardQp(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEnts; // x20
  int max_length; // w8
  __int64 v4; // x21
  GiftEntity_o *v5; // x19

  giftEnts = this->fields.giftEnts;
  if ( !giftEnts )
    return 0LL;
  max_length = giftEnts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v4 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v4 >= max_length )
      sub_1B4D1F4(this, method);
    v5 = giftEnts->m_Items[v4];
    if ( !v5 )
      sub_1B4D1EC(this, method);
    this = (EventMissionItemListViewItem_o *)GiftEntity__isQp(giftEnts->m_Items[v4], 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    max_length = giftEnts->max_length;
    if ( (int)++v4 >= max_length )
      return 0LL;
  }
  return v5;
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

  if ( (byte_49BEFFB & 1) == 0 )
  {
    sub_1B4CF90(&MissionInfoMaker_TypeInfo, method);
    byte_49BEFFB = 1;
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
      sub_1B4D1EC(v5, v6);
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
    sub_1B4D1EC(this, sort);
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
    sub_1B4D1EC(0LL, method);
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