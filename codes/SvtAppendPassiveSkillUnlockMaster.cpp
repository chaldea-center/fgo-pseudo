void __fastcall SvtAppendPassiveSkillUnlockMaster___ctor(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BC63 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string___ctor__);
    byte_4A5BC63 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    371,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SvtAppendPassiveSkillUnlockEntity_o *__fastcall SvtAppendPassiveSkillUnlockMaster__GetEntity(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BC61 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__GetEntity__);
    byte_4A5BC61 = 1;
  }
  PK = (Il2CppObject *)SvtAppendPassiveSkillUnlockEntity__CreatePK(svtId, num, *(const MethodInfo **)&num);
  return (SvtAppendPassiveSkillUnlockEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  PK,
                                                  (const MethodInfo_311DC8C *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SvtAppendPassiveSkillUnlockMaster__TryGetEntity(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        SvtAppendPassiveSkillUnlockEntity_o **entity,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BC62 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__TryGetEntity__);
    byte_4A5BC62 = 1;
  }
  PK = (Il2CppObject *)SvtAppendPassiveSkillUnlockEntity__CreatePK(svtId, num, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__TryGetEntity__);
}