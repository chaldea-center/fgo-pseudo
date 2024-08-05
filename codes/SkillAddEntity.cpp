void __fastcall SkillAddEntity___ctor(SkillAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEE09 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEE09 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillAddEntity__CreatePK(int32_t skillId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_49FEE07 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_49FEE07 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           priority,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillAddEntity__CreatePrimaryKey(SkillAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillAddEntity__CreatePK(this->fields.skillId, this->fields.priority, v2);
}


bool __fastcall SkillAddEntity__IsOpen(SkillAddEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49FEE08 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FEE08 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B64ACC(Instance, v5);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, 0LL);
}