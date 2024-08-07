void __fastcall BoxGachaBaseEntity___ctor(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE82C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE82C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaBaseEntity__CreatePK(int32_t id, int32_t no, const MethodInfo *method)
{
  if ( (byte_49FE829 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&no);
    byte_49FE829 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           no,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BoxGachaBaseEntity__CreatePrimaryKey(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BoxGachaBaseEntity__CreatePK(this->fields.id, this->fields.no, v2);
}


GiftEntity_o *__fastcall BoxGachaBaseEntity__getGiftData(BoxGachaBaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49FE82A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FE82A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v5);
  }
  return GiftMaster__getDataById((GiftMaster_o *)Instance, this->fields.targetId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSetEntity_o *__fastcall BoxGachaBaseEntity__getRewardSetData(
        BoxGachaBaseEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_49FE82B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventRewardSetMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FE82B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventRewardSetMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v7);
  }
  return EventRewardSetMaster__GetEntity((EventRewardSetMaster_o *)Instance, 1, eventId, this->fields.targetId, 0LL);
}