void __fastcall CompleteMissionListViewItem___ctor(
        CompleteMissionListViewItem_o *this,
        EventMissionEntity_o *missionData,
        int32_t type,
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
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool isNowMission; // w0
  CompleteMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v23; // x8

  if ( (byte_4B00B9E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, missionData);
    byte_4B00B9E = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventMissionEnt = missionData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventMissionEnt, (int32_t)missionData, v7, v8);
  if ( !missionData )
    goto LABEL_7;
  this->fields.currentEventId = missionData->fields.missionTargetId;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  this->fields.currentMissionId = id;
  this->fields.dispNo = missionData->fields.dispNo;
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.condMsg, v14, v11, v12);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closedMessage, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.progTxt, v18, v19, v20);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        klass = this->klass,
        this->fields.missionType = type,
        this->fields.isNowMission = isNowMission,
        ((void (__fastcall *)(CompleteMissionListViewItem_o *, Il2CppMethodPointer))klass->vtable._6_CheckMissionCond.method)(
          this,
          klass->vtable._7_SetGiftData.methodPtr),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0LL),
        (v23 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_7:
    sub_1BC3264(eventMissionEnt, v10);
  }
  this->fields.sortValue2 = -v23->fields.id;
}


void __fastcall CompleteMissionListViewItem__CheckMissionCond(
        CompleteMissionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  EventMissionEntity_o *eventMissionEnt; // x0
  _BOOL4 isNowMission; // w23
  int32_t currentEventId; // w20
  int32_t currentMissionId; // w21
  bool IsIgnoreStartCondition; // w22
  NotEndEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B00B9F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___, method);
    sub_1BC3008(&MissionInfoMaker_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B00B9F = 1;
  }
  entity = 0LL;
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (this->fields.isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        (eventMissionEnt = (EventMissionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (eventMissionEnt = (EventMissionEntity_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)eventMissionEnt,
                                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___)) == 0LL
    || (!NotEndEventMissionFixMaster__TryGetEntity(
           (NotEndEventMissionFixMaster_o *)eventMissionEnt,
           &entity,
           this->fields.currentEventId,
           this->fields.currentMissionId,
           0LL)
      ? (isNowMission = this->fields.isNowMission)
      : (isNowMission = 1, this->fields.isNowMission = 1),
        (eventMissionEnt = this->fields.eventMissionEnt) == 0LL) )
  {
    sub_1BC3264(eventMissionEnt, method);
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(eventMissionEnt, 0LL);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  this->fields.progType = MissionInfoMaker__GetMissionProgressType_46079788(
                            currentEventId,
                            currentMissionId,
                            isNowMission,
                            IsIgnoreStartCondition,
                            0LL);
  MissionListViewItem__SetMissionCondInfo((MissionListViewItem_o *)this, 0LL);
  MissionListViewItem__SetMissionCondMsg((MissionListViewItem_o *)this, 0LL);
}


bool __fastcall CompleteMissionListViewItem__SetSortValue(
        CompleteMissionListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 progStatus; // x8
  struct EventMissionEntity_o *eventMissionEnt; // x8

  v5 = MissionListViewItem__SetSortValue((MissionListViewItem_o *)this, sort, 0LL);
  if ( v5 )
  {
    progStatus = this->fields.progStatus;
    if ( (unsigned int)progStatus <= 4 )
      this->fields.sortValue0 = qword_C17FF8[progStatus];
    if ( sort )
    {
      if ( sort->fields.sortKind != 1 )
        return 1;
      eventMissionEnt = this->fields.eventMissionEnt;
      if ( eventMissionEnt )
      {
        this->fields.sortValue1 = eventMissionEnt->fields.startedAt;
        this->fields.sortValue2 = -eventMissionEnt->fields.priority;
        return 1;
      }
    }
    sub_1BC3264(v5, v6);
  }
  return 0;
}


bool __fastcall CompleteMissionListViewItem__get_IsHideReward(
        CompleteMissionListViewItem_o *this,
        const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1BC3264(0LL, method);
  v4 = this->fields.progStatus < 2u;
  return v4 & EventMissionEntity__IsHideReward(eventMissionEnt, 0LL);
}


bool __fastcall CompleteMissionListViewItem__get_IsHideRewardDetail(
        CompleteMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHideRewardDetail;
}


int32_t __fastcall CompleteMissionListViewItem__get_MissionType(
        CompleteMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.missionType;
}


void __fastcall CompleteMissionListViewItem__set_IsHideRewardDetail(
        CompleteMissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isHideRewardDetail = value;
}