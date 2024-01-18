void __fastcall WarBoardStagePieceDetailMaster___ctor(WarBoardStagePieceDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189312 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string___ctor__,
      method);
    byte_4189312 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    360,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string___ctor__);
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

  if ( (byte_4189310 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_4189310 = 1;
  }
  PK = WarBoardStagePieceDetailEntity__CreatePK(
         stageId,
         forceId,
         groupId,
         pieceIndex,
         *(const MethodInfo **)&pieceIndex);
  return (WarBoardStagePieceDetailEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_24E4520 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__GetEntity__);
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

  if ( (byte_4189311 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__TryGetEntity__,
      entity);
    byte_4189311 = 1;
  }
  PK = WarBoardStagePieceDetailEntity__CreatePK(stageId, forceId, groupId, pieceIndex, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__TryGetEntity__);
}