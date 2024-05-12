void __fastcall EventFatigueRecoveryEntity___ctor(EventFatigueRecoveryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438DE6F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438DE6F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventFatigueRecoveryEntity__CreatePK(
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_438DE6D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438DE6D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438DE6E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DE6E = 1;
  }
  if ( this->fields.commonReleaseId < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, 0LL);
}


bool __fastcall EventFatigueRecoveryEntity__existsReleaseCondition(
        EventFatigueRecoveryEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.commonReleaseId > 0;
}