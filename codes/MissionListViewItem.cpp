void MissionListViewItem___ctor(MissionListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0);
}


void MissionListViewItem__CheckEventMissionAdd(MissionListViewItem_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x20
  System_Comparison_T__o *v5; // x21
  Il2CppObject *v6; // x22
  struct MissionListViewItem___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  _BOOL8 v10; // x0
  Il2CppObject *current; // x26
  int32_t klass; // w21
  int32_t monitor_high; // w23
  int64_t klass_high; // x22
  int monitor; // w8
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_String_o *v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C46190 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventMissionAddEntity__TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_EventMissionAddEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_MissionListViewItem___c__CheckEventMissionAdd_b__32_0__);
    sub_1C37058(&MissionListViewItem___c_TypeInfo);
    byte_4C46190 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !Instance )
    goto LABEL_27;
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          (EventMissionAddMaster_o *)Instance,
                          this->fields.currentEventId,
                          this->fields.currentMissionId,
                          0);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionAddList,
          (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_EventMissionAddEntity___) )
    return;
  Instance = MissionListViewItem___c_TypeInfo;
  if ( !MissionListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItem___c_TypeInfo);
    Instance = MissionListViewItem___c_TypeInfo;
  }
  v5 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = MissionListViewItem___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v5 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_MissionListViewItem___c__CheckEventMissionAdd_b__32_0__, 0);
    static_fields = MissionListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Comparison_EventMissionAddEntity__o *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)v5, v8, v9);
  }
  if ( !EventMissionAddList )
LABEL_27:
    sub_1C372B4(Instance);
  System_Collections_Generic_List_object___Sort_58346216(
    (System_Collections_Generic_List_object__o *)EventMissionAddList,
    v5,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)EventMissionAddList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1C372B4(v10);
    monitor_high = HIDWORD(v20.fields._current[1].monitor);
    klass = (int32_t)v20.fields._current[2].klass;
    klass_high = SHIDWORD(v20.fields._current[2].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0, 0) )
    {
      monitor = (int)current[2].monitor;
      if ( monitor == 2 )
      {
        if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0) )
        {
          v18 = (struct System_String_o *)current[3].klass;
          this->fields.condMsg = v18;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.condMsg, (int32_t)v18, v16, v17);
        }
      }
      else if ( monitor == 1 )
      {
        this->fields.bannerGroupId = HIDWORD(current[2].monitor);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
}


void MissionListViewItem__CheckMissionCond(MissionListViewItem_o *this, const MethodInfo *method)
{
  EventMissionEntity_o *eventMissionEnt; // x0
  EventMissionEntity_o *v4; // x8
  int32_t currentEventId; // w21
  int32_t currentMissionId; // w22
  char v7; // w20
  const MethodInfo *v8; // x4
  bool IsIgnoreStartCondition; // w23
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4C4618C & 1) == 0 )
  {
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    byte_4C4618C = 1;
  }
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt
    || (eventMissionEnt = (EventMissionEntity_o *)EventMissionEntity__isNowMission(eventMissionEnt, 0),
        v4 = this->fields.eventMissionEnt,
        this->fields.isNowMission = (unsigned __int8)eventMissionEnt & 1,
        !v4) )
  {
    sub_1C372B4(eventMissionEnt);
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  v7 = (char)eventMissionEnt;
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v4, 0);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  this->fields.progType = MissionInfoMaker__GetMissionProgressType_46962472(
                            currentEventId,
                            currentMissionId,
                            v7 & 1,
                            IsIgnoreStartCondition,
                            v8);
  MissionListViewItem__SetMissionCondInfo(this, v10);
  MissionListViewItem__SetMissionCondMsg(this, v11);
}


EventMissionConditionEntity_o *MissionListViewItem__GetNotClearCondInfo(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentMissionId; // w19
  int32_t currentEventId; // w20

  if ( (byte_4C46195 & 1) == 0 )
  {
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    byte_4C46195 = 1;
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  return MissionInfoMaker__GetMissionNotClearConditionInfo(currentEventId, currentMissionId, v2);
}


bool MissionListViewItem__GetProgInfo(
        MissionListViewItem_o *this,
        System_String_o **progTxt,
        float *barExp,
        const MethodInfo *method)
{
  System_String_o *v4; // x8
  bool result; // w0

  v4 = this->fields.progTxt;
  *progTxt = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)progTxt, (int32_t)v4, (int32_t)barExp, method);
  result = 1;
  *barExp = this->fields.progVal;
  return result;
}


bool MissionListViewItem__HasMissionConditionFlag(MissionListViewItem_o *this, int32_t flag, const MethodInfo *method)
{
  EventMissionConditionEntity_array *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  EventMissionConditionEntity_array *v7; // x20
  _BOOL8 HasFlag; // x0
  __int64 v9; // x21

  if ( (byte_4C46193 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46193 = 1;
  }
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = EventMissionConditionMaster__getMissionCondList(
               (EventMissionConditionMaster_o *)Instance,
               this->fields.currentEventId,
               this->fields.currentMissionId,
               0);
  if ( !Instance )
    goto LABEL_14;
  max_length = Instance->max_length;
  v7 = Instance;
  HasFlag = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned int)max_length )
        sub_1C372BC(HasFlag);
      Instance = (EventMissionConditionEntity_array *)v7->m_Items[v9];
      if ( !Instance )
        break;
      HasFlag = EventMissionConditionEntity__HasFlag((EventMissionConditionEntity_o *)Instance, flag, 0);
      if ( !HasFlag )
      {
        LODWORD(max_length) = v7->max_length;
        if ( (int)++v9 < (int)max_length )
          continue;
      }
      return HasFlag;
    }
LABEL_14:
    sub_1C372B4(Instance);
  }
  return HasFlag;
}


void MissionListViewItem__ModifyItem(MissionListViewItem_o *this, bool isRecieveReward, const MethodInfo *method)
{
  int32_t currentMissionId; // w19

  if ( (byte_4C46192 & 1) == 0 )
  {
    sub_1C37058(&UserMissionProgressManager_TypeInfo);
    byte_4C46192 = 1;
  }
  this->fields.progStatus = 4;
  currentMissionId = this->fields.currentMissionId;
  if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  UserMissionProgressManager__SetAchiveMission(currentMissionId, 4, 0);
  UserMissionProgressManager__WriteData(0);
}


void MissionListViewItem__SetGiftData(MissionListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x20
  GiftEntity_o *IconGiftEntity; // x20
  const MethodInfo *v5; // x5
  __int64 v6; // x0

  if ( (byte_4C46191 & 1) == 0 )
  {
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    byte_4C46191 = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( giftEnts )
  {
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, method);
    MissionInfoMaker__SetGiftInfo(
      IconGiftEntity,
      &this->fields.itemEnt,
      &this->fields.svtEnt,
      &this->fields.cmdEnt,
      &this->fields.servantCostumeEnt,
      v5);
    if ( !IconGiftEntity )
      sub_1C372B4(v6);
    this->fields.rewardObjectId = IconGiftEntity->fields.objectId;
  }
}


void MissionListViewItem__SetMissionCondInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t currentMissionId; // w21
  int32_t currentEventId; // w22
  int32_t progType; // w20
  _BOOL4 isNowMission; // w23
  int32_t ProgStatus; // w0
  int32_t v9; // w8
  unsigned int v10; // w8
  int32_t v11; // w8

  if ( (byte_4C4618D & 1) == 0 )
  {
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    byte_4C4618D = 1;
  }
  currentEventId = this->fields.currentEventId;
  currentMissionId = this->fields.currentMissionId;
  progType = this->fields.progType;
  isNowMission = this->fields.isNowMission;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  ProgStatus = MissionInfoMaker__GetProgStatus(currentEventId, currentMissionId, progType, isNowMission, v2);
  v9 = this->fields.progType;
  this->fields.progStatus = ProgStatus;
  v10 = v9 - 2;
  if ( v10 > 2 )
    v11 = 2;
  else
    v11 = dword_C4938C[v10];
  this->fields.condMsgType = v11;
}


void MissionListViewItem__SetMissionCondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_EventMissionConditionEntity__o *MissionCondListByType; // x20
  struct System_String_o *ConditionMessage; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  struct System_String_o *ClosedMessage; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4
  struct System_String_o *ProgressText; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  unsigned int progStatus; // w1
  float v19; // s0
  int32_t currentMissionId; // w0

  if ( (byte_4C4618E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4618E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  MissionCondListByType = EventMissionConditionMaster__getMissionCondListByType(
                            (EventMissionConditionMaster_o *)Instance,
                            this->fields.currentEventId,
                            this->fields.currentMissionId,
                            this->fields.condMsgType,
                            0);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  ConditionMessage = MissionInfoMaker__GetConditionMessage(MissionCondListByType, v4);
  this->fields.condMsg = ConditionMessage;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.condMsg, (int32_t)ConditionMessage, v7, v8);
  ClosedMessage = MissionInfoMaker__GetClosedMessage(MissionCondListByType, v9);
  this->fields.closedMessage = ClosedMessage;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closedMessage, (int32_t)ClosedMessage, v11, v12);
  ProgressText = MissionInfoMaker__GetProgressText(
                   MissionCondListByType,
                   this->fields.progStatus,
                   &this->fields.progNum,
                   &this->fields.targetNum,
                   v13);
  this->fields.progTxt = ProgressText;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.progTxt, (int32_t)ProgressText, v15, v16);
  progStatus = this->fields.progStatus;
  v19 = 0.0;
  if ( progStatus >= 2 )
    v19 = (float)this->fields.progNum / (float)this->fields.targetNum;
  currentMissionId = this->fields.currentMissionId;
  this->fields.progVal = v19;
  this->fields.isNew = MissionInfoMaker__GetIsShowNew(currentMissionId, progStatus, v17);
}


void MissionListViewItem__SetRewardInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct EventMissionEntity_o *eventMissionEnt; // x0
  int32_t rewardType; // w8
  struct GiftEntity_array *GiftData; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  GiftEntity_array *giftEnts; // x21
  struct GiftEntity_o *SubGiftEntity; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  EventRewardSetEntity_o *SetRewardData; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v19; // x20
  struct System_String_o *detail; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C4618F & 1) == 0 )
  {
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    byte_4C4618F = 1;
  }
  this->fields.subGiftEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.subGiftEntity, 0, v2, v3);
  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1C372B4(0);
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    SetRewardData = EventMissionEntity__getSetRewardData(eventMissionEnt, 0);
    if ( SetRewardData )
    {
      name = SetRewardData->fields.name;
      v19 = SetRewardData;
      this->fields.nameTxt = name;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nameTxt, (int32_t)name, v16, v17);
      this->fields.iconId = v19->fields.iconId;
      detail = v19->fields.detail;
      this->fields.rewardExtraDetailTxt = detail;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rewardExtraDetailTxt, (int32_t)detail, v21, v22);
    }
  }
  else if ( rewardType == 1 )
  {
    GiftData = EventMissionEntity__getGiftData(eventMissionEnt, 0);
    this->fields.giftEnts = GiftData;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.giftEnts, (int32_t)GiftData, v8, v9);
    giftEnts = this->fields.giftEnts;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    SubGiftEntity = MissionInfoMaker__GetSubGiftEntity(giftEnts, v10);
    this->fields.subGiftEntity = SubGiftEntity;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.subGiftEntity, (int32_t)SubGiftEntity, v13, v14);
    ((void (__fastcall *)(MissionListViewItem_o *, const MethodInfo *))this->klass->vtable._7_SetGiftData.methodPtr)(
      this,
      this->klass->vtable._7_SetGiftData.method);
  }
}


bool MissionListViewItem__SetSortValue(MissionListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x9
  int32_t progStatus; // w11
  int32_t v6; // w1

  eventMissionEnt = this->fields.eventMissionEnt;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !eventMissionEnt )
LABEL_14:
    sub_1C372B4(this);
  progStatus = this->fields.progStatus;
  this->fields.sortValue1 = eventMissionEnt->fields.priority;
  this->fields.sortValue2 = -eventMissionEnt->fields.id;
  switch ( progStatus )
  {
    case 2:
      if ( !sort )
        goto LABEL_14;
      v6 = 14;
      break;
    case 3:
      if ( !sort )
        goto LABEL_14;
      v6 = 13;
      break;
    case 4:
      if ( !sort )
        goto LABEL_14;
      v6 = 16;
      break;
    case 5:
      if ( !sort )
        goto LABEL_14;
      v6 = 17;
      break;
    default:
      if ( !sort )
        goto LABEL_14;
      v6 = 15;
      break;
  }
  return ListViewSort__GetFilter(sort, v6, 0);
}


int32_t MissionListViewItem__get_BannerGroupId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.bannerGroupId;
}


System_String_o *MissionListViewItem__get_ClosedMessage(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.closedMessage;
}


CommandCodeEntity_o *MissionListViewItem__get_CmdEntity(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cmdEnt;
}


System_String_o *MissionListViewItem__get_CondMsg(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.condMsg;
}


int32_t MissionListViewItem__get_CurrentEventId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentEventId;
}


int32_t MissionListViewItem__get_CurrentMissionId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentMissionId;
}


int32_t MissionListViewItem__get_CurrentStatus(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.progStatus;
}


int32_t MissionListViewItem__get_DispNo(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dispNo;
}


int32_t MissionListViewItem__get_DisplayGiftNum(MissionListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_array *giftEnts; // x8
  GiftEntity_o *v3; // x8
  int32_t num; // w8

  giftEnts = this->fields.giftEnts;
  if ( !giftEnts )
    goto LABEL_7;
  if ( !LODWORD(giftEnts->max_length) )
    sub_1C372BC(this);
  v3 = giftEnts->m_Items[0];
  if ( !v3 )
LABEL_7:
    sub_1C372B4(this);
  num = v3->fields.num;
  if ( num <= 1 )
    return -1;
  else
    return num;
}


EventMissionEntity_o *MissionListViewItem__get_EventMissionEntity(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventMissionEnt;
}


int32_t MissionListViewItem__get_EventRewardType(MissionListViewItem_o *this, const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1C372B4(this);
  return eventMissionEnt->fields.rewardType;
}


System_String_o *MissionListViewItem__get_ExtraDetailTxt(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardExtraDetailTxt;
}


GiftEntity_array *MissionListViewItem__get_GiftEntityList(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.giftEnts;
}


bool MissionListViewItem__get_IsChallengeButtonObjectExist(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChallengeButtonObjectExist;
}


bool MissionListViewItem__get_IsColliderEnable(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isColliderEnable;
}


bool MissionListViewItem__get_IsEndMission(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNowMission;
}


bool MissionListViewItem__get_IsNew(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNew;
}


bool MissionListViewItem__get_IsOpenMission(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.progStatus == 1;
}


bool MissionListViewItem__get_IsShowRewardInfo(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.progStatus < 3u;
}


ItemEntity_o *MissionListViewItem__get_ItemEntity(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEnt;
}


GiftEntity_o *MissionListViewItem__get_MiniIconGiftEntity(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.subGiftEntity;
}


int32_t MissionListViewItem__get_MissionId(MissionListViewItem_o *this, const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    sub_1C372B4(this);
  return eventMissionEnt->fields.id;
}


System_String_o *MissionListViewItem__get_NameText(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.nameTxt;
}


int32_t MissionListViewItem__get_RewardObjId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardObjectId;
}


ServantCostumeEntity_o *MissionListViewItem__get_ServantCostumeEntity(
        MissionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantCostumeEnt;
}


int32_t MissionListViewItem__get_SetExtraIconId(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconId;
}


ServantEntity_o *MissionListViewItem__get_SvtEntity(MissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtEnt;
}


int32_t MissionListViewItem__get_Type(MissionListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0

  if ( (byte_4C46194 & 1) == 0 )
  {
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    byte_4C46194 = 1;
  }
  giftEnts = this->fields.giftEnts;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, method);
  if ( IconGiftEntity )
    LODWORD(IconGiftEntity) = IconGiftEntity->fields.type;
  return (int)IconGiftEntity;
}


void MissionListViewItem__set_CurrentStatus(MissionListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.progStatus = value;
}


void MissionListViewItem__set_IsChallengeButtonObjectExist(
        MissionListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isChallengeButtonObjectExist = value;
}


void MissionListViewItem__set_IsColliderEnable(MissionListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isColliderEnable = value;
}


void MissionListViewItem__set_IsEndMission(MissionListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isNowMission = value;
}


void MissionListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46196 & 1) == 0 )
  {
    sub_1C37058(&MissionListViewItem___c_TypeInfo);
    byte_4C46196 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(MissionListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionListViewItem___c_TypeInfo->static_fields->__9 = (struct MissionListViewItem___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)MissionListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MissionListViewItem___c___ctor(MissionListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MissionListViewItem___c___CheckEventMissionAdd_b__32_0(
        MissionListViewItem___c_o *this,
        EventMissionAddEntity_o *a,
        EventMissionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.priority - b->fields.priority;
}