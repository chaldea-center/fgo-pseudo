void __fastcall QuestRacePointMaster___ctor(QuestRacePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AEDB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string___ctor__, method);
    byte_418AEDB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    211,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRacePointEntity_o *__fastcall QuestRacePointMaster__GetEntity(
        QuestRacePointMaster_o *this,
        int32_t questId,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x1

  if ( (byte_418AED9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    sub_B2C35C(&QuestRacePointEntity_TypeInfo, v7);
    byte_418AED9 = 1;
  }
  if ( (BYTE3(QuestRacePointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  }
  PK = QuestRacePointEntity__CreatePK(questId, itemId, *(const MethodInfo **)&itemId);
  return (QuestRacePointEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRacePointMaster__TryGetEntity(
        QuestRacePointMaster_o *this,
        QuestRacePointEntity_o **entity,
        int32_t questId,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x2

  if ( (byte_418AEDA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&QuestRacePointEntity_TypeInfo, v9);
    byte_418AEDA = 1;
  }
  if ( (BYTE3(QuestRacePointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  }
  PK = QuestRacePointEntity__CreatePK(questId, itemId, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__TryGetEntity__);
}