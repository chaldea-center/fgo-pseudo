void __fastcall WarBoardQuestMaster___ctor(WarBoardQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D1FF & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string___ctor__);
    byte_438D1FF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    333,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardQuestEntity_o *__fastcall WarBoardQuestMaster__GetEntity(
        WarBoardQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438D1FD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__GetEntity__);
    byte_438D1FD = 1;
  }
  PK = WarBoardQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (WarBoardQuestEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardQuestMaster__TryGetEntity(
        WarBoardQuestMaster_o *this,
        WarBoardQuestEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438D1FE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__TryGetEntity__);
    byte_438D1FE = 1;
  }
  PK = WarBoardQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__TryGetEntity__);
}