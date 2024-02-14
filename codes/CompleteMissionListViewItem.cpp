void __fastcall CompleteMissionListViewItem___ctor(
        CompleteMissionListViewItem_o *this,
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t id; // w8
  System_Int32_array **v21; // x1
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  bool isNowMission; // w0
  CompleteMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v38; // x8

  if ( (byte_4214E5D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, missionData);
    byte_4214E5D = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventMissionEnt = missionData;
  sub_B0D840(
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
  v21 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.condMsg, v21, v14, v15, v16, v17, v18, v19);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.closedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.closedMessage, v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.progTxt, v29, v30, v31, v32, v33, v34, v35);
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
        (v38 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_7:
    sub_B0D97C(eventMissionEnt);
  }
  this->fields.sortValue2 = -v38->fields.id;
}


void __fastcall CompleteMissionListViewItem__CheckMissionCond(
        CompleteMissionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  EventMissionEntity_o *eventMissionEnt; // x0
  char isNowMission; // w20
  int32_t currentEventId; // w21
  int32_t currentMissionId; // w22
  bool IsIgnoreStartCondition; // w23
  NotEndEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214E5E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___, method);
    sub_B0D8A4(&MissionInfoMaker_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4214E5E = 1;
  }
  entity = 0LL;
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (this->fields.isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        (eventMissionEnt = (EventMissionEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (eventMissionEnt = (EventMissionEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)eventMissionEnt,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___)) == 0LL
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
    sub_B0D97C(eventMissionEnt);
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(eventMissionEnt, 0LL);
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  this->fields.progType = MissionInfoMaker__GetMissionProgressType(
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
  __int64 progStatus; // x8
  struct EventMissionEntity_o *eventMissionEnt; // x8

  v5 = MissionListViewItem__SetSortValue((MissionListViewItem_o *)this, sort, 0LL);
  if ( v5 )
  {
    progStatus = this->fields.progStatus;
    if ( (unsigned int)progStatus <= 4 )
      this->fields.sortValue0 = qword_32044F0[progStatus];
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
    sub_B0D97C(v5);
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
    sub_B0D97C(0LL);
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