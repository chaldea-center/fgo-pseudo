void __fastcall WarBoardDataMaster___ctor(WarBoardDataMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4183FEC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string___ctor__, method);
    byte_4183FEC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    333,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardDataEntity_o *__fastcall WarBoardDataMaster__GetEntity(
        WarBoardDataMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4183FEA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4183FEA = 1;
  }
  PK = WarBoardDataEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (WarBoardDataEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardDataMaster__TryGetEntity(
        WarBoardDataMaster_o *this,
        WarBoardDataEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4183FEB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string__TryGetEntity__, entity);
    byte_4183FEB = 1;
  }
  PK = WarBoardDataEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string__TryGetEntity__);
}