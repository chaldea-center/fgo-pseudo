void __fastcall SkillAddEntity___ctor(SkillAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C03D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438C03D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SkillAddEntity__CreatePK(int32_t skillId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_438C03B & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438C03B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillAddEntity__CreatePrimaryKey(SkillAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillAddEntity__CreatePK(this->fields.skillId, this->fields.priority, v2);
}


bool __fastcall SkillAddEntity__IsOpen(SkillAddEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438C03C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C03C = 1;
  }
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