void __fastcall QuestHintMaster___ctor(QuestHintMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6E32 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__, method);
    byte_4AB6E32 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    439,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestHintEntity_o *__fastcall QuestHintMaster__GetEntity(
        QuestHintMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6E33 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4AB6E33 = 1;
  }
  PK = (Il2CppObject *)QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (QuestHintEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31640E8 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__GetEntity__);
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

  if ( (byte_4AB6E34 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__, entity);
    byte_4AB6E34 = 1;
  }
  PK = (Il2CppObject *)QuestHintEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_QuestHintMaster__QuestHintEntity__string__TryGetEntity__);
}