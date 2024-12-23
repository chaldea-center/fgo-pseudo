void __fastcall RestrictionBaseMaster___ctor(RestrictionBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67D06 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string___ctor__, method);
    byte_4B67D06 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    449,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionBaseEntity_o *__fastcall RestrictionBaseMaster__GetEntity(
        RestrictionBaseMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67D07 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4B67D07 = 1;
  }
  PK = (Il2CppObject *)RestrictionBaseEntity__CreatePK(questId, questPhase, 0LL);
  return (RestrictionBaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31FDB1C *)Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__GetEntity__);
}


bool __fastcall RestrictionBaseMaster__TryGetEntity(
        RestrictionBaseMaster_o *this,
        RestrictionBaseEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67D08 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__TryGetEntity__, entity);
    byte_4B67D08 = 1;
  }
  PK = (Il2CppObject *)RestrictionBaseEntity__CreatePK(questId, questPhase, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__TryGetEntity__);
}