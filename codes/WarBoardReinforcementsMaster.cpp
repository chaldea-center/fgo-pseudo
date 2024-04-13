void __fastcall WarBoardReinforcementsMaster___ctor(WarBoardReinforcementsMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAB32 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAB32 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    338,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardReinforcementsEntity_o *__fastcall WarBoardReinforcementsMaster__GetEntity(
        WarBoardReinforcementsMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *PK; // x1

  if ( (byte_42EAB30 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__GetEntity__,
      id,
      (_DWORD)method,
      v3);
    byte_42EAB30 = 1;
  }
  PK = WarBoardReinforcementsEntity__CreatePK(id, *(const MethodInfo **)&id);
  return (WarBoardReinforcementsEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23FB260 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__GetEntity__);
}


bool __fastcall WarBoardReinforcementsMaster__TryGetEntity(
        WarBoardReinforcementsMaster_o *this,
        WarBoardReinforcementsEntity_o **entity,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EAB31 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      method);
    byte_42EAB31 = 1;
  }
  PK = WarBoardReinforcementsEntity__CreatePK(id, (const MethodInfo *)entity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__TryGetEntity__);
}