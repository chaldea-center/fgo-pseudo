void __fastcall MasterMissionListViewItem___ctor(
        MasterMissionListViewItem_o *this,
        EventMissionEntity_o *missionData,
        int32_t type,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t id; // w8
  System_Int32_array **v20; // x1
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  EventMissionEntity_o *eventMissionEnt; // x0
  bool isNowMission; // w0
  MasterMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v38; // x8

  if ( (byte_40FB236 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, missionData);
    byte_40FB236 = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventMissionEnt = missionData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventMissionEnt,
    (System_Int32_array **)missionData,
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
  v20 = (System_Int32_array **)StringLiteral_1;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.condMsg, v20, v13, v14, v15, v16, v17, v18);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v21 = (System_Int32_array **)StringLiteral_1;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closedMessage, v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_Int32_array **)StringLiteral_1;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.progTxt, v28, v29, v30, v31, v32, v33, v34);
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
        (v38 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  this->fields.sortValue2 = -v38->fields.id;
  MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)this, 0LL);
}


bool __fastcall MasterMissionListViewItem__SetSortValue(
        MasterMissionListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  unsigned int missionType; // w8
  __int64 v6; // x8
  struct EventMissionEntity_o *v7; // x8
  bool result; // w0
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t progStatus; // w9
  int64_t v11; // x8

  if ( MissionListViewItem__SetSortValue((MissionListViewItem_o *)this, sort, 0LL) )
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
            v11 = 2LL;
            goto LABEL_19;
          case 3:
            v11 = 3LL;
LABEL_19:
            this->fields.sortValue0 = v11;
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
      v6 = this->fields.progStatus;
      if ( (unsigned int)v6 <= 4 )
        this->fields.sortValue0 = qword_3136F80[v6];
      if ( sort )
      {
        if ( sort->fields.sortKind != 1 )
          return 1;
        v7 = this->fields.eventMissionEnt;
        if ( v7 )
        {
          this->fields.sortValue1 = v7->fields.startedAt;
          this->fields.sortValue2 = -v7->fields.priority;
          return 1;
        }
      }
    }
    sub_B170D4();
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
    sub_B170D4();
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