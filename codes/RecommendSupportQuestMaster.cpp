void RecommendSupportQuestMaster___ctor(RecommendSupportQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEE57 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string___ctor__);
    byte_4CEEE57 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    519,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RecommendSupportQuestEntity_o *RecommendSupportQuestMaster__GetEntity(
        RecommendSupportQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEE58 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__GetEntity__);
    byte_4CEEE58 = 1;
  }
  PK = (Il2CppObject *)RecommendSupportQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (RecommendSupportQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3432DB4 *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__GetEntity__);
}


RecommendSupportQuestEntity_array *RecommendSupportQuestMaster__GetList(
        RecommendSupportQuestMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEEE56 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__getEntitys__);
    byte_4CEEE56 = 1;
  }
  return (RecommendSupportQuestEntity_array *)DataMasterBase_object__object__object___getEntitys(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                (const MethodInfo_3432038 *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__getEntitys__);
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

  if ( (byte_4CEEE59 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__TryGetEntity__);
    byte_4CEEE59 = 1;
  }
  PK = (Il2CppObject *)RecommendSupportQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__TryGetEntity__);
}