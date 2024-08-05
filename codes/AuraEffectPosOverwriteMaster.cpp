void __fastcall AuraEffectPosOverwriteMaster___ctor(AuraEffectPosOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE16D & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string___ctor__,
      method);
    byte_49FE16D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    241,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AuraEffectPosOverwriteEntity_o *__fastcall AuraEffectPosOverwriteMaster__GetEntity(
        AuraEffectPosOverwriteMaster_o *this,
        int32_t auraEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE16B & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&auraEffectId);
    byte_49FE16B = 1;
  }
  PK = (Il2CppObject *)AuraEffectPosOverwriteEntity__CreatePK(
                         auraEffectId,
                         svtId,
                         svtLimitCount,
                         *(const MethodInfo **)&svtLimitCount);
  return (AuraEffectPosOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_30D64D8 *)Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__GetEntity__);
}


bool __fastcall AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(
        int32_t svtId,
        int32_t limitCount,
        int32_t effectId,
        AuraEffectPosOverwriteEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B64ACC(svtId, limitCount);
  return ent->fields.auraEffectId == effectId && ent->fields.svtId == svtId && ent->fields.svtLimitCount == limitCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AuraEffectPosOverwriteMaster__TryGetEntity(
        AuraEffectPosOverwriteMaster_o *this,
        AuraEffectPosOverwriteEntity_o **entity,
        int32_t auraEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE16C & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_49FE16C = 1;
  }
  PK = (Il2CppObject *)AuraEffectPosOverwriteEntity__CreatePK(
                         auraEffectId,
                         svtId,
                         svtLimitCount,
                         *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__TryGetEntity__);
}