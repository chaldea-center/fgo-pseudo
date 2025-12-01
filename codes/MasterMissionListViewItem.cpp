void MasterMissionListViewItem___ctor(
        MasterMissionListViewItem_o *this,
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
  const MethodInfo *v14; // x1
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
  MasterMissionListViewItem_c *klass; // x8
  const MethodInfo *v39; // x1
  struct EventMissionEntity_o *v40; // x8

  if ( (byte_4CCA5E8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA5E8 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.eventMissionEnt = missionData;
  sub_1C71354(
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.condMsg, v22, v15, v16, v17, v18, v19, v20);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0;
  this->fields.progNum = 0;
  v23 = StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.closedMessage, v23, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.progTxt, v30, v31, v32, v33, v34, v35, v36);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0),
        klass = this->klass,
        this->fields.missionType = type,
        this->fields.isNowMission = isNowMission,
        ((void (__fastcall *)(MasterMissionListViewItem_o *, const MethodInfo *))klass->vtable._6_CheckMissionCond.methodPtr)(
          this,
          klass->vtable._6_CheckMissionCond.method),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, v39),
        (v40 = this->fields.eventMissionEnt) == 0) )
  {
LABEL_7:
    sub_1C71608(eventMissionEnt, v14);
  }
  this->fields.sortValue2 = -v40->fields.id;
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
  bool result; // w0
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t progStatus; // w9
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
        switch ( progStatus )
        {
          case 0:
          case 1:
            this->fields.sortValue0 = 0;
            return 1;
          case 2:
            v13 = 2;
            goto LABEL_18;
          case 3:
            v13 = 3;
LABEL_18:
            this->fields.sortValue0 = v13;
            return 1;
          case 4:
            result = 1;
            this->fields.sortValue0 = 1;
            return result;
          default:
            return 1;
        }
      }
    }
    else
    {
      v8 = this->fields.progStatus;
      if ( (unsigned int)v8 <= 4 )
        this->fields.sortValue0 = qword_D23390[v8];
      if ( sort )
      {
        if ( sort->fields.sortKind != 1 )
          return 1;
        v9 = this->fields.eventMissionEnt;
        if ( v9 )
        {
          this->fields.sortValue1 = v9->fields.startedAt;
          this->fields.sortValue2 = -v9->fields.priority;
          return 1;
        }
      }
    }
    sub_1C71608(v5, v6);
  }
  return 0;
}


bool MasterMissionListViewItem__get_IsHideReward(MasterMissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1C71608(0, method);
  v4 = this->fields.progStatus < 2u;
  return v4 & EventMissionEntity__IsHideReward(eventMissionEnt, 0);
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