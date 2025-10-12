void CombineAppendPassiveSkillMaster___ctor(CombineAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37757 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string___ctor__);
    byte_4C37757 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    378,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineAppendPassiveSkillEntity_o *CombineAppendPassiveSkillMaster__GetEntity(
        CombineAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37755 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__GetEntity__);
    byte_4C37755 = 1;
  }
  PK = (Il2CppObject *)CombineAppendPassiveSkillEntity__CreatePK(svtId, num, skillLv, *(const MethodInfo **)&skillLv);
  return (CombineAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_339B2F0 *)Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__GetEntity__);
}


CombineAppendPassiveSkillEntity_o *CombineAppendPassiveSkillMaster__GetEntityWithTryNum(
        CombineAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v9; // x4
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  entity = 0;
  if ( CombineAppendPassiveSkillMaster__TryGetEntity(this, &entity, svtId, num, skillLv, v5) )
    return entity;
  else
    return CombineAppendPassiveSkillMaster__GetEntity(this, svtId, 0, skillLv, v9);
}


// local variable allocation has failed, the output may be wrong!
bool CombineAppendPassiveSkillMaster__TryGetEntity(
        CombineAppendPassiveSkillMaster_o *this,
        CombineAppendPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37756 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__TryGetEntity__);
    byte_4C37756 = 1;
  }
  PK = (Il2CppObject *)CombineAppendPassiveSkillEntity__CreatePK(svtId, num, skillLv, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
        CombineAppendPassiveSkillMaster_o *this,
        CombineAppendPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x5

  return CombineAppendPassiveSkillMaster__TryGetEntity(this, entity, svtId, num, skillLv, method)
      || CombineAppendPassiveSkillMaster__TryGetEntity(this, entity, svtId, 0, skillLv, v10);
}