void __fastcall WarBoardStageWallMaster___ctor(WarBoardStageWallMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D2E1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string___ctor__);
    byte_438D2E1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    327,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageWallEntity_o *__fastcall WarBoardStageWallMaster__GetEntity(
        WarBoardStageWallMaster_o *this,
        int32_t stageId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438D2E2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string__GetEntity__);
    byte_438D2E2 = 1;
  }
  PK = WarBoardStageWallEntity__CreatePK(stageId, id, *(const MethodInfo **)&id);
  return (WarBoardStageWallEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_21FBCE4 *)Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageWallMaster__TryGetEntity(
        WarBoardStageWallMaster_o *this,
        WarBoardStageWallEntity_o **entity,
        int32_t stageId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438D2E3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string__TryGetEntity__);
    byte_438D2E3 = 1;
  }
  PK = WarBoardStageWallEntity__CreatePK(stageId, id, *(const MethodInfo **)&stageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string__TryGetEntity__);
}