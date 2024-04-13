void __fastcall EventMissionItemListViewItem___ctor(
        EventMissionItemListViewItem_o *this,
        EventMissionEntity_o *missionData,
        bool isDaily,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  EventMissionEntity_o *eventMissionEnt; // x0
  const MethodInfo *v14; // x1
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
  bool isNowMission; // w0
  EventMissionItemListViewItem_c *klass; // x9
  struct EventMissionEntity_o *v32; // x8

  if ( (byte_42E9016 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)missionData, isDaily, method);
    byte_42E9016 = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0LL);
  this->fields.eventMissionEnt = missionData;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.condMsg, v22, v15, v16, v17, v18, v19, v20);
  this->fields.progVal = 0.0;
  this->fields.targetNum = 0LL;
  this->fields.progNum = 0LL;
  v23 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.progTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.progTxt, v23, v24, v25, v26, v27, v28, v29);
  eventMissionEnt = this->fields.eventMissionEnt;
  *(_QWORD *)&this->fields.progStatus = 0x400000000LL;
  this->fields.bannerGroupId = missionData->fields.bannerGroup;
  this->fields.rewardRarityId = missionData->fields.rewardRarity;
  if ( !eventMissionEnt
    || (isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, v14),
        klass = this->klass,
        this->fields.isNowMission = isNowMission,
        this->fields.isDailyMission = isDaily,
        ((void (__fastcall *)(EventMissionItemListViewItem_o *, Il2CppMethodPointer))klass->vtable._6_CheckMissionCond.method)(
          this,
          klass->vtable._7_SetGiftData.methodPtr),
        MissionListViewItem__SetRewardInfo((MissionListViewItem_o *)this, 0LL),
        (v32 = this->fields.eventMissionEnt) == 0LL) )
  {
LABEL_7:
    sub_B5D69C(eventMissionEnt, v14);
  }
  this->fields.sortValue2 = -v32->fields.id;
  MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)this, 0LL);
}


bool __fastcall EventMissionItemListViewItem__ExistClearConditionEntity(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int v11; // w8
  unsigned int v12; // w9
  __int64 v13; // x10
  __int64 v15; // x0

  if ( (byte_42E9019 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E9019 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = EventMissionConditionMaster__getMissionCondList(
                     (EventMissionConditionMaster_o *)Instance,
                     this->fields.currentEventId,
                     this->fields.currentMissionId,
                     v10)) == 0LL )
  {
LABEL_14:
    sub_B5D69C(Instance, v9);
  }
  v11 = *((_DWORD *)Instance + 6);
  if ( v11 < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      v15 = sub_B5D6C8(Instance);
      sub_B5D668(v15, 0LL);
    }
    v13 = *((_QWORD *)Instance + (int)v12 + 4);
    if ( !v13 )
      goto LABEL_14;
    if ( *(_DWORD *)(v13 + 20) == 4 )
      return 1;
    if ( (int)++v12 >= v11 )
      return 0;
  }
}


System_String_o *__fastcall EventMissionItemListViewItem__GetGiftName(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *ItemEntity; // x0
  __int64 v9; // x1
  int32_t Type; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v12; // x19
  int32_t v13; // w0
  int32_t v14; // w0
  struct ServantCostumeEntity_o *servantCostumeEnt; // x8

  if ( (byte_42E9018 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E9018 = 1;
  }
  if ( MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL) == 2
    && MissionListViewItem__get_ItemEntity((MissionListViewItem_o *)this, 0LL) )
  {
    ItemEntity = MissionListViewItem__get_ItemEntity((MissionListViewItem_o *)this, 0LL);
    if ( ItemEntity )
      return (System_String_o *)*((_QWORD *)ItemEntity + 3);
LABEL_17:
    sub_B5D69C(ItemEntity, v9);
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
    v13 = MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL);
    if ( !Gift__IsCommandCode(v13, 0LL) || !MissionListViewItem__get_CmdEntity((MissionListViewItem_o *)this, 0LL) )
    {
      v14 = MissionListViewItem__get_Type((MissionListViewItem_o *)this, 0LL);
      if ( Gift__IsCostumeRelease(v14, 0LL) && (servantCostumeEnt = this->fields.servantCostumeEnt) != 0LL )
        return servantCostumeEnt->fields.name;
      else
        return (System_String_o *)StringLiteral_1/*""*/;
    }
    ItemEntity = MissionListViewItem__get_CmdEntity((MissionListViewItem_o *)this, 0LL);
    if ( !ItemEntity )
      goto LABEL_17;
  }
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)ItemEntity + 6);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v12, 0LL);
}


GiftEntity_o *__fastcall EventMissionItemListViewItem__GetIsRewardQp(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEnts; // x20
  int max_length; // w8
  __int64 v4; // x21
  GiftEntity_o *v5; // x19
  __int64 v7; // x0

  giftEnts = this->fields.giftEnts;
  if ( !giftEnts )
    return 0LL;
  max_length = giftEnts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v4 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v4 >= max_length )
    {
      v7 = sub_B5D6C8(this);
      sub_B5D668(v7, 0LL);
    }
    v5 = giftEnts->m_Items[v4];
    if ( !v5 )
      sub_B5D69C(this, method);
    this = (EventMissionItemListViewItem_o *)GiftEntity__isQp(giftEnts->m_Items[v4], 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    max_length = giftEnts->max_length;
    if ( (int)++v4 >= max_length )
      return 0LL;
  }
  return v5;
}


void __fastcall EventMissionItemListViewItem__SetGiftData(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t num; // w8

  if ( (byte_42E9017 & 1) == 0 )
  {
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9017 = 1;
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
      sub_B5D69C(v7, v8);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
    num = IconGiftEntity->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}


bool __fastcall EventMissionItemListViewItem__SetSortValue(
        EventMissionItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t progStatus; // w9
  EventMissionItemListViewItem_o *v4; // x19
  int32_t v6; // w1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  bool result; // w0

  progStatus = this->fields.progStatus;
  v4 = this;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  switch ( progStatus )
  {
    case 0:
    case 1:
      if ( !sort )
        goto LABEL_16;
      v6 = 15;
      break;
    case 2:
      if ( !sort )
        goto LABEL_16;
      v6 = 14;
      break;
    case 3:
      if ( !sort )
        goto LABEL_16;
      v6 = 13;
      break;
    case 4:
      if ( !sort )
        goto LABEL_16;
      v6 = 16;
      break;
    case 5:
      if ( !sort )
        goto LABEL_16;
      v6 = 17;
      break;
    default:
      goto LABEL_13;
  }
  this = (EventMissionItemListViewItem_o *)ListViewSort__GetFilter(sort, v6, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
LABEL_13:
  eventMissionEnt = v4->fields.eventMissionEnt;
  if ( !eventMissionEnt )
LABEL_16:
    sub_B5D69C(this, sort);
  result = 1;
  v4->fields.sortValue1 = eventMissionEnt->fields.dispNo;
  return result;
}


int32_t __fastcall EventMissionItemListViewItem__get_GetRewardNum(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardNum;
}


bool __fastcall EventMissionItemListViewItem__get_IsDailyMission(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isDailyMission;
}


bool __fastcall EventMissionItemListViewItem__get_IsHideReward(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_B5D69C(this, method);
  return (this->fields.progStatus < 2u) & ((unsigned int)eventMissionEnt->fields.flag >> 1);
}


bool __fastcall EventMissionItemListViewItem__get_IsHideRewardDetail(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHideRewardDetail;
}


bool __fastcall EventMissionItemListViewItem__get_IsShowRewardInfo(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return MissionListViewItem__get_IsShowRewardInfo((MissionListViewItem_o *)this, 0LL) || this->fields.progStatus == 5;
}


int32_t __fastcall EventMissionItemListViewItem__get_RewardRarityId(
        EventMissionItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardRarityId;
}


void __fastcall EventMissionItemListViewItem__set_IsHideRewardDetail(
        EventMissionItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isHideRewardDetail = value;
}