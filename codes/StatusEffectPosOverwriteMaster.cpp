void __fastcall StatusEffectPosOverwriteMaster___ctor(StatusEffectPosOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188C8C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string___ctor__,
      method);
    byte_4188C8C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    299,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string___ctor__);
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

  if ( (byte_4188C8A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&statusEffectId);
    byte_4188C8A = 1;
  }
  PK = StatusEffectPosOverwriteEntity__CreatePK(
         statusEffectId,
         svtId,
         svtLimitCount,
         *(const MethodInfo **)&svtLimitCount);
  return (StatusEffectPosOverwriteEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_24E4520 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__GetEntity__);
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

  if ( (byte_4188C8B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_4188C8B = 1;
  }
  PK = StatusEffectPosOverwriteEntity__CreatePK(statusEffectId, svtId, svtLimitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_StatusEffectPosOverwriteMaster__StatusEffectPosOverwriteEntity__string__TryGetEntity__);
}