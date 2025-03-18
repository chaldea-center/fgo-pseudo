void __fastcall SkillAddMaster___ctor(SkillAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C229ED & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string___ctor__, method);
    byte_4C229ED = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    370,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SkillAddEntity_o *__fastcall SkillAddMaster__GetEntity(
        SkillAddMaster_o *this,
        int32_t skillId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C229EE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__GetEntity__, *(_QWORD *)&skillId);
    byte_4C229EE = 1;
  }
  PK = (Il2CppObject *)SkillAddEntity__CreatePK(skillId, priority, *(const MethodInfo **)&priority);
  return (SkillAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_329F900 *)Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillAddMaster__TryGetEntity(
        SkillAddMaster_o *this,
        SkillAddEntity_o **entity,
        int32_t skillId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C229EF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__TryGetEntity__, entity);
    byte_4C229EF = 1;
  }
  PK = (Il2CppObject *)SkillAddEntity__CreatePK(skillId, priority, *(const MethodInfo **)&skillId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__TryGetEntity__);
}