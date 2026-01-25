void CompleteMissionListViewItem___ctor(
        CompleteMissionListViewItem_o *this,
        EventMissionEntity_o *missionData,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t id; // w8
  int32_t v22; // w1
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  bool isNowMission; // w0
  CompleteMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v39; // x8

  if ( (byte_4CED0A0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED0A0 = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0);
  this->fields.eventMissionEnt = missionData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventMissionEnt,
    (int32_t)missionData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !missionData )
    goto LABEL_7;
  this->fields.currentEventId = missionData->fields.missionTargetId;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  this->fields.currentMissionId = id;
  this->fields.dispNo = missionData->fields.dispNo;
  v22 = StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.condMsg, v22, v15, v16, v17, v18, v19, v20);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0;
  this->fields.progNum = 0;
  v23 = StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.closedMessage, v23, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.progTxt, v30, v31, v32, v33, v34, v35, v36);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0),
        klass = this->klass,
        this->fields.missionType = type,
        this->fields.isNowMission = isNowMission,
        ((void (__fastcall *)(CompleteMissionListViewItem_o *, const MethodInfo *))klass->vtable._6_CheckMissionCond.methodPtr)(
          this,
          klass->vtable._6_CheckMissionCond.method),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0),
        (v39 = this->fields.eventMissionEnt) == 0) )
  {
LABEL_7:
    sub_1C7BD40(eventMissionEnt, v14);
  }
  this->fields.sortValue2 = -v39->fields.id;
}


void CompleteMissionListViewItem__CheckMissionCond(CompleteMissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  _BOOL4 isNowMission; // w23
  int32_t currentEventId; // w20
  int32_t currentMissionId; // w21
  bool IsIgnoreStartCondition; // w22
  NotEndEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CED0A1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
    sub_1C7BAE8(&MissionInfoMaker_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CED0A1 = 1;
  }
  entity = 0;
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (this->fields.isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0),
        (eventMissionEnt = (EventMissionEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (eventMissionEnt = (EventMissionEntity_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)eventMissionEnt,
                                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___)) == 0
    || (!NotEndEventMissionFixMaster__TryGetEntity(
           (NotEndEventMissionFixMaster_o *)eventMissionEnt,
           &entity,
           this->fields.currentEventId,
           this->fields.currentMissionId,
           0)
      ? (isNowMission = this->fields.isNowMission)
      : (isNowMission = 1, this->fields.isNowMission = 1),
        (eventMissionEnt = this->fields.eventMissionEnt) == 0) )
  {
    sub_1C7BD40(eventMissionEnt, method);
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(eventMissionEnt, 0);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  this->fields.progType = MissionInfoMaker__GetMissionProgressType_47441908(
                            currentEventId,
                            currentMissionId,
                            isNowMission,
                            IsIgnoreStartCondition,
                            0);
  MissionListViewItem__SetMissionCondInfo((MissionListViewItem_o *)this, 0);
  MissionListViewItem__SetMissionCondMsg((MissionListViewItem_o *)this, 0);
}


bool CompleteMissionListViewItem__SetSortValue(
        CompleteMissionListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 progStatus; // x8
  struct EventMissionEntity_o *eventMissionEnt; // x8

  v5 = MissionListViewItem__SetSortValue((MissionListViewItem_o *)this, sort, 0);
  if ( v5 )
  {
    progStatus = this->fields.progStatus;
    if ( (unsigned int)progStatus <= 4 )
      this->fields.sortValue0 = qword_D29E20[progStatus];
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
    sub_1C7BD40(v5, v6);
  }
  return 0;
}


bool CompleteMissionListViewItem__get_IsHideReward(CompleteMissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1C7BD40(0, method);
  v4 = this->fields.progStatus < 2u;
  return v4 & EventMissionEntity__IsHideReward(eventMissionEnt, 0);
}


bool CompleteMissionListViewItem__get_IsHideRewardDetail(CompleteMissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHideRewardDetail;
}


int32_t CompleteMissionListViewItem__get_MissionType(CompleteMissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.missionType;
}


void CompleteMissionListViewItem__set_IsHideRewardDetail(
        CompleteMissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isHideRewardDetail = value;
}