void __fastcall WarBoardReinforcementsMaster___ctor(WarBoardReinforcementsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFAFF & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string___ctor__,
      method);
    byte_49FFAFF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    339,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardReinforcementsEntity_o *__fastcall WarBoardReinforcementsMaster__GetEntity(
        WarBoardReinforcementsMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FFAFD & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49FFAFD = 1;
  }
  PK = (Il2CppObject *)WarBoardReinforcementsEntity__CreatePK(id, *(const MethodInfo **)&id);
  return (WarBoardReinforcementsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_30D6AF0 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__GetEntity__);
}


bool __fastcall WarBoardReinforcementsMaster__TryGetEntity(
        WarBoardReinforcementsMaster_o *this,
        WarBoardReinforcementsEntity_o **entity,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FFAFE & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__TryGetEntity__,
      entity);
    byte_49FFAFE = 1;
  }
  PK = (Il2CppObject *)WarBoardReinforcementsEntity__CreatePK(id, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__TryGetEntity__);
}