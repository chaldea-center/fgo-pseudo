void WarBoardDataMaster___ctor(WarBoardDataMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939863 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string___ctor__);
    byte_5939863 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    343,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardDataEntity_o *WarBoardDataMaster__GetEntity(
        WarBoardDataMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939861 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string__GetEntity__);
    byte_5939861 = 1;
  }
  PK = (Il2CppObject *)WarBoardDataEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (WarBoardDataEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3EE2044 *)Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardDataMaster__TryGetEntity(
        WarBoardDataMaster_o *this,
        WarBoardDataEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939862 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string__TryGetEntity__);
    byte_5939862 = 1;
  }
  PK = (Il2CppObject *)WarBoardDataEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_WarBoardDataMaster__WarBoardDataEntity__string__TryGetEntity__);
}