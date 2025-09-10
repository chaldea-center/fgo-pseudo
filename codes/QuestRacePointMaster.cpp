void QuestRacePointMaster___ctor(QuestRacePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C279F2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string___ctor__);
    byte_4C279F2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    219,
    (const MethodInfo_338A52C *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRacePointEntity_o *QuestRacePointMaster__GetEntity(
        QuestRacePointMaster_o *this,
        int32_t questId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C279F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__GetEntity__);
    sub_1C2D490(&QuestRacePointEntity_TypeInfo);
    byte_4C279F0 = 1;
  }
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  PK = (Il2CppObject *)QuestRacePointEntity__CreatePK(questId, itemId, *(const MethodInfo **)&itemId);
  return (QuestRacePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_338C850 *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool QuestRacePointMaster__TryGetEntity(
        QuestRacePointMaster_o *this,
        QuestRacePointEntity_o **entity,
        int32_t questId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C279F1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__TryGetEntity__);
    sub_1C2D490(&QuestRacePointEntity_TypeInfo);
    byte_4C279F1 = 1;
  }
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  PK = (Il2CppObject *)QuestRacePointEntity__CreatePK(questId, itemId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__TryGetEntity__);
}