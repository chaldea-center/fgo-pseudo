void __fastcall EventFatigueRecoveryEntity___ctor(EventFatigueRecoveryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4667 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB4667 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventFatigueRecoveryEntity__CreatePK(
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4BB4665 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4BB4665 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           priority,
           (const MethodInfo_2F8D690 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventFatigueRecoveryEntity__CreatePrimaryKey(
        EventFatigueRecoveryEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFatigueRecoveryEntity__CreatePK(this->fields.eventId, this->fields.priority, v2);
}


bool __fastcall EventFatigueRecoveryEntity__IsOpen(EventFatigueRecoveryEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BB4666 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BB4666 = 1;
  }
  if ( this->fields.commonReleaseId < 1 )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v5);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, 0LL);
}


bool __fastcall EventFatigueRecoveryEntity__existsReleaseCondition(
        EventFatigueRecoveryEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.commonReleaseId > 0;
}