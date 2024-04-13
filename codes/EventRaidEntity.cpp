void __fastcall EventRaidEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E45 & 1) == 0 )
  {
    sub_B5D5C4(&EventRaidEntity_TypeInfo, v1, v2, v3);
    byte_42E8E45 = 1;
  }
  EventRaidEntity_TypeInfo->static_fields->SUB_GROUP_INDEX_START = 1;
}


void __fastcall EventRaidEntity___ctor(EventRaidEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E44 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8E44 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRaidEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E8E3D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, day, (_DWORD)method, v3);
    byte_42E8E3D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRaidEntity__CreatePrimaryKey(EventRaidEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int32_t day; // w19
  int32_t eventId; // w20

  if ( (byte_42E8E3C & 1) == 0 )
  {
    sub_B5D5C4(&EventRaidEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E8E3C = 1;
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
  UnityEngine_Color___ctor_41567816(v12, v2, v3, v4, (const MethodInfo *)&v10);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int32_t RaidGroupDeadQuestId; // w0
  int32_t v15; // w19

  if ( (byte_42E8E42 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8E42 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                           (EventRaidMaster_o *)Instance,
                           this->fields.eventId,
                           this->fields.groupIndex,
                           v13);
  if ( RaidGroupDeadQuestId < 1 )
    return 0;
  v15 = RaidGroupDeadQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(v15, -1, 0, 0LL);
}


bool __fastcall EventRaidEntity__IsJumbleSingleRaid(EventRaidEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  EventRaidEntity_array *EventRaidEntityArray; // x0

  if ( (byte_42E8E41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8E41 = 1;
  }
  if ( this->fields.groupIndex < 1 )
  {
    LOBYTE(EventRaidEntityArray) = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v9);
    }
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             (EventRaidMaster_o *)Instance,
                             this->fields.eventId,
                             this->fields.groupIndex,
                             v10);
    if ( EventRaidEntityArray )
      LOBYTE(EventRaidEntityArray) = EventRaidEntityArray->max_length == 1;
  }
  return (char)EventRaidEntityArray;
}


bool __fastcall EventRaidEntity__IsJustDefeated(EventRaidEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _QWORD *TotalEventRaidEntity; // x0
  _QWORD *v9; // x19
  int64_t Time; // x0
  int64_t v11; // x20
  int64_t v12; // x19

  if ( (byte_42E8E40 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E8E40 = 1;
  }
  TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(this, method);
  if ( TotalEventRaidEntity )
  {
    v9 = TotalEventRaidEntity;
    if ( !TotalEventRaidEntity[4] )
      goto LABEL_13;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v11 = v9[4];
    if ( Time > v11 )
    {
      v12 = Time;
      TotalEventRaidEntity = &BalanceConfig_TypeInfo->_1.image;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        TotalEventRaidEntity = &BalanceConfig_TypeInfo->_1.image;
      }
      LOBYTE(TotalEventRaidEntity) = v12 < v11 + *(int *)(TotalEventRaidEntity[23] + 260LL);
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
  __int64 v3; // x3
  int64_t v4; // x20

  v4 = time;
  if ( (byte_42E8E43 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, time, (_DWORD)method, v3);
    byte_42E8E43 = 1;
  }
  if ( !v4 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v4 = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= v4 && this->fields.endedAt > v4;
}


bool __fastcall EventRaidEntity__IsValidDefeatedTime(EventRaidEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  intptr_t m_CachedPtr; // w19
  BalanceConfig_c *v14; // x0

  if ( (byte_42E8E3F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8E3F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = (DataManager_o *)WarMaster__getByEventId((WarMaster_o *)Instance, this->fields.eventId, 0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  return m_CachedPtr != v14->static_fields->FesWarId;
}


TotalEventRaidEntity_o *__fastcall EventRaidEntity__getTotalEventRaidEntity(
        EventRaidEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8E3E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8E3E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
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
    sub_B5D69C(0LL, v4);
  return TotalEventRaidEntity->fields.totalDamage >= this->fields.maxHp;
}