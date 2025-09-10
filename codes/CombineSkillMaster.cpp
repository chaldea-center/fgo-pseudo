void CombineSkillMaster___ctor(CombineSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2708B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__);
    byte_4C2708B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    92,
    (const MethodInfo_338A52C *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineSkillEntity_o *CombineSkillMaster__GetEntity(
        CombineSkillMaster_o *this,
        int32_t id,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27089 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__);
    byte_4C27089 = 1;
  }
  PK = (Il2CppObject *)CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&skillLv);
  return (CombineSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_338C850 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool CombineSkillMaster__TryGetEntity(
        CombineSkillMaster_o *this,
        CombineSkillEntity_o **entity,
        int32_t id,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2708A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__);
    byte_4C2708A = 1;
  }
  PK = (Il2CppObject *)CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__);
}