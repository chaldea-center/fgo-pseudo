void __fastcall EventMissionEntity___ctor(EventMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44AAA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_int___ctor__, method);
    byte_4B44AAA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32DF958 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventMissionEntity__CreatePrimaryKey(EventMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall EventMissionEntity__GetMissionType(EventMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


GiftEntity_o *__fastcall EventMissionEntity__GetQpGiftEntity(EventMissionEntity_o *this, const MethodInfo *method)
{
  GiftEntity_array *GiftData; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  int max_length; // w8
  GiftEntity_array *v6; // x19
  __int64 v7; // x21
  GiftEntity_o *v8; // x20

  GiftData = EventMissionEntity__getGiftData(this, method);
  if ( !GiftData )
    return 0LL;
  max_length = GiftData->max_length;
  v6 = GiftData;
  if ( max_length < 1 )
    return 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= max_length )
      sub_1BDBADC(GiftData, v3, v4);
    v8 = v6->m_Items[v7];
    if ( !v8 )
      sub_1BDBAD4(GiftData, v3);
    GiftData = (GiftEntity_array *)GiftEntity__isQp(v6->m_Items[v7], 0LL);
    if ( ((unsigned __int8)GiftData & 1) != 0 )
      break;
    max_length = v6->max_length;
    if ( (int)++v7 >= max_length )
      return 0LL;
  }
  return v8;
}


bool __fastcall EventMissionEntity__HasMissionFlag(
        EventMissionEntity_o *this,
        int32_t missionFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & missionFlag) != 0;
}


bool __fastcall EventMissionEntity__IsActive(EventMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.closedAt >= checkTime;
}


bool __fastcall EventMissionEntity__IsActiveNow(EventMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4B44AA9 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    byte_4B44AA9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.closedAt >= Time;
}


bool __fastcall EventMissionEntity__IsDaily(EventMissionEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 5) & 1;
}


bool __fastcall EventMissionEntity__IsDirectReward(EventMissionEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 4) & 1;
}


bool __fastcall EventMissionEntity__IsEventPeriod(
        EventMissionEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  return this->fields.startedAt <= nowTime && this->fields.endedAt >= nowTime;
}


bool __fastcall EventMissionEntity__IsHideReward(EventMissionEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall EventMissionEntity__IsIgnoreStartCondition(EventMissionEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 3) & 1;
}


bool __fastcall EventMissionEntity__IsMasterMission(EventMissionEntity_o *this, const MethodInfo *method)
{
  return MissionType__IsMasterMission(this->fields.type, 0LL);
}


bool __fastcall EventMissionEntity__IsOpen(EventMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.endedAt >= checkTime;
}


bool __fastcall EventMissionEntity__IsOpenNow(EventMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4B44AA8 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    byte_4B44AA8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.endedAt >= Time;
}


bool __fastcall EventMissionEntity__IsReceivablePeriod(
        EventMissionEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  return this->fields.startedAt <= nowTime && this->fields.closedAt >= nowTime;
}


GiftEntity_array *__fastcall EventMissionEntity__getGiftData(EventMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B44AA5 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B44AA5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_1BDBAD4(Instance, v5);
  }
  return GiftMaster__GetGiftListById((GiftMaster_o *)Instance, this->fields.giftId, 0LL);
}


EventRewardSetEntity_o *__fastcall EventMissionEntity__getSetRewardData(
        EventMissionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4

  if ( (byte_4B44AA6 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventRewardSetMaster___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B44AA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_1BDBAD4(Instance, v5);
  }
  return EventRewardSetMaster__GetEntity(
           (EventRewardSetMaster_o *)Instance,
           3,
           this->fields.missionTargetId,
           this->fields.id,
           v6);
}


bool __fastcall EventMissionEntity__isNowMission(EventMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4B44AA7 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    byte_4B44AA7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.endedAt >= Time;
}