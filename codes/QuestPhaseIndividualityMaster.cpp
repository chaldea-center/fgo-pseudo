void __fastcall QuestPhaseIndividualityMaster___ctor(QuestPhaseIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67D03 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string___ctor__,
      method);
    byte_4B67D03 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    504,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseIndividualityEntity_o *__fastcall QuestPhaseIndividualityMaster__GetEntity(
        QuestPhaseIndividualityMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67D04 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4B67D04 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseIndividualityEntity__CreatePK(questId, phase, 0LL);
  return (QuestPhaseIndividualityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_31FDB1C *)Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string__GetEntity__);
}


bool __fastcall QuestPhaseIndividualityMaster__TryGetEntity(
        QuestPhaseIndividualityMaster_o *this,
        QuestPhaseIndividualityEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67D05 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string__TryGetEntity__,
      entity);
    byte_4B67D05 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseIndividualityEntity__CreatePK(questId, phase, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string__TryGetEntity__);
}