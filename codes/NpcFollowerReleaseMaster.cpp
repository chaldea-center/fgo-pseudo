void __fastcall NpcFollowerReleaseMaster___ctor(NpcFollowerReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ADAFE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string___ctor__);
    byte_42ADAFE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    274,
    (const MethodInfo_23E268C *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string___ctor__);
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

  if ( (byte_42ADAFC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__GetEntity__);
    byte_42ADAFC = 1;
  }
  PK = NpcFollowerReleaseEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23E2728 *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__GetEntity__);
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

  if ( (byte_42ADAFD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__TryGetEntity__);
    byte_42ADAFD = 1;
  }
  PK = NpcFollowerReleaseEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_NpcFollowerReleaseMaster__NpcFollowerReleaseEntity__string__TryGetEntity__);
}