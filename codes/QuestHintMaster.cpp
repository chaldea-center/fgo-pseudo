void __fastcall QuestHintMaster___ctor(QuestHintMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFBC7 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__, method);
    byte_49FFBC7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    439,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestHintEntity_o *__fastcall QuestHintMaster__GetEntity(
        QuestHintMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FFBC8 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_49FFBC8 = 1;
  }
  PK = (Il2CppObject *)QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (QuestHintEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D6AF0 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestHintMaster__TryGetEntity(
        QuestHintMaster_o *this,
        QuestHintEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FFBC9 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__, entity);
    byte_49FFBC9 = 1;
  }
  PK = (Il2CppObject *)QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__);
}