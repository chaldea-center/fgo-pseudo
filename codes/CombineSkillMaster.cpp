void CombineSkillMaster___ctor(CombineSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938439 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__);
    byte_5938439 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    92,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineSkillEntity_o *CombineSkillMaster__GetEntity(
        CombineSkillMaster_o *this,
        int32_t id,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938437 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__);
    byte_5938437 = 1;
  }
  PK = (Il2CppObject *)CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&skillLv);
  return (CombineSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3EE2044 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__);
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

  if ( (byte_5938438 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__);
    byte_5938438 = 1;
  }
  PK = (Il2CppObject *)CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__);
}