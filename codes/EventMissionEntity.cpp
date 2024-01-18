void __fastcall EventMissionEntity___ctor(EventMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188DE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4188DE4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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
  int max_length; // w8
  GiftEntity_array *v5; // x19
  __int64 v6; // x21
  GiftEntity_o *v7; // x20
  __int64 v9; // x0

  GiftData = EventMissionEntity__getGiftData(this, method);
  if ( !GiftData )
    return 0LL;
  max_length = GiftData->max_length;
  v5 = GiftData;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
    {
      v9 = sub_B2C460(GiftData);
      sub_B2C400(v9, 0LL);
    }
    v7 = v5->m_Items[v6];
    if ( !v7 )
      sub_B2C434(GiftData, v3);
    GiftData = (GiftEntity_array *)GiftEntity__isQp(v5->m_Items[v6], 0LL);
    if ( ((unsigned __int8)GiftData & 1) != 0 )
      break;
    max_length = v5->max_length;
    if ( (int)++v6 >= max_length )
      return 0LL;
  }
  return v7;
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

  if ( (byte_4188DE3 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188DE3 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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

  if ( (byte_4188DE2 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188DE2 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.endedAt >= Time;
}


GiftEntity_array *__fastcall EventMissionEntity__getGiftData(EventMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188DDF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188DDF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return GiftMaster__GetGiftListById((GiftMaster_o *)Instance, this->fields.giftId, 0LL);
}


EventRewardSetEntity_o *__fastcall EventMissionEntity__getSetRewardData(
        EventMissionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188DE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardSetMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188DE0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return EventRewardSetMaster__GetEntity(
           (EventRewardSetMaster_o *)Instance,
           3,
           this->fields.missionTargetId,
           this->fields.id,
           0LL);
}


bool __fastcall EventMissionEntity__isNowMission(EventMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4188DE1 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188DE1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && Time <= this->fields.endedAt;
}