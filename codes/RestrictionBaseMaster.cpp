void RestrictionBaseMaster___ctor(RestrictionBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939ABC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string___ctor__);
    byte_5939ABC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    453,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string___ctor__);
}


RestrictionBaseEntity_o *RestrictionBaseMaster__GetEntity(
        RestrictionBaseMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939ABD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__GetEntity__);
    byte_5939ABD = 1;
  }
  PK = (Il2CppObject *)RestrictionBaseEntity__CreatePK(questId, questPhase, 0);
  return (RestrictionBaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__GetEntity__);
}


bool RestrictionBaseMaster__TryGetEntity(
        RestrictionBaseMaster_o *this,
        RestrictionBaseEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939ABE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__TryGetEntity__);
    byte_5939ABE = 1;
  }
  PK = (Il2CppObject *)RestrictionBaseEntity__CreatePK(questId, questPhase, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__TryGetEntity__);
}