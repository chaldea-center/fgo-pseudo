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
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t id; // w8
  System_Int32_array **v22; // x1
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  bool isNowMission; // w0
  MasterMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v39; // x8

  if ( (byte_4189C8F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, missionData);
    byte_4189C8F = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventMissionEnt = missionData;
  sub_B2C2F8(
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
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.condMsg, v22, v15, v16, v17, v18, v19, v20);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v23 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closedMessage, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.progTxt, v30, v31, v32, v33, v34, v35, v36);
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
        (v39 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_7:
    sub_B2C434(eventMissionEnt, v14);
  }
  this->fields.sortValue2 = -v39->fields.id;
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
            goto LABEL_19;
          case 3:
            v13 = 3LL;
LABEL_19:
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
        this->fields.sortValue0 = qword_31A4040[v8];
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
    sub_B2C434(v5, v6);
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
    sub_B2C434(0LL, method);
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