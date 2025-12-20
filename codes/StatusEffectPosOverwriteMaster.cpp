void StatusEffectPosOverwriteMaster___ctor(StatusEffectPosOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D51E & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string___ctor__);
    byte_4D2D51E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    307,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StatusEffectPosOverwriteEntity_o *StatusEffectPosOverwriteMaster__GetEntity(
        StatusEffectPosOverwriteMaster_o *this,
        int32_t statusEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D51C & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__GetEntity__);
    byte_4D2D51C = 1;
  }
  PK = (Il2CppObject *)StatusEffectPosOverwriteEntity__CreatePK(
                         statusEffectId,
                         svtId,
                         svtLimitCount,
                         *(const MethodInfo **)&svtLimitCount);
  return (StatusEffectPosOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_345FF78 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool StatusEffectPosOverwriteMaster__TryGetEntity(
        StatusEffectPosOverwriteMaster_o *this,
        StatusEffectPosOverwriteEntity_o **entity,
        int32_t statusEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D51D & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__TryGetEntity__);
    byte_4D2D51D = 1;
  }
  PK = (Il2CppObject *)StatusEffectPosOverwriteEntity__CreatePK(
                         statusEffectId,
                         svtId,
                         svtLimitCount,
                         *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__TryGetEntity__);
}