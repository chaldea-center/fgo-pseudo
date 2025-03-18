void __fastcall RecommendSupportQuestMaster___ctor(RecommendSupportQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C225B7 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string___ctor__,
      method);
    byte_4C225B7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    519,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RecommendSupportQuestEntity_o *__fastcall RecommendSupportQuestMaster__GetEntity(
        RecommendSupportQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C225B8 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4C225B8 = 1;
  }
  PK = (Il2CppObject *)RecommendSupportQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questPhase);
  return (RecommendSupportQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_329F900 *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__GetEntity__);
}


RecommendSupportQuestEntity_array *__fastcall RecommendSupportQuestMaster__GetList(
        RecommendSupportQuestMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4C225B6 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__getEntitys_RecommendSupportQuestEntity___,
      method);
    byte_4C225B6 = 1;
  }
  v3 = sub_1C3B898(*((_QWORD *)&this->klass->vtable._1_Finalize.methodPtr
                   + 2
                   * *((unsigned __int16 *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__getEntitys_RecommendSupportQuestEntity___
                     + 40)));
  return (RecommendSupportQuestEntity_array *)(*(__int64 (__fastcall **)(RecommendSupportQuestMaster_o *, __int64))(v3 + 8))(
                                                this,
                                                v3);
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

  if ( (byte_4C225B9 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__TryGetEntity__,
      entity);
    byte_4C225B9 = 1;
  }
  PK = (Il2CppObject *)RecommendSupportQuestEntity__CreatePK(questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_RecommendSupportQuestMaster__RecommendSupportQuestEntity__string__TryGetEntity__);
}