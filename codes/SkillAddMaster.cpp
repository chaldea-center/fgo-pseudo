void __fastcall SkillAddMaster___ctor(SkillAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF42A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string___ctor__, method);
    byte_49FF42A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    364,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SkillAddEntity_o *__fastcall SkillAddMaster__GetEntity(
        SkillAddMaster_o *this,
        int32_t skillId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF42B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__GetEntity__, *(_QWORD *)&skillId);
    byte_49FF42B = 1;
  }
  PK = (Il2CppObject *)SkillAddEntity__CreatePK(skillId, priority, *(const MethodInfo **)&priority);
  return (SkillAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_30D6AF0 *)Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__GetEntity__);
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

  if ( (byte_49FF42C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__TryGetEntity__, entity);
    byte_49FF42C = 1;
  }
  PK = (Il2CppObject *)SkillAddEntity__CreatePK(skillId, priority, *(const MethodInfo **)&skillId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__TryGetEntity__);
}