void __fastcall EventRandomMissionListViewItem___ctor(
        EventRandomMissionListViewItem_o *this,
        UserEventRandomMissionEntity_o *randomMissionEnt,
        EventMissionEntity_o *missionData,
        bool isDmy,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t id; // w8
  int32_t v18; // w1
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  bool isNowMission; // w0
  EventRandomMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v24; // x8

  if ( (byte_4A5F0F1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F0F1 = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventRandomMissionEnt = randomMissionEnt;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventRandomMissionEnt,
    (int32_t)randomMissionEnt,
    v9,
    v10);
  this->fields.eventMissionEnt = missionData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventMissionEnt, (int32_t)missionData, v11, v12);
  if ( !missionData )
    goto LABEL_9;
  this->fields.currentEventId = missionData->fields.missionTargetId;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  this->fields.currentMissionId = id;
  this->fields.dispNo = missionData->fields.dispNo;
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.condMsg, v18, v15, v16);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.progTxt, v19, v20, v21);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  this->fields.rewardRarityId = missionData->fields.rewardRarity;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0LL),
        klass = this->klass,
        this->fields.isNowMission = isNowMission,
        ((void (__fastcall *)(EventRandomMissionListViewItem_o *, Il2CppMethodPointer))klass->vtable._6_CheckMissionCond.method)(
          this,
          klass->vtable._7_SetGiftData.methodPtr),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0LL),
        (v24 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(eventMissionEnt, v14);
  }
  this->fields.sortValue2 = -v24->fields.id;
  MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)this, 0LL);
  if ( isDmy )
  {
    this->fields._IsDummy_k__BackingField = 1;
    this->fields.sortValue2 = 0xFFFFFFFF80000000LL;
    this->fields.sortValue1 = 0x7FFFFFFFFFFFFFFFLL;
  }
}


bool __fastcall EventRandomMissionListViewItem__ExistClearConditionEntity(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  EventMissionConditionEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w8
  int v6; // w9
  EventMissionConditionEntity_o *v7; // x10

  if ( (byte_4A5F0F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F0F4 = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_1B88814(Instance, v4);
      v7 = Instance->m_Items[v6];
      if ( !v7 )
        break;
      if ( v7->fields.missionProgressType != 4 && max_length != ++v6 )
        continue;
      return v6 < max_length;
    }
LABEL_15:
    sub_1B8880C(Instance, v4);
  }
  v6 = 0;
  return v6 < max_length;
}


System_String_o *__fastcall EventRandomMissionListViewItem__GetGiftName(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  void *ItemEntity; // x0
  __int64 v4; // x1
  int32_t Type; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v7; // x19
  int32_t v8; // w0
  int32_t v9; // w0
  struct ServantCostumeEntity_o *servantCostumeEnt; // x8

  if ( (byte_4A5F0F3 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F0F3 = 1;
  }
  if ( MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL) == 2
    && MissionListViewItem__get_ItemEntity((MissionListViewItem_o *)this, 0LL) )
  {
    ItemEntity = MissionListViewItem__get_ItemEntity((MissionListViewItem_o *)this, 0LL);
    if ( ItemEntity )
      return (System_String_o *)*((_QWORD *)ItemEntity + 3);
LABEL_16:
    sub_1B8880C(ItemEntity, v4);
  }
  Type = MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL);
  if ( Gift__IsServant(Type, 0LL) && MissionListViewItem__get_SvtEntity((MissionListViewItem_o *)this, 0LL) )
  {
    ItemEntity = MissionListViewItem__get_SvtEntity((MissionListViewItem_o *)this, 0LL);
    if ( !ItemEntity )
      goto LABEL_16;
LABEL_10:
    v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)ItemEntity + 6);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(v7, 0LL);
  }
  v8 = MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL);
  if ( Gift__IsCommandCode(v8, 0LL) && MissionListViewItem__get_CmdEntity((MissionListViewItem_o *)this, 0LL) )
  {
    ItemEntity = MissionListViewItem__get_CmdEntity((MissionListViewItem_o *)this, 0LL);
    if ( !ItemEntity )
      goto LABEL_16;
    goto LABEL_10;
  }
  v9 = MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL);
  if ( Gift__IsCostumeRelease(v9, 0LL) && (servantCostumeEnt = this->fields.servantCostumeEnt) != 0LL )
    return servantCostumeEnt->fields.name;
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


UserEventRandomMissionEntity_o *__fastcall EventRandomMissionListViewItem__GetUserEventRandomMissionEntity(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventRandomMissionEnt;
}


void __fastcall EventRandomMissionListViewItem__SetGiftData(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t num; // w8

  if ( (byte_4A5F0F2 & 1) == 0 )
  {
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    byte_4A5F0F2 = 1;
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
      sub_1B8880C(v5, v6);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
    num = IconGiftEntity->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}


bool __fastcall EventRandomMissionListViewItem__SetSortValue(
        EventRandomMissionListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UserEventRandomMissionEntity_o *eventRandomMissionEnt; // x0
  int64_t startedAt; // x8
  struct UserEventRandomMissionEntity_o *v6; // x8

  eventRandomMissionEnt = this->fields.eventRandomMissionEnt;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !eventRandomMissionEnt )
    goto LABEL_9;
  eventRandomMissionEnt = (UserEventRandomMissionEntity_o *)UserEventRandomMissionEntity__IsInProgress(
                                                              eventRandomMissionEnt,
                                                              0LL);
  if ( ((unsigned __int8)eventRandomMissionEnt & 1) != 0 )
  {
    if ( this->fields._IsDummy_k__BackingField )
    {
      startedAt = 0x7FFFFFFFFFFFFFFFLL;
LABEL_7:
      this->fields.sortValue1 = startedAt;
      return (unsigned __int8)eventRandomMissionEnt & 1;
    }
    v6 = this->fields.eventRandomMissionEnt;
    if ( v6 )
    {
      startedAt = v6->fields.startedAt;
      goto LABEL_7;
    }
LABEL_9:
    sub_1B8880C(eventRandomMissionEnt, sort);
  }
  return (unsigned __int8)eventRandomMissionEnt & 1;
}


void __fastcall EventRandomMissionListViewItem__SetTimeOver(
        EventRandomMissionListViewItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields._IsTimeOver_k__BackingField = flag;
}


int32_t __fastcall EventRandomMissionListViewItem__get_GetRewardNum(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardNum;
}


bool __fastcall EventRandomMissionListViewItem__get_IsDummy(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDummy_k__BackingField;
}


bool __fastcall EventRandomMissionListViewItem__get_IsHideReward(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  bool v4; // w19

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1B8880C(0LL, method);
  v4 = this->fields.progStatus < 2u;
  return v4 & EventMissionEntity__IsHideReward(eventMissionEnt, 0LL);
}


bool __fastcall EventRandomMissionListViewItem__get_IsShowRewardInfo(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return MissionListViewItem__get_IsShowRewardInfo((MissionListViewItem_o *)this, 0LL) || this->fields.progStatus == 5;
}


bool __fastcall EventRandomMissionListViewItem__get_IsTimeOver(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsTimeOver_k__BackingField;
}


int32_t __fastcall EventRandomMissionListViewItem__get_RewardRarityId(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardRarityId;
}


void __fastcall EventRandomMissionListViewItem__set_IsDummy(
        EventRandomMissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDummy_k__BackingField = value;
}


void __fastcall EventRandomMissionListViewItem__set_IsTimeOver(
        EventRandomMissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTimeOver_k__BackingField = value;
}