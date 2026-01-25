void EventRaidEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4CEE760 & 1) == 0 )
  {
    sub_1C7BAE8(&EventRaidEntity_TypeInfo);
    byte_4CEE760 = 1;
  }
  EventRaidEntity_TypeInfo->static_fields->SUB_GROUP_INDEX_START = 1;
}


void EventRaidEntity___ctor(EventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE75F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE75F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRaidEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_4CEE75E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEE75E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventRaidEntity__CreatePrimaryKey(EventRaidEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t day; // w19
  int32_t eventId; // w20

  if ( (byte_4CEE75D & 1) == 0 )
  {
    sub_1C7BAE8(&EventRaidEntity_TypeInfo);
    byte_4CEE75D = 1;
  }
  eventId = this->fields.eventId;
  day = this->fields.day;
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  return EventRaidEntity__CreatePK(eventId, day, v2);
}


int32_t EventRaidEntity__GetUiCommonReleaseId(EventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE75C & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24520/*"uiCommonReleaseId"*/);
    byte_4CEE75C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24520/*"uiCommonReleaseId"*/, 0, 0);
}


bool EventRaidEntity__HasFlag(EventRaidEntity_o *this, int64_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & (unsigned __int64)typeFlag) != 0;
}


bool EventRaidEntity__IsGroupDeadQuestClear(EventRaidEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t RaidGroupDeadQuestId; // w0
  int32_t v7; // w19

  if ( (byte_4CEE75A & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE75A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                           (EventRaidMaster_o *)Instance,
                           this->fields.eventId,
                           this->fields.groupIndex,
                           v5);
  if ( RaidGroupDeadQuestId < 1 )
    return 0;
  v7 = RaidGroupDeadQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40887944(v7, -1, 0, 0);
}


bool EventRaidEntity__IsHideRaidSideStatus(EventRaidEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 3) & 1;
}


bool EventRaidEntity__IsJumbleSingleRaid(EventRaidEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  EventRaidEntity_array *EventRaidEntityArray; // x0

  if ( (byte_4CEE759 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE759 = 1;
  }
  if ( this->fields.groupIndex < 1 )
  {
    LOBYTE(EventRaidEntityArray) = 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0 )
    {
      sub_1C7BD40(Instance, v4);
    }
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             (EventRaidMaster_o *)Instance,
                             this->fields.eventId,
                             this->fields.groupIndex,
                             v5);
    if ( EventRaidEntityArray )
      LOBYTE(EventRaidEntityArray) = LODWORD(EventRaidEntityArray->max_length) == 1;
  }
  return (char)EventRaidEntityArray;
}


bool EventRaidEntity__IsJustDefeated(EventRaidEntity_o *this, const MethodInfo *method)
{
  _QWORD *TotalEventRaidEntity; // x0
  _QWORD *v4; // x19
  int64_t Time; // x0
  int64_t v6; // x20
  int64_t v7; // x19

  if ( (byte_4CEE758 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEE758 = 1;
  }
  TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(this, method);
  if ( TotalEventRaidEntity )
  {
    v4 = TotalEventRaidEntity;
    if ( !TotalEventRaidEntity[4] )
      goto LABEL_11;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    v6 = v4[4];
    if ( Time > v6 )
    {
      v7 = Time;
      TotalEventRaidEntity = &BalanceConfig_TypeInfo->_1.image;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        TotalEventRaidEntity = &BalanceConfig_TypeInfo->_1.image;
      }
      LOBYTE(TotalEventRaidEntity) = v7 < v6 + *(int *)(TotalEventRaidEntity[23] + 292LL);
    }
    else
    {
LABEL_11:
      LOBYTE(TotalEventRaidEntity) = 0;
    }
  }
  return (char)TotalEventRaidEntity;
}


bool EventRaidEntity__IsOpenTime(EventRaidEntity_o *this, int64_t time, const MethodInfo *method)
{
  if ( (byte_4CEE75B & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEE75B = 1;
  }
  if ( !time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    time = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool EventRaidEntity__IsValidDefeatedTime(EventRaidEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  int m_CachedPtr; // w19
  BalanceConfig_c *v6; // x0

  if ( (byte_4CEE757 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE757 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0
    || (Instance = (DataManager_o *)WarMaster__getByEventId((WarMaster_o *)Instance, this->fields.eventId, 0)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  return m_CachedPtr != v6->static_fields->FesWarId;
}


TotalEventRaidEntity_o *EventRaidEntity__getTotalEventRaidEntity(EventRaidEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEE756 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE756 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  TotalEventRaidMaster__TryGetEntity(
    (TotalEventRaidMaster_o *)Instance,
    &entity,
    this->fields.eventId,
    this->fields.day,
    0);
  return entity;
}


bool EventRaidEntity__isCleard(EventRaidEntity_o *this, const MethodInfo *method)
{
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  __int64 v4; // x1

  TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(this, method);
  if ( !TotalEventRaidEntity )
    sub_1C7BD40(0, v4);
  return TotalEventRaidEntity->fields.totalDamage >= this->fields.maxHp;
}