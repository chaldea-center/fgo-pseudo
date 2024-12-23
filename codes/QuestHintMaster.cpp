void __fastcall QuestHintMaster___ctor(QuestHintMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67D00 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__, method);
    byte_4B67D00 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    443,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestHintEntity_o *__fastcall QuestHintMaster__GetEntity(
        QuestHintMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67D01 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4B67D01 = 1;
  }
  PK = (Il2CppObject *)QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (QuestHintEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31FDB1C *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__);
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

  if ( (byte_4B67D02 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__, entity);
    byte_4B67D02 = 1;
  }
  PK = (Il2CppObject *)QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__);
}