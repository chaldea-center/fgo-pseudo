void __fastcall CombineSkillMaster___ctor(CombineSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF40 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__);
    byte_4A5AF40 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    88,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineSkillEntity_o *__fastcall CombineSkillMaster__GetEntity(
        CombineSkillMaster_o *this,
        int32_t id,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AF3E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__);
    byte_4A5AF3E = 1;
  }
  PK = (Il2CppObject *)CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&skillLv);
  return (CombineSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__);
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

  if ( (byte_4A5AF3F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__);
    byte_4A5AF3F = 1;
  }
  PK = (Il2CppObject *)CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__);
}