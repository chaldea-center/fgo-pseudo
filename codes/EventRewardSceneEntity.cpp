void EventRewardSceneEntity___ctor(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59388C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59388C4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRewardSceneEntity__CreatePK(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  if ( (byte_59388C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59388C2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           slot,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventRewardSceneEntity__CreatePrimaryKey(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRewardSceneEntity__CreatePK(this->fields.eventId, this->fields.slot, v2);
}


int32_t EventRewardSceneEntity__GetBgmId(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  bool v8; // cc
  __int64 v9; // x8

  if ( (byte_59388C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59388C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v7 = Entity;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    v8 = NetworkManager__getTime(0) <= (__int64)v7[6].klass;
    v9 = 44;
    if ( !v8 )
      v9 = 48;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v9);
  }
  return (int)Entity;
}


bool EventRewardSceneEntity__HasFlag(EventRewardSceneEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool EventRewardSceneEntity__IsBoardGameToken(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 9;
}


bool EventRewardSceneEntity__IsBoxGacha(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool EventRewardSceneEntity__IsDamagePoint(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 5;
}


bool EventRewardSceneEntity__IsDiggingMission(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 12;
}


bool EventRewardSceneEntity__IsEventCraft(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 18;
}


bool EventRewardSceneEntity__IsEventExpedition(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 13;
}


bool EventRewardSceneEntity__IsEventFortification(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 15;
}


bool EventRewardSceneEntity__IsEventHeelPortrait(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 16;
}


bool EventRewardSceneEntity__IsEventMission(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 4;
}


bool EventRewardSceneEntity__IsEventPoint(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


bool EventRewardSceneEntity__IsEventRecipe(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 14;
}


bool EventRewardSceneEntity__IsEventShop(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 1;
}


bool EventRewardSceneEntity__IsEventTrade(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 17;
}


bool EventRewardSceneEntity__IsFatigueRecovery(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 8;
}


bool EventRewardSceneEntity__IsNpc(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool EventRewardSceneEntity__IsRandomMission(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 11;
}


bool EventRewardSceneEntity__IsRanking(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 6;
}


bool EventRewardSceneEntity__IsTower(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 7;
}


bool EventRewardSceneEntity__IsTreasureBox(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 10;
}