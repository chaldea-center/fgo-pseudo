void __fastcall WarBoardReinforcementsMaster___ctor(WarBoardReinforcementsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B21D3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string___ctor__);
    byte_42B21D3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    338,
    (const MethodInfo_23E268C *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardReinforcementsEntity_o *__fastcall WarBoardReinforcementsMaster__GetEntity(
        WarBoardReinforcementsMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B21D1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__GetEntity__);
    byte_42B21D1 = 1;
  }
  PK = WarBoardReinforcementsEntity__CreatePK(id, *(const MethodInfo **)&id);
  return (WarBoardReinforcementsEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23E2728 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__GetEntity__);
}


bool __fastcall WarBoardReinforcementsMaster__TryGetEntity(
        WarBoardReinforcementsMaster_o *this,
        WarBoardReinforcementsEntity_o **entity,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B21D2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__TryGetEntity__);
    byte_42B21D2 = 1;
  }
  PK = WarBoardReinforcementsEntity__CreatePK(id, (const MethodInfo *)entity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__TryGetEntity__);
}