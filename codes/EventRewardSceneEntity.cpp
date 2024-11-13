void __fastcall EventRewardSceneEntity___ctor(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1630B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1630B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardSceneEntity__CreatePK(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  if ( (byte_4B16309 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&slot, method);
    byte_4B16309 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           slot,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRewardSceneEntity__CreatePrimaryKey(
        EventRewardSceneEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRewardSceneEntity__CreatePK(this->fields.eventId, this->fields.slot, v2);
}


int32_t __fastcall EventRewardSceneEntity__GetBgmId(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  bool v15; // cc
  __int64 v16; // x8

  if ( (byte_4B1630A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1630A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    v15 = NetworkManager__getTime(0LL) <= (__int64)v14[6].klass;
    v16 = 48LL;
    if ( v15 )
      v16 = 44LL;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v16);
  }
  return (int)Entity;
}


bool __fastcall EventRewardSceneEntity__HasFlag(
        EventRewardSceneEntity_o *this,
        int32_t typeFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool __fastcall EventRewardSceneEntity__IsBoardGameToken(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 9;
}


bool __fastcall EventRewardSceneEntity__IsBoxGacha(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool __fastcall EventRewardSceneEntity__IsDamagePoint(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 5;
}


bool __fastcall EventRewardSceneEntity__IsDiggingMission(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 12;
}


bool __fastcall EventRewardSceneEntity__IsEventCraft(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 18;
}


bool __fastcall EventRewardSceneEntity__IsEventExpedition(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 13;
}


bool __fastcall EventRewardSceneEntity__IsEventFortification(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 15;
}


bool __fastcall EventRewardSceneEntity__IsEventHeelPortrait(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 16;
}


bool __fastcall EventRewardSceneEntity__IsEventMission(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 4;
}


bool __fastcall EventRewardSceneEntity__IsEventPoint(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


bool __fastcall EventRewardSceneEntity__IsEventRecipe(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 14;
}


bool __fastcall EventRewardSceneEntity__IsEventShop(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 1;
}


bool __fastcall EventRewardSceneEntity__IsEventTrade(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 17;
}


bool __fastcall EventRewardSceneEntity__IsFatigueRecovery(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 8;
}


bool __fastcall EventRewardSceneEntity__IsNpc(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall EventRewardSceneEntity__IsRandomMission(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 11;
}


bool __fastcall EventRewardSceneEntity__IsRanking(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 6;
}


bool __fastcall EventRewardSceneEntity__IsTower(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 7;
}


bool __fastcall EventRewardSceneEntity__IsTreasureBox(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 10;
}