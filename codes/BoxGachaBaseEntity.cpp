void __fastcall BoxGachaBaseEntity___ctor(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE61 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AE61 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BoxGachaBaseEntity__CreatePK(int32_t id, int32_t no, const MethodInfo *method)
{
  if ( (byte_4A5AE5E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5AE5E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           no,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BoxGachaBaseEntity__CreatePrimaryKey(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BoxGachaBaseEntity__CreatePK(this->fields.id, this->fields.no, v2);
}


GiftEntity_o *__fastcall BoxGachaBaseEntity__getGiftData(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5AE5F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AE5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.targetId, 0LL);
}


EventRewardSetEntity_o *__fastcall BoxGachaBaseEntity__getRewardSetData(
        BoxGachaBaseEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5AE60 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRewardSetMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AE60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  return EventRewardSetMaster__GetEntity((EventRewardSetMaster_o *)Instance, 1, eventId, this->fields.targetId, 0LL);
}