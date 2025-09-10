void EventFatigueRecoveryEntity___ctor(EventFatigueRecoveryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27262 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27262 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventFatigueRecoveryEntity__CreatePK(int32_t eventId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4C27260 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27260 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           priority,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventFatigueRecoveryEntity__CreatePrimaryKey(
        EventFatigueRecoveryEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFatigueRecoveryEntity__CreatePK(this->fields.eventId, this->fields.priority, v2);
}


bool EventFatigueRecoveryEntity__IsOpen(EventFatigueRecoveryEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C27261 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27261 = 1;
  }
  if ( this->fields.commonReleaseId < 1 )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0, 0, 0);
}


bool EventFatigueRecoveryEntity__existsReleaseCondition(EventFatigueRecoveryEntity_o *this, const MethodInfo *method)
{
  return this->fields.commonReleaseId > 0;
}