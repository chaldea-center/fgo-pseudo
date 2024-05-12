void __fastcall WarBoardStagePieceDetailMaster___ctor(WarBoardStagePieceDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D2D6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string___ctor__);
    byte_438D2D6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    361,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStagePieceDetailEntity_o *__fastcall WarBoardStagePieceDetailMaster__GetEntity(
        WarBoardStagePieceDetailMaster_o *this,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438D2D4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__GetEntity__);
    byte_438D2D4 = 1;
  }
  PK = WarBoardStagePieceDetailEntity__CreatePK(
         stageId,
         forceId,
         groupId,
         pieceIndex,
         *(const MethodInfo **)&pieceIndex);
  return (WarBoardStagePieceDetailEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_21FBCE4 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStagePieceDetailMaster__TryGetEntity(
        WarBoardStagePieceDetailMaster_o *this,
        WarBoardStagePieceDetailEntity_o **entity,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438D2D5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__TryGetEntity__);
    byte_438D2D5 = 1;
  }
  PK = WarBoardStagePieceDetailEntity__CreatePK(stageId, forceId, groupId, pieceIndex, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__TryGetEntity__);
}