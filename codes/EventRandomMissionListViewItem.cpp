void __fastcall EventRandomMissionListViewItem___ctor(
        EventRandomMissionListViewItem_o *this,
        UserEventRandomMissionEntity_o *randomMissionEnt,
        EventMissionEntity_o *missionData,
        bool isDmy,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  EventMissionEntity_o *eventMissionEnt; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t id; // w8
  System_Int32_array **v30; // x1
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  bool isNowMission; // w0
  EventRandomMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v40; // x8

  if ( (byte_418873C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, randomMissionEnt);
    byte_418873C = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventRandomMissionEnt = randomMissionEnt;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventRandomMissionEnt,
    (System_Int32_array **)randomMissionEnt,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.eventMissionEnt = missionData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventMissionEnt,
    (System_Int32_array **)missionData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !missionData )
    goto LABEL_9;
  this->fields.currentEventId = missionData->fields.missionTargetId;
  id = missionData->fields.id;
  this->fields.isNew = 0;
  this->fields.currentMissionId = id;
  this->fields.dispNo = missionData->fields.dispNo;
  v30 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.condMsg, v30, v23, v24, v25, v26, v27, v28);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.progTxt, v31, v32, v33, v34, v35, v36, v37);
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
        (v40 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_9:
    sub_B2C434(eventMissionEnt, v22);
  }
  this->fields.sortValue2 = -v40->fields.id;
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
  __int64 v3; // x1
  void *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  unsigned int v7; // w9
  __int64 v8; // x10
  __int64 v10; // x0

  if ( (byte_418873F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418873F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = EventMissionConditionMaster__getMissionCondList(
                     (EventMissionConditionMaster_o *)Instance,
                     this->fields.currentEventId,
                     this->fields.currentMissionId,
                     0LL)) == 0LL )
  {
LABEL_14:
    sub_B2C434(Instance, v5);
  }
  v6 = *((_DWORD *)Instance + 6);
  if ( v6 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
    {
      v10 = sub_B2C460(Instance);
      sub_B2C400(v10, 0LL);
    }
    v8 = *((_QWORD *)Instance + (int)v7 + 4);
    if ( !v8 )
      goto LABEL_14;
    if ( *(_DWORD *)(v8 + 20) == 4 )
      return 1;
    if ( (int)++v7 >= v6 )
      return 0;
  }
}


System_String_o *__fastcall EventRandomMissionListViewItem__GetGiftName(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *ItemEntity; // x0
  __int64 v5; // x1
  int32_t Type; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v8; // x19
  int32_t v9; // w0
  int32_t v10; // w0
  struct ServantCostumeEntity_o *servantCostumeEnt; // x8

  if ( (byte_418873E & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418873E = 1;
  }
  if ( MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL) == 2
    && MissionListViewItem__get_ItemEntity((MissionListViewItem_o *)this, 0LL) )
  {
    ItemEntity = MissionListViewItem__get_ItemEntity((MissionListViewItem_o *)this, 0LL);
    if ( ItemEntity )
      return (System_String_o *)*((_QWORD *)ItemEntity + 3);
LABEL_17:
    sub_B2C434(ItemEntity, v5);
  }
  Type = MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL);
  if ( Gift__IsServant(Type, 0LL) && MissionListViewItem__get_SvtEntity((MissionListViewItem_o *)this, 0LL) )
  {
    ItemEntity = MissionListViewItem__get_SvtEntity((MissionListViewItem_o *)this, 0LL);
    if ( !ItemEntity )
      goto LABEL_17;
  }
  else
  {
    v9 = MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL);
    if ( !Gift__IsCommandCode(v9, 0LL) || !MissionListViewItem__get_CmdEntity((MissionListViewItem_o *)this, 0LL) )
    {
      v10 = MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL);
      if ( Gift__IsCostumeRelease(v10, 0LL) && (servantCostumeEnt = this->fields.servantCostumeEnt) != 0LL )
        return servantCostumeEnt->fields.name;
      else
        return (System_String_o *)StringLiteral_1/*""*/;
    }
    ItemEntity = MissionListViewItem__get_CmdEntity((MissionListViewItem_o *)this, 0LL);
    if ( !ItemEntity )
      goto LABEL_17;
  }
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)ItemEntity + 6);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(v8, 0LL);
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

  if ( (byte_418873D & 1) == 0 )
  {
    sub_B2C35C(&MissionInfoMaker_TypeInfo, method);
    byte_418873D = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( giftEnts )
  {
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, 0LL);
    MissionInfoMaker__SetGiftInfo(
      IconGiftEntity,
      &this->fields.itemEnt,
      &this->fields.svtEnt,
      &this->fields.cmdEnt,
      &this->fields.servantCostumeEnt,
      0LL);
    if ( !IconGiftEntity )
      sub_B2C434(v5, v6);
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
  bool result; // w0
  struct UserEventRandomMissionEntity_o *v7; // x8

  eventRandomMissionEnt = this->fields.eventRandomMissionEnt;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !eventRandomMissionEnt )
    goto LABEL_9;
  eventRandomMissionEnt = (UserEventRandomMissionEntity_o *)UserEventRandomMissionEntity__IsInProgress(
                                                              eventRandomMissionEnt,
                                                              0LL);
  if ( ((unsigned __int8)eventRandomMissionEnt & 1) == 0 )
    return 0;
  if ( !this->fields._IsDummy_k__BackingField )
  {
    v7 = this->fields.eventRandomMissionEnt;
    if ( v7 )
    {
      startedAt = v7->fields.startedAt;
      goto LABEL_8;
    }
LABEL_9:
    sub_B2C434(eventRandomMissionEnt, sort);
  }
  startedAt = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
  result = 1;
  this->fields.sortValue1 = startedAt;
  return result;
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
    sub_B2C434(0LL, method);
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