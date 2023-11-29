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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t id; // w8
  System_Int32_array **v28; // x1
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  EventMissionEntity_o *eventMissionEnt; // x0
  bool isNowMission; // w0
  EventRandomMissionListViewItem_c *klass; // x8
  struct EventMissionEntity_o *v39; // x8

  if ( (byte_40F60A0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, randomMissionEnt);
    byte_40F60A0 = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventRandomMissionEnt = randomMissionEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventRandomMissionEnt,
    (System_Int32_array **)randomMissionEnt,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.eventMissionEnt = missionData;
  sub_B16F98(
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
  v28 = (System_Int32_array **)StringLiteral_1;
  this->fields.condMsg = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.condMsg, v28, v21, v22, v23, v24, v25, v26);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v29 = (System_Int32_array **)StringLiteral_1;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.progTxt, v29, v30, v31, v32, v33, v34, v35);
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
        (v39 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  this->fields.sortValue2 = -v39->fields.id;
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
  WebViewManager_o *Instance; // x0
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMissionConditionEntity_array *MissionCondList; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  unsigned int v10; // w9
  EventMissionConditionEntity_o *v11; // x10

  if ( (byte_40F60A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F60A3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (MissionCondList = EventMissionConditionMaster__getMissionCondList(
                            MasterData_WarQuestSelectionMaster,
                            this->fields.currentEventId,
                            this->fields.currentMissionId,
                            0LL)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  max_length = MissionCondList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      sub_B17100(MissionCondList, v7, v8);
      sub_B170A0();
    }
    v11 = MissionCondList->m_Items[v10];
    if ( !v11 )
      goto LABEL_14;
    if ( v11->fields.missionProgressType == 4 )
      return 1;
    if ( (int)++v10 >= max_length )
      return 0;
  }
}


System_String_o *__fastcall EventRandomMissionListViewItem__GetGiftName(
        EventRandomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ItemEntity_o *ItemEntity; // x0
  int32_t Type; // w0
  void *SvtEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v8; // x19
  int32_t v9; // w0
  int32_t v10; // w0
  struct ServantCostumeEntity_o *servantCostumeEnt; // x8

  if ( (byte_40F60A2 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40F60A2 = 1;
  }
  if ( MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL) == 2
    && MissionListViewItem__get_ItemEntity((MissionListViewItem_o *)this, 0LL) )
  {
    ItemEntity = MissionListViewItem__get_ItemEntity((MissionListViewItem_o *)this, 0LL);
    if ( ItemEntity )
      return ItemEntity->fields.name;
LABEL_17:
    sub_B170D4();
  }
  Type = MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL);
  if ( Gift__IsServant(Type, 0LL) && MissionListViewItem__get_SvtEntity((MissionListViewItem_o *)this, 0LL) )
  {
    SvtEntity = MissionListViewItem__get_SvtEntity((MissionListViewItem_o *)this, 0LL);
    if ( !SvtEntity )
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
        return (System_String_o *)StringLiteral_1;
    }
    SvtEntity = MissionListViewItem__get_CmdEntity((MissionListViewItem_o *)this, 0LL);
    if ( !SvtEntity )
      goto LABEL_17;
  }
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)SvtEntity + 6);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v8, 0LL);
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
  int32_t num; // w8

  if ( (byte_40F60A1 & 1) == 0 )
  {
    sub_B16FFC(&MissionInfoMaker_TypeInfo, method);
    byte_40F60A1 = 1;
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
      sub_B170D4();
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
  if ( !UserEventRandomMissionEntity__IsInProgress(eventRandomMissionEnt, 0LL) )
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
    sub_B170D4();
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
    sub_B170D4();
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