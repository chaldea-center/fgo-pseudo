void __fastcall EventRaidEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FACCC & 1) == 0 )
  {
    sub_B16FFC(&EventRaidEntity_TypeInfo, v1);
    byte_40FACCC = 1;
  }
  EventRaidEntity_TypeInfo->static_fields->SUB_GROUP_INDEX_START = 1;
}


void __fastcall EventRaidEntity___ctor(EventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FACCB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FACCB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRaidEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_40FACC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&day);
    byte_40FACC5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRaidEntity__CreatePrimaryKey(EventRaidEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t day; // w19
  int32_t eventId; // w20

  if ( (byte_40FACC4 & 1) == 0 )
  {
    sub_B16FFC(&EventRaidEntity_TypeInfo, method);
    byte_40FACC4 = 1;
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
  UnityEngine_Color___ctor_40666012(v12, v2, v3, v4, (const MethodInfo *)&v10);
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
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x3
  int32_t RaidGroupDeadQuestId; // w0
  int32_t v9; // w19

  if ( (byte_40FACCA & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FACCA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                           MasterData_WarQuestSelectionMaster,
                           this->fields.eventId,
                           this->fields.groupIndex,
                           v7);
  if ( RaidGroupDeadQuestId < 1 )
    return 0;
  v9 = RaidGroupDeadQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25438860(v9, -1, 0, 0LL);
}


bool __fastcall EventRaidEntity__IsJumbleSingleRaid(EventRaidEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x3
  EventRaidEntity_array *EventRaidEntityArray; // x0

  if ( (byte_40FACC9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FACC9 = 1;
  }
  if ( this->fields.groupIndex < 1 )
  {
    LOBYTE(EventRaidEntityArray) = 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             MasterData_WarQuestSelectionMaster,
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

  if ( (byte_40FACC8 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40FACC8 = 1;
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


bool __fastcall EventRaidEntity__IsValidDefeatedTime(EventRaidEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v7; // x0
  int32_t id; // w19
  BalanceConfig_c *v9; // x0

  if ( (byte_40FACC7 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FACC7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (v7 = WarMaster__getByEventId(MasterData_WarQuestSelectionMaster, this->fields.eventId, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  id = v7->fields.id;
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return id != v9->static_fields->FesWarId;
}


TotalEventRaidEntity_o *__fastcall EventRaidEntity__getTotalEventRaidEntity(
        EventRaidEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  TotalEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FACC6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FACC6 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (TotalEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  TotalEventRaidMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
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
    sub_B170D4();
  return TotalEventRaidEntity->fields.totalDamage >= this->fields.maxHp;
}