void __fastcall EventRewardSceneEntity___ctor(EventRewardSceneEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FD126 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FD126 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRewardSceneEntity__CreatePK(int32_t eventId, int32_t slot, const MethodInfo *method)
{
  if ( (byte_40FD124 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&slot);
    byte_40FD124 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           slot,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v9; // x20

  if ( (byte_40FD125 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FD125 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.eventId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( NetworkManager__getTime(0LL) <= *(_QWORD *)&v9->fields.eventId )
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