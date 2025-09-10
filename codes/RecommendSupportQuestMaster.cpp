void RecommendSupportQuestMaster___ctor(RecommendSupportQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A90 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string___ctor__);
    byte_4C27A90 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    519,
    (const MethodInfo_338A52C *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RecommendSupportQuestEntity_o *RecommendSupportQuestMaster__GetEntity(
        RecommendSupportQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27A91 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__GetEntity__);
    byte_4C27A91 = 1;
  }
  PK = (Il2CppObject *)RecommendSupportQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (RecommendSupportQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_338C850 *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__GetEntity__);
}


RecommendSupportQuestEntity_array *RecommendSupportQuestMaster__GetList(
        RecommendSupportQuestMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C27A8F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__getEntitys__);
    byte_4C27A8F = 1;
  }
  return (RecommendSupportQuestEntity_array *)DataMasterBase_object__object__object___getEntitys(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                (const MethodInfo_338BAD4 *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__getEntitys__);
}


// local variable allocation has failed, the output may be wrong!
bool RecommendSupportQuestMaster__TryGetEntity(
        RecommendSupportQuestMaster_o *this,
        RecommendSupportQuestEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27A92 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__TryGetEntity__);
    byte_4C27A92 = 1;
  }
  PK = (Il2CppObject *)RecommendSupportQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__TryGetEntity__);
}