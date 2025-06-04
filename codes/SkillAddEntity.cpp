void __fastcall SkillAddEntity___ctor(SkillAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02B34 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B02B34 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillAddEntity__CreatePK(int32_t skillId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4B02B32 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4B02B32 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           priority,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4B02B33 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B02B33 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v5);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, 0LL);
}