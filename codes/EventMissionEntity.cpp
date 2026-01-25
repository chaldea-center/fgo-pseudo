void EventMissionEntity___ctor(EventMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE6CC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEE6CC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventMissionEntity__CreatePrimaryKey(EventMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t EventMissionEntity__GetMissionType(EventMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


GiftEntity_o *EventMissionEntity__GetQpGiftEntity(EventMissionEntity_o *this, const MethodInfo *method)
{
  GiftEntity_array *GiftData; // x0
  __int64 v3; // x1
  int max_length; // w8
  GiftEntity_array *v5; // x19
  __int64 v6; // x21
  GiftEntity_o *v7; // x20

  GiftData = EventMissionEntity__getGiftData(this, method);
  if ( !GiftData )
    return 0;
  max_length = GiftData->max_length;
  v5 = GiftData;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1C7BD48(GiftData);
    v7 = v5->m_Items[v6];
    if ( !v7 )
      sub_1C7BD40(GiftData, v3);
    GiftData = (GiftEntity_array *)GiftEntity__isQp(v5->m_Items[v6], 0);
    if ( ((unsigned __int8)GiftData & 1) != 0 )
      break;
    max_length = v5->max_length;
    if ( (int)++v6 >= max_length )
      return 0;
  }
  return v7;
}


bool EventMissionEntity__HasMissionFlag(EventMissionEntity_o *this, int32_t missionFlag, const MethodInfo *method)
{
  return (this->fields.flag & missionFlag) != 0;
}


bool EventMissionEntity__IsDaily(EventMissionEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 5) & 1;
}


bool EventMissionEntity__IsDirectReward(EventMissionEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 4) & 1;
}


bool EventMissionEntity__IsEventPeriod(EventMissionEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  return this->fields.startedAt <= nowTime && this->fields.endedAt >= nowTime;
}


bool EventMissionEntity__IsHideReward(EventMissionEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool EventMissionEntity__IsIgnoreStartCondition(EventMissionEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 3) & 1;
}


bool EventMissionEntity__IsIgnoreUserProgressData(EventMissionEntity_o *this, const MethodInfo *method)
{
  return BYTE1(this->fields.flag) & 1;
}


bool EventMissionEntity__IsMasterMission(EventMissionEntity_o *this, const MethodInfo *method)
{
  return MissionType__IsMasterMission(this->fields.type, 0);
}


bool EventMissionEntity__IsOpen(EventMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.endedAt >= checkTime;
}


bool EventMissionEntity__IsReceivablePeriod(EventMissionEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  return this->fields.startedAt <= nowTime && this->fields.closedAt >= nowTime;
}


GiftEntity_array *EventMissionEntity__getGiftData(EventMissionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEE6C9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE6C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  return GiftMaster__GetGiftListById((GiftMaster_o *)Instance, this->fields.giftId, 0);
}


EventRewardSetEntity_o *EventMissionEntity__getSetRewardData(EventMissionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4CEE6CA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventRewardSetMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE6CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  return EventRewardSetMaster__GetEntity(
           (EventRewardSetMaster_o *)Instance,
           3,
           this->fields.missionTargetId,
           this->fields.id,
           v5);
}


bool EventMissionEntity__isNowMission(EventMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4CEE6CB & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEE6CB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return this->fields.startedAt <= Time && this->fields.endedAt >= Time;
}