void __fastcall NpcFollowerReleaseMaster___ctor(NpcFollowerReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418510E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string___ctor__, method);
    byte_418510E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    273,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerReleaseEntity_o *__fastcall NpcFollowerReleaseMaster__GetEntity(
        NpcFollowerReleaseMaster_o *this,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418510C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__GetEntity__, id);
    byte_418510C = 1;
  }
  PK = NpcFollowerReleaseEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall NpcFollowerReleaseMaster__TryGetEntity(
        NpcFollowerReleaseMaster_o *this,
        NpcFollowerReleaseEntity_o **entity,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418510D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__TryGetEntity__,
      entity);
    byte_418510D = 1;
  }
  PK = NpcFollowerReleaseEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__TryGetEntity__);
}