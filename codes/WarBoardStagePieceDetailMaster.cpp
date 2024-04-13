void __fastcall WarBoardStagePieceDetailMaster___ctor(WarBoardStagePieceDetailMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EABF4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EABF4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    361,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string___ctor__);
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

  if ( (byte_42EABF2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__GetEntity__,
      stageId,
      forceId,
      *(_QWORD *)&groupId);
    byte_42EABF2 = 1;
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
                                               (const MethodInfo_23FB260 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__GetEntity__);
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

  if ( (byte_42EABF3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__TryGetEntity__,
      (_DWORD)entity,
      stageId,
      *(_QWORD *)&forceId);
    byte_42EABF3 = 1;
  }
  PK = WarBoardStagePieceDetailEntity__CreatePK(stageId, forceId, groupId, pieceIndex, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__TryGetEntity__);
}