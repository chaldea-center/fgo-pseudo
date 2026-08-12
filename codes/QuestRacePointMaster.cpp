void QuestRacePointMaster___ctor(QuestRacePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970FE6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string___ctor__);
    byte_5970FE6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    221,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRacePointEntity_o *QuestRacePointMaster__GetEntity(
        QuestRacePointMaster_o *this,
        int32_t questId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970FE4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__GetEntity__);
    sub_2213A60(&QuestRacePointEntity_TypeInfo);
    byte_5970FE4 = 1;
  }
  if ( !*(&QuestRacePointEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo, *(_QWORD *)&questId);
  PK = (Il2CppObject *)QuestRacePointEntity__CreatePK(questId, itemId, 0);
  return (QuestRacePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3F157EC *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__GetEntity__);
}


bool QuestRacePointMaster__TryGetEntity(
        QuestRacePointMaster_o *this,
        QuestRacePointEntity_o **entity,
        int32_t questId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970FE5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__TryGetEntity__);
    sub_2213A60(&QuestRacePointEntity_TypeInfo);
    byte_5970FE5 = 1;
  }
  if ( !*(&QuestRacePointEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo, entity);
  PK = (Il2CppObject *)QuestRacePointEntity__CreatePK(questId, itemId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__TryGetEntity__);
}