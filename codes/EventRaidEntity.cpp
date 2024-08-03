void __fastcall EventRaidEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FC4E1 & 1) == 0 )
  {
    sub_1B640C8(&EventRaidEntity_TypeInfo, v1);
    byte_49FC4E1 = 1;
  }
  EventRaidEntity_TypeInfo->static_fields->SUB_GROUP_INDEX_START = 1;
}


void __fastcall EventRaidEntity___ctor(EventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC4E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC4E0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRaidEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_49FC4D9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&day);
    byte_49FC4D9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_2E37610 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRaidEntity__CreatePrimaryKey(EventRaidEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t day; // w19
  int32_t eventId; // w20

  if ( (byte_49FC4D8 & 1) == 0 )
  {
    sub_1B640C8(&EventRaidEntity_TypeInfo, method);
    byte_49FC4D8 = 1;
  }
  eventId = this->fields.eventId;
  day = this->fields.day;
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  return EventRaidEntity__CreatePK(eventId, day, v2);
}


UnityEngine_Color_o __fastcall EventRaidEntity__GetBossColor(EventRaidEntity_o *this, const MethodInfo *method)
{
  int32_t bossColor; // w8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  bossColor = this->fields.bossColor;
  v3 = (float)BYTE2(bossColor) / 255.0;
  v4 = (float)BYTE1(bossColor) / 255.0;
  v5 = (float)(unsigned __int8)bossColor / 255.0;
  v6 = 1.0;
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
  return result;
}


bool __fastcall EventRaidEntity__IsGroupDeadQuestClear(EventRaidEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3
  int32_t RaidGroupDeadQuestId; // w0
  int32_t v8; // w19

  if ( (byte_49FC4DE & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FC4DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                           (EventRaidMaster_o *)Instance,
                           this->fields.eventId,
                           this->fields.groupIndex,
                           v6);
  if ( RaidGroupDeadQuestId < 1 )
    return 0;
  v8 = RaidGroupDeadQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37285996(v8, -1, 0, 0LL);
}


bool __fastcall EventRaidEntity__IsJumbleSingleRaid(EventRaidEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x3
  EventRaidEntity_array *EventRaidEntityArray; // x0

  if ( (byte_49FC4DD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaidMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FC4DD = 1;
  }
  if ( this->fields.groupIndex < 1 )
  {
    LOBYTE(EventRaidEntityArray) = 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
    }
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             (EventRaidMaster_o *)Instance,
                             this->fields.eventId,
                             this->fields.groupIndex,
                             v5);
    if ( EventRaidEntityArray )
      LOBYTE(EventRaidEntityArray) = EventRaidEntityArray->max_length == 1;
  }
  return (char)EventRaidEntityArray;
}


bool __fastcall EventRaidEntity__IsJustDefeated(EventRaidEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *TotalEventRaidEntity; // x0
  _QWORD *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x20
  int64_t v8; // x19

  if ( (byte_49FC4DC & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_49FC4DC = 1;
  }
  TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(this, method);
  if ( TotalEventRaidEntity )
  {
    v5 = TotalEventRaidEntity;
    if ( !TotalEventRaidEntity[4] )
      goto LABEL_11;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    v7 = v5[4];
    if ( Time > v7 )
    {
      v8 = Time;
      TotalEventRaidEntity = &BalanceConfig_TypeInfo->_1.image;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        TotalEventRaidEntity = &BalanceConfig_TypeInfo->_1.image;
      }
      LOBYTE(TotalEventRaidEntity) = v8 < v7 + *(int *)(TotalEventRaidEntity[23] + 268LL);
    }
    else
    {
LABEL_11:
      LOBYTE(TotalEventRaidEntity) = 0;
    }
  }
  return (char)TotalEventRaidEntity;
}


bool __fastcall EventRaidEntity__IsOpenTime(EventRaidEntity_o *this, int64_t time, const MethodInfo *method)
{
  int64_t v3; // x20

  v3 = time;
  if ( (byte_49FC4DF & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, time);
    byte_49FC4DF = 1;
  }
  if ( !v3 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= v3 && this->fields.endedAt > v3;
}


bool __fastcall EventRaidEntity__IsValidDefeatedTime(EventRaidEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  intptr_t m_CachedPtr; // w19
  BalanceConfig_c *v7; // x0

  if ( (byte_49FC4DB & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FC4DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = (DataManager_o *)WarMaster__getByEventId((WarMaster_o *)Instance, this->fields.eventId, 0LL)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return m_CachedPtr != v7->static_fields->FesWarId;
}


TotalEventRaidEntity_o *__fastcall EventRaidEntity__getTotalEventRaidEntity(
        EventRaidEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC4DA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FC4DA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  TotalEventRaidMaster__TryGetEntity(
    (TotalEventRaidMaster_o *)Instance,
    &entity,
    this->fields.eventId,
    this->fields.day,
    0LL);
  return entity;
}


bool __fastcall EventRaidEntity__isCleard(EventRaidEntity_o *this, const MethodInfo *method)
{
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0

  TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(this, method);
  if ( !TotalEventRaidEntity )
    sub_1B64324(0LL);
  return TotalEventRaidEntity->fields.totalDamage >= this->fields.maxHp;
}