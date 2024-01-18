void __fastcall EventRaidEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418871A & 1) == 0 )
  {
    sub_B2C35C(&EventRaidEntity_TypeInfo, v1);
    byte_418871A = 1;
  }
  EventRaidEntity_TypeInfo->static_fields->SUB_GROUP_INDEX_START = 1;
}


void __fastcall EventRaidEntity___ctor(EventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188719 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188719 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRaidEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_4188712 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&day);
    byte_4188712 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRaidEntity__CreatePrimaryKey(EventRaidEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t day; // w19
  int32_t eventId; // w20

  if ( (byte_4188711 & 1) == 0 )
  {
    sub_B2C35C(&EventRaidEntity_TypeInfo, method);
    byte_4188711 = 1;
  }
  eventId = this->fields.eventId;
  day = this->fields.day;
  if ( (BYTE3(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  }
  return EventRaidEntity__CreatePK(eventId, day, v2);
}


UnityEngine_Color_o __fastcall EventRaidEntity__GetBossColor(EventRaidEntity_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  int32_t bossColor; // w8
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  __int64 v10; // [xsp+0h] [xbp-10h] BYREF
  __int64 v11; // [xsp+8h] [xbp-8h]
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  bossColor = this->fields.bossColor;
  v12.fields.a = (float)(unsigned __int8)bossColor;
  v12.fields.r = (float)BYTE2(bossColor) / 255.0;
  v12.fields.g = (float)BYTE1(bossColor) / 255.0;
  v12.fields.b = v12.fields.a / 255.0;
  v10 = 0LL;
  v11 = 0LL;
  UnityEngine_Color___ctor_40633184(v12, v2, v3, v4, (const MethodInfo *)&v10);
  v7 = *((float *)&v10 + 1);
  v6 = *(float *)&v10;
  v9 = *((float *)&v11 + 1);
  v8 = *(float *)&v11;
  result.fields.a = v9;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v6;
  return result;
}


bool __fastcall EventRaidEntity__IsGroupDeadQuestClear(EventRaidEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int32_t RaidGroupDeadQuestId; // w0
  int32_t v9; // w19

  if ( (byte_4188717 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4188717 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                           (EventRaidMaster_o *)Instance,
                           this->fields.eventId,
                           this->fields.groupIndex,
                           v7);
  if ( RaidGroupDeadQuestId < 1 )
    return 0;
  v9 = RaidGroupDeadQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25746984(v9, -1, 0, 0LL);
}


bool __fastcall EventRaidEntity__IsJumbleSingleRaid(EventRaidEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  EventRaidEntity_array *EventRaidEntityArray; // x0

  if ( (byte_4188716 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188716 = 1;
  }
  if ( this->fields.groupIndex < 1 )
  {
    LOBYTE(EventRaidEntityArray) = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v5);
    }
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             (EventRaidMaster_o *)Instance,
                             this->fields.eventId,
                             this->fields.groupIndex,
                             v6);
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

  if ( (byte_4188715 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_4188715 = 1;
  }
  TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(this, method);
  if ( TotalEventRaidEntity )
  {
    v5 = TotalEventRaidEntity;
    if ( !TotalEventRaidEntity[4] )
      goto LABEL_13;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v7 = v5[4];
    if ( Time > v7 )
    {
      v8 = Time;
      TotalEventRaidEntity = &BalanceConfig_TypeInfo->_1.image;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        TotalEventRaidEntity = &BalanceConfig_TypeInfo->_1.image;
      }
      LOBYTE(TotalEventRaidEntity) = v8 < v7 + *(int *)(TotalEventRaidEntity[23] + 260LL);
    }
    else
    {
LABEL_13:
      LOBYTE(TotalEventRaidEntity) = 0;
    }
  }
  return (char)TotalEventRaidEntity;
}


bool __fastcall EventRaidEntity__IsOpenTime(EventRaidEntity_o *this, int64_t time, const MethodInfo *method)
{
  int64_t v3; // x20

  v3 = time;
  if ( (byte_4188718 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, time);
    byte_4188718 = 1;
  }
  if ( !v3 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v3 = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= v3 && this->fields.endedAt > v3;
}


bool __fastcall EventRaidEntity__IsValidDefeatedTime(EventRaidEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  intptr_t m_CachedPtr; // w19
  BalanceConfig_c *v8; // x0

  if ( (byte_4188714 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4188714 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = (DataManager_o *)WarMaster__getByEventId((WarMaster_o *)Instance, this->fields.eventId, 0LL)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return m_CachedPtr != v8->static_fields->FesWarId;
}


TotalEventRaidEntity_o *__fastcall EventRaidEntity__getTotalEventRaidEntity(
        EventRaidEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188713 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188713 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
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
  __int64 v4; // x1

  TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(this, method);
  if ( !TotalEventRaidEntity )
    sub_B2C434(0LL, v4);
  return TotalEventRaidEntity->fields.totalDamage >= this->fields.maxHp;
}