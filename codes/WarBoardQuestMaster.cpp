void __fastcall WarBoardQuestMaster___ctor(WarBoardQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2EF19 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string___ctor__, method);
    byte_4A2EF19 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    334,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardQuestEntity_o *__fastcall WarBoardQuestMaster__GetEntity(
        WarBoardQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A2EF17 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4A2EF17 = 1;
  }
  PK = (Il2CppObject *)WarBoardQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (WarBoardQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30FFAD8 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardQuestMaster__TryGetEntity(
        WarBoardQuestMaster_o *this,
        WarBoardQuestEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A2EF18 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__TryGetEntity__, entity);
    byte_4A2EF18 = 1;
  }
  PK = (Il2CppObject *)WarBoardQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__TryGetEntity__);
}