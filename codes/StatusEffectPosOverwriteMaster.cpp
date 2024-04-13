void __fastcall StatusEffectPosOverwriteMaster___ctor(StatusEffectPosOverwriteMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9321 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9321 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    300,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StatusEffectPosOverwriteEntity_o *__fastcall StatusEffectPosOverwriteMaster__GetEntity(
        StatusEffectPosOverwriteMaster_o *this,
        int32_t statusEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E931F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__GetEntity__,
      statusEffectId,
      svtId,
      *(_QWORD *)&svtLimitCount);
    byte_42E931F = 1;
  }
  PK = StatusEffectPosOverwriteEntity__CreatePK(
         statusEffectId,
         svtId,
         svtLimitCount,
         *(const MethodInfo **)&svtLimitCount);
  return (StatusEffectPosOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_23FB260 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__GetEntity__);
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
  System_String_o *PK; // x2

  if ( (byte_42E9320 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__TryGetEntity__,
      (_DWORD)entity,
      statusEffectId,
      *(_QWORD *)&svtId);
    byte_42E9320 = 1;
  }
  PK = StatusEffectPosOverwriteEntity__CreatePK(statusEffectId, svtId, svtLimitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__TryGetEntity__);
}