void QuestPhaseIndividualityMaster___ctor(QuestPhaseIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF91C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string___ctor__);
    byte_4CEF91C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    507,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string___ctor__);
}


QuestPhaseIndividualityEntity_o *QuestPhaseIndividualityMaster__GetEntity(
        QuestPhaseIndividualityMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF91D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string__GetEntity__);
    byte_4CEF91D = 1;
  }
  PK = (Il2CppObject *)QuestPhaseIndividualityEntity__CreatePK(questId, phase, 0);
  return (QuestPhaseIndividualityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_3432DB4 *)Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string__GetEntity__);
}


bool QuestPhaseIndividualityMaster__TryGetEntity(
        QuestPhaseIndividualityMaster_o *this,
        QuestPhaseIndividualityEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF91E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string__TryGetEntity__);
    byte_4CEF91E = 1;
  }
  PK = (Il2CppObject *)QuestPhaseIndividualityEntity__CreatePK(questId, phase, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_QuestPhaseIndividualityMaster__QuestPhaseIndividualityEntity__string__TryGetEntity__);
}