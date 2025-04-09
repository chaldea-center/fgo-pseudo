void __fastcall WarBoardStagePieceDetailMaster___ctor(WarBoardStagePieceDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBF9E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string___ctor__,
      method);
    byte_49BBF9E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    368,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string___ctor__);
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
  Il2CppObject *PK; // x1

  if ( (byte_49BBF9C & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_49BBF9C = 1;
  }
  PK = (Il2CppObject *)WarBoardStagePieceDetailEntity__CreatePK(
                         stageId,
                         forceId,
                         groupId,
                         pieceIndex,
                         *(const MethodInfo **)&pieceIndex);
  return (WarBoardStagePieceDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_31A2454 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_49BBF9D & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__TryGetEntity__,
      entity);
    byte_49BBF9D = 1;
  }
  PK = (Il2CppObject *)WarBoardStagePieceDetailEntity__CreatePK(
                         stageId,
                         forceId,
                         groupId,
                         pieceIndex,
                         *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_WarBoardStagePieceDetailMaster__WarBoardStagePieceDetailEntity__string__TryGetEntity__);
}