void __fastcall RestrictionBaseMaster___ctor(RestrictionBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418BB4F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string___ctor__, method);
    byte_418BB4F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    443,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionBaseEntity_o *__fastcall RestrictionBaseMaster__GetEntity(
        RestrictionBaseMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418BB50 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_418BB50 = 1;
  }
  PK = RestrictionBaseEntity__CreatePK(questId, questPhase, 0LL);
  return (RestrictionBaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__GetEntity__);
}


bool __fastcall RestrictionBaseMaster__TryGetEntity(
        RestrictionBaseMaster_o *this,
        RestrictionBaseEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418BB51 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__TryGetEntity__, entity);
    byte_418BB51 = 1;
  }
  PK = RestrictionBaseEntity__CreatePK(questId, questPhase, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_RestrictionBaseMaster__RestrictionBaseEntity__string__TryGetEntity__);
}