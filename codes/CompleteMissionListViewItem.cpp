void CompleteMissionListViewItem___ctor(
        CompleteMissionListViewItem_o *this,
        EventMissionEntity_o *missionData,
        int32_t type,
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
  struct System_String_o *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  bool isNowMission; // w0
  CompleteMissionListViewItem_c *klass; // x8
  const MethodInfo *v41; // x1
  void (__fastcall *methodPtr)(CompleteMissionListViewItem_o *, const MethodInfo *); // x9
  struct EventMissionEntity_o *v43; // x8

  if ( (byte_596F1A3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F1A3 = 1;
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
  v25 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0;
  this->fields.progNum = 0;
  this->fields.closedMessage = v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closedMessage,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (int)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.progTxt, v32, v33, v34, v35, v36, v37, v38);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  if ( !eventMissionEnt )
    goto LABEL_7;
  isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0);
  klass = this->klass;
  this->fields.isNowMission = isNowMission;
  methodPtr = (void (__fastcall *)(CompleteMissionListViewItem_o *, const MethodInfo *))klass->vtable._6_CheckMissionCond.methodPtr;
  v41 = klass->vtable._6_CheckMissionCond.method;
  this->fields.missionType = type;
  methodPtr(this, v41);
  MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0);
  v43 = this->fields.eventMissionEnt;
  if ( !v43 )
LABEL_7:
    sub_2213CDC(eventMissionEnt, v14);
  this->fields.sortValue2 = -v43->fields.id;
}


void CompleteMissionListViewItem__CheckMissionCond(CompleteMissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool isNowMission; // w0
  const MethodInfo_47A29F8 *v5; // x8
  char v6; // w20
  int32_t currentEventId; // w21
  int32_t currentMissionId; // w22
  __int64 v9; // x1
  __int64 v10; // x2
  bool IsIgnoreStartCondition; // w23
  NotEndEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F1A4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F1A4 = 1;
  }
  eventMissionEnt = this->fields.eventMissionEnt;
  entity = 0;
  if ( !eventMissionEnt )
    goto LABEL_13;
  isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0);
  v5 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isNowMission = isNowMission;
  eventMissionEnt = (EventMissionEntity_o *)SingletonMonoBehaviour_object___get_Instance(v5);
  if ( !eventMissionEnt )
    goto LABEL_13;
  eventMissionEnt = (EventMissionEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)eventMissionEnt,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
  if ( !eventMissionEnt )
    goto LABEL_13;
  if ( NotEndEventMissionFixMaster__TryGetEntity(
         (NotEndEventMissionFixMaster_o *)eventMissionEnt,
         &entity,
         this->fields.currentEventId,
         this->fields.currentMissionId,
         0) )
  {
    v6 = 1;
    this->fields.isNowMission = 1;
  }
  else
  {
    v6 = this->fields.isNowMission;
  }
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
LABEL_13:
    sub_2213CDC(eventMissionEnt, method);
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(eventMissionEnt, 0);
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v9, v10);
  this->fields.progType = MissionInfoMaker__GetMissionProgressType_55002764(
                            currentEventId,
                            currentMissionId,
                            v6,
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
  int32_t priority; // w9

  v5 = MissionListViewItem__SetSortValue((MissionListViewItem_o *)this, sort, 0);
  if ( v5 )
  {
    progStatus = (unsigned int)this->fields.progStatus;
    if ( (unsigned int)progStatus <= 4 )
      this->fields.sortValue0 = qword_ED9C40[progStatus];
    if ( !sort )
      goto LABEL_9;
    if ( sort->fields.sortKind == 1 )
    {
      eventMissionEnt = this->fields.eventMissionEnt;
      if ( eventMissionEnt )
      {
        priority = eventMissionEnt->fields.priority;
        this->fields.sortValue1 = eventMissionEnt->fields.startedAt;
        this->fields.sortValue2 = -priority;
        return v5;
      }
LABEL_9:
      sub_2213CDC(v5, v6);
    }
  }
  return v5;
}


bool CompleteMissionListViewItem__get_IsHideReward(CompleteMissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_2213CDC(0, method);
  v4 = this->fields.progStatus < 2u;
  return EventMissionEntity__IsHideReward(eventMissionEnt, 0) && v4;
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