void __fastcall QuestHintMaster___ctor(QuestHintMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C22F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__);
    byte_4A5C22F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    439,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestHintEntity_o *__fastcall QuestHintMaster__GetEntity(
        QuestHintMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C230 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__);
    byte_4A5C230 = 1;
  }
  PK = (Il2CppObject *)QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (QuestHintEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__);
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

  if ( (byte_4A5C231 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__);
    byte_4A5C231 = 1;
  }
  PK = (Il2CppObject *)QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__);
}