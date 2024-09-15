void __fastcall MasterMissionListViewItem___ctor(
        MasterMissionListViewItem_o *this,
        EventMissionEntity_o *missionData,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t id; // w8
  int32_t v14; // w1
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  bool isNowMission; // w0
  MasterMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v23; // x8

  if ( (byte_4A30A2E & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, missionData);
    byte_4A30A2E = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventMissionEnt = missionData;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.eventMissionEnt, (int32_t)missionData, v7, v8);
  if ( !missionData )
    goto LABEL_7;
  this->fields.currentEventId = missionData->fields.missionTargetId;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  this->fields.currentMissionId = id;
  this->fields.dispNo = missionData->fields.dispNo;
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.condMsg, v14, v11, v12);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.closedMessage, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.progTxt, v18, v19, v20);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        klass = this->klass,
        this->fields.missionType = type,
        this->fields.isNowMission = isNowMission,
        ((void (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))klass->vtable._6_CheckMissionCond.method)(
          this,
          klass->vtable._7_SetGiftData.methodPtr),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0LL),
        (v23 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_7:
    sub_1B7641C(eventMissionEnt, v10);
  }
  this->fields.sortValue2 = -v23->fields.id;
  MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)this, 0LL);
}


bool __fastcall MasterMissionListViewItem__SetSortValue(
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

  v5 = MissionListViewItem__SetSortValue((MissionListViewItem_o *)this, sort, 0LL);
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
            this->fields.sortValue0 = 0LL;
            return 1;
          case 2:
            v13 = 2LL;
            goto LABEL_18;
          case 3:
            v13 = 3LL;
LABEL_18:
            this->fields.sortValue0 = v13;
            return 1;
          case 4:
            result = 1;
            this->fields.sortValue0 = 1LL;
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
        this->fields.sortValue0 = qword_BE6F18[v8];
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
    sub_1B7641C(v5, v6);
  }
  return 0;
}


bool __fastcall MasterMissionListViewItem__get_IsHideReward(
        MasterMissionListViewItem_o *this,
        const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1B7641C(0LL, method);
  v4 = this->fields.progStatus < 2u;
  return v4 & EventMissionEntity__IsHideReward(eventMissionEnt, 0LL);
}


bool __fastcall MasterMissionListViewItem__get_IsHideRewardDetail(
        MasterMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHideRewardDetail;
}


int32_t __fastcall MasterMissionListViewItem__get_MissionType(
        MasterMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.missionType;
}


void __fastcall MasterMissionListViewItem__set_IsHideRewardDetail(
        MasterMissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isHideRewardDetail = value;
}