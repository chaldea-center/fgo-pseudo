void __fastcall StatusEffectPosOverwriteMaster___ctor(StatusEffectPosOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70961 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string___ctor__,
      method);
    byte_4A70961 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    301,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StatusEffectPosOverwriteEntity_o *__fastcall StatusEffectPosOverwriteMaster__GetEntity(
        StatusEffectPosOverwriteMaster_o *this,
        int32_t statusEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A7095F & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&statusEffectId);
    byte_4A7095F = 1;
  }
  PK = (Il2CppObject *)StatusEffectPosOverwriteEntity__CreatePK(
                         statusEffectId,
                         svtId,
                         svtLimitCount,
                         *(const MethodInfo **)&svtLimitCount);
  return (StatusEffectPosOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_312C900 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall StatusEffectPosOverwriteMaster__TryGetEntity(
        StatusEffectPosOverwriteMaster_o *this,
        StatusEffectPosOverwriteEntity_o **entity,
        int32_t statusEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A70960 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_4A70960 = 1;
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
           (const MethodInfo_312C950 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__TryGetEntity__);
}