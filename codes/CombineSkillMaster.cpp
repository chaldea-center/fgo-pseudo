void __fastcall CombineSkillMaster___ctor(CombineSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE90A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__, method);
    byte_49FE90A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    88,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineSkillEntity_o *__fastcall CombineSkillMaster__GetEntity(
        CombineSkillMaster_o *this,
        int32_t id,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE908 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FE908 = 1;
  }
  PK = (Il2CppObject *)CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&skillLv);
  return (CombineSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_30D6AF0 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineSkillMaster__TryGetEntity(
        CombineSkillMaster_o *this,
        CombineSkillEntity_o **entity,
        int32_t id,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE909 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__, entity);
    byte_49FE909 = 1;
  }
  PK = (Il2CppObject *)CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__);
}