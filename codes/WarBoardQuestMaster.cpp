void WarBoardQuestMaster___ctor(WarBoardQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA78 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string___ctor__);
    byte_4D2DA78 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    340,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardQuestEntity_o *WarBoardQuestMaster__GetEntity(
        WarBoardQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2DA76 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__GetEntity__);
    byte_4D2DA76 = 1;
  }
  PK = (Il2CppObject *)WarBoardQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (WarBoardQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_345FF78 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardQuestMaster__TryGetEntity(
        WarBoardQuestMaster_o *this,
        WarBoardQuestEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2DA77 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__TryGetEntity__);
    byte_4D2DA77 = 1;
  }
  PK = (Il2CppObject *)WarBoardQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_WarBoardQuestMaster__WarBoardQuestEntity__string__TryGetEntity__);
}