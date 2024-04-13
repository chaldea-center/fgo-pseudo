void __fastcall AuraEffectPosOverwriteMaster___ctor(AuraEffectPosOverwriteMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBD91 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBD91 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    240,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AuraEffectPosOverwriteEntity_o *__fastcall AuraEffectPosOverwriteMaster__GetEntity(
        AuraEffectPosOverwriteMaster_o *this,
        int32_t auraEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EBD8F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__GetEntity__,
      auraEffectId,
      svtId,
      *(_QWORD *)&svtLimitCount);
    byte_42EBD8F = 1;
  }
  PK = AuraEffectPosOverwriteEntity__CreatePK(auraEffectId, svtId, svtLimitCount, *(const MethodInfo **)&svtLimitCount);
  return (AuraEffectPosOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23FB260 *)Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__GetEntity__);
}


bool __fastcall AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(
        int32_t svtId,
        int32_t limitCount,
        int32_t effectId,
        AuraEffectPosOverwriteEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B5D69C(svtId, limitCount);
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
  System_String_o *PK; // x2

  if ( (byte_42EBD90 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__TryGetEntity__,
      (_DWORD)entity,
      auraEffectId,
      *(_QWORD *)&svtId);
    byte_42EBD90 = 1;
  }
  PK = AuraEffectPosOverwriteEntity__CreatePK(auraEffectId, svtId, svtLimitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__TryGetEntity__);
}