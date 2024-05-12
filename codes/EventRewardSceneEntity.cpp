void __fastcall EventRewardSceneEntity___ctor(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438EC4E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438EC4E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardSceneEntity__CreatePK(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  if ( (byte_438EC4C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438EC4C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           slot,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v6; // x20

  if ( (byte_438EC4D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438EC4D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v6 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( NetworkManager__getTime(0LL) <= *(_QWORD *)&v6->fields.eventId )
      LODWORD(Entity) = this->fields.bgmId;
    else
      LODWORD(Entity) = this->fields.afterBgmId;
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