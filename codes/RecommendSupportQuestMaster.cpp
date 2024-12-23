void __fastcall RecommendSupportQuestMaster___ctor(RecommendSupportQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B671D9 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string___ctor__,
      method);
    byte_4B671D9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    516,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RecommendSupportQuestEntity_o *__fastcall RecommendSupportQuestMaster__GetEntity(
        RecommendSupportQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B671DA & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4B671DA = 1;
  }
  PK = (Il2CppObject *)RecommendSupportQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (RecommendSupportQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31FDB1C *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__GetEntity__);
}


RecommendSupportQuestEntity_array *__fastcall RecommendSupportQuestMaster__GetList(
        RecommendSupportQuestMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B671D8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_getEntitys_RecommendSupportQuestEntity___, method);
    byte_4B671D8 = 1;
  }
  return (RecommendSupportQuestEntity_array *)DataMasterBase__getEntitys_object_(
                                                (DataMasterBase_o *)this,
                                                (const MethodInfo_2F599A4 *)Method_DataMasterBase_getEntitys_RecommendSupportQuestEntity___);
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

  if ( (byte_4B671DB & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__TryGetEntity__,
      entity);
    byte_4B671DB = 1;
  }
  PK = (Il2CppObject *)RecommendSupportQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__TryGetEntity__);
}