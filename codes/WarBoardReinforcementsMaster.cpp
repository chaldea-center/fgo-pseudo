void WarBoardReinforcementsMaster___ctor(WarBoardReinforcementsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA8D & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string___ctor__);
    byte_4D2DA8D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    345,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardReinforcementsEntity_o *WarBoardReinforcementsMaster__GetEntity(
        WarBoardReinforcementsMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2DA8B & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__GetEntity__);
    byte_4D2DA8B = 1;
  }
  PK = (Il2CppObject *)WarBoardReinforcementsEntity__CreatePK(id, *(const MethodInfo **)&id);
  return (WarBoardReinforcementsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_345FF78 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__GetEntity__);
}


bool WarBoardReinforcementsMaster__TryGetEntity(
        WarBoardReinforcementsMaster_o *this,
        WarBoardReinforcementsEntity_o **entity,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2DA8C & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__TryGetEntity__);
    byte_4D2DA8C = 1;
  }
  PK = (Il2CppObject *)WarBoardReinforcementsEntity__CreatePK(id, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_WarBoardReinforcementsMaster__WarBoardReinforcementsEntity__string__TryGetEntity__);
}