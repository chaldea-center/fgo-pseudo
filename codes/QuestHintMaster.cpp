void QuestHintMaster___ctor(QuestHintMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939AB4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__);
    byte_5939AB4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    447,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestHintEntity_o *QuestHintMaster__GetEntity(
        QuestHintMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939AB5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__);
    byte_5939AB5 = 1;
  }
  PK = (Il2CppObject *)QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (QuestHintEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool QuestHintMaster__TryGetEntity(
        QuestHintMaster_o *this,
        QuestHintEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939AB6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__);
    byte_5939AB6 = 1;
  }
  PK = (Il2CppObject *)QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__);
}