void __fastcall WarBoardStageWallMaster___ctor(WarBoardStageWallMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C1B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string___ctor__);
    byte_4A5C1B6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    328,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageWallEntity_o *__fastcall WarBoardStageWallMaster__GetEntity(
        WarBoardStageWallMaster_o *this,
        int32_t stageId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C1B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string__GetEntity__);
    byte_4A5C1B7 = 1;
  }
  PK = (Il2CppObject *)WarBoardStageWallEntity__CreatePK(stageId, id, *(const MethodInfo **)&id);
  return (WarBoardStageWallEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_311DC8C *)Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageWallMaster__TryGetEntity(
        WarBoardStageWallMaster_o *this,
        WarBoardStageWallEntity_o **entity,
        int32_t stageId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5C1B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string__TryGetEntity__);
    byte_4A5C1B8 = 1;
  }
  PK = (Il2CppObject *)WarBoardStageWallEntity__CreatePK(stageId, id, *(const MethodInfo **)&stageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_WarBoardStageWallMaster__WarBoardStageWallEntity__string__TryGetEntity__);
}