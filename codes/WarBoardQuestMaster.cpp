void __fastcall WarBoardQuestMaster___ctor(WarBoardQuestMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAB1D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EAB1D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    333,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardQuestEntity_o *__fastcall WarBoardQuestMaster__GetEntity(
        WarBoardQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EAB1B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__GetEntity__,
      questId,
      questPhase,
      method);
    byte_42EAB1B = 1;
  }
  PK = WarBoardQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (WarBoardQuestEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__GetEntity__);
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

  if ( (byte_42EAB1C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&questPhase);
    byte_42EAB1C = 1;
  }
  PK = WarBoardQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__TryGetEntity__);
}