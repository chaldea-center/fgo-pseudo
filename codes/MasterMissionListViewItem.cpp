void MasterMissionListViewItem___ctor(
        MasterMissionListViewItem_o *this,
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
  const MethodInfo *v14; // x1
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
  MasterMissionListViewItem_c *klass; // x8
  const MethodInfo *v41; // x1
  void (__fastcall *methodPtr)(MasterMissionListViewItem_o *, const MethodInfo *); // x9
  const MethodInfo *v43; // x1
  struct EventMissionEntity_o *v44; // x8

  if ( (byte_593C050 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C050 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.eventMissionEnt = missionData;
  sub_21FFBF4(
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.condMsg, (int32_t)v24, v15, v16, v17, v18, v19, v20);
  v25 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0;
  this->fields.progNum = 0;
  this->fields.closedMessage = v25;
  sub_21FFBF4(
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.progTxt, v32, v33, v34, v35, v36, v37, v38);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  if ( !eventMissionEnt )
    goto LABEL_7;
  isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0);
  klass = this->klass;
  this->fields.isNowMission = isNowMission;
  methodPtr = (void (__fastcall *)(MasterMissionListViewItem_o *, const MethodInfo *))klass->vtable._6_CheckMissionCond.methodPtr;
  v41 = klass->vtable._6_CheckMissionCond.method;
  this->fields.missionType = type;
  methodPtr(this, v41);
  MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, v43);
  v44 = this->fields.eventMissionEnt;
  if ( !v44 )
LABEL_7:
    sub_21FFECC(eventMissionEnt, v14);
  this->fields.sortValue2 = -v44->fields.id;
  MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)this, v14);
}


bool MasterMissionListViewItem__SetSortValue(
        MasterMissionListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  unsigned int missionType; // w8
  __int64 v8; // x8
  struct EventMissionEntity_o *v9; // x8
  int32_t priority; // w9
  struct EventMissionEntity_o *eventMissionEnt; // x9
  int32_t progStatus; // w8
  int64_t v13; // x8

  v5 = MissionListViewItem__SetSortValue((MissionListViewItem_o *)this, sort, method);
  if ( v5 )
  {
    missionType = this->fields.missionType;
    if ( missionType > 3 || missionType == 2 )
    {
      eventMissionEnt = this->fields.eventMissionEnt;
      if ( eventMissionEnt )
      {
        progStatus = this->fields.progStatus;
        this->fields.sortValue1 = eventMissionEnt->fields.priority;
        if ( progStatus > 2 )
        {
          if ( progStatus == 4 )
          {
            v13 = 1;
          }
          else
          {
            if ( progStatus != 3 )
              return v5;
            v13 = 3;
          }
        }
        else
        {
          if ( (unsigned int)progStatus < 2 )
          {
            this->fields.sortValue0 = 0;
            return v5;
          }
          if ( progStatus != 2 )
            return v5;
          v13 = 2;
        }
        this->fields.sortValue0 = v13;
        return v5;
      }
      goto LABEL_22;
    }
    v8 = (unsigned int)this->fields.progStatus;
    if ( (unsigned int)v8 <= 4 )
      this->fields.sortValue0 = qword_ED0B00[v8];
    if ( !sort )
      goto LABEL_22;
    if ( sort->fields.sortKind == 1 )
    {
      v9 = this->fields.eventMissionEnt;
      if ( v9 )
      {
        priority = v9->fields.priority;
        this->fields.sortValue1 = v9->fields.startedAt;
        this->fields.sortValue2 = -priority;
        return v5;
      }
LABEL_22:
      sub_21FFECC(v5, v6);
    }
  }
  return v5;
}


bool MasterMissionListViewItem__get_IsHideReward(MasterMissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_21FFECC(0, method);
  v4 = this->fields.progStatus < 2u;
  return EventMissionEntity__IsHideReward(eventMissionEnt, 0) && v4;
}


bool MasterMissionListViewItem__get_IsHideRewardDetail(MasterMissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHideRewardDetail;
}


int32_t MasterMissionListViewItem__get_MissionType(MasterMissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.missionType;
}


void MasterMissionListViewItem__set_IsHideRewardDetail(
        MasterMissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isHideRewardDetail = value;
}