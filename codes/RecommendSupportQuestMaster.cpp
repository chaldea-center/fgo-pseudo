void __fastcall RecommendSupportQuestMaster___ctor(RecommendSupportQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B744 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string___ctor__);
    byte_4A5B744 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    512,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RecommendSupportQuestEntity_o *__fastcall RecommendSupportQuestMaster__GetEntity(
        RecommendSupportQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B745 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__GetEntity__);
    byte_4A5B745 = 1;
  }
  PK = (Il2CppObject *)RecommendSupportQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (RecommendSupportQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__GetEntity__);
}


RecommendSupportQuestEntity_array *__fastcall RecommendSupportQuestMaster__GetList(
        RecommendSupportQuestMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B743 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_getEntitys_RecommendSupportQuestEntity___);
    byte_4A5B743 = 1;
  }
  return (RecommendSupportQuestEntity_array *)DataMasterBase__getEntitys_object_(
                                                (DataMasterBase_o *)this,
                                                (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_RecommendSupportQuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportQuestMaster__TryGetEntity(
        RecommendSupportQuestMaster_o *this,
        RecommendSupportQuestEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B746 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__TryGetEntity__);
    byte_4A5B746 = 1;
  }
  PK = (Il2CppObject *)RecommendSupportQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__TryGetEntity__);
}