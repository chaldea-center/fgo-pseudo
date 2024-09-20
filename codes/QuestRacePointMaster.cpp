void __fastcall QuestRacePointMaster___ctor(QuestRacePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B6B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string___ctor__);
    byte_4A5B6B5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    213,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRacePointEntity_o *__fastcall QuestRacePointMaster__GetEntity(
        QuestRacePointMaster_o *this,
        int32_t questId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B6B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__GetEntity__);
    sub_1B885B0(&QuestRacePointEntity_TypeInfo);
    byte_4A5B6B3 = 1;
  }
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  PK = (Il2CppObject *)QuestRacePointEntity__CreatePK(questId, itemId, *(const MethodInfo **)&itemId);
  return (QuestRacePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRacePointMaster__TryGetEntity(
        QuestRacePointMaster_o *this,
        QuestRacePointEntity_o **entity,
        int32_t questId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B6B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__TryGetEntity__);
    sub_1B885B0(&QuestRacePointEntity_TypeInfo);
    byte_4A5B6B4 = 1;
  }
  if ( !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  PK = (Il2CppObject *)QuestRacePointEntity__CreatePK(questId, itemId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__TryGetEntity__);
}