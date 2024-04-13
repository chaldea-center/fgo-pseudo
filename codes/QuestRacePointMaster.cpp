void __fastcall QuestRacePointMaster___ctor(QuestRacePointMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED265 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42ED265 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    212,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRacePointEntity_o *__fastcall QuestRacePointMaster__GetEntity(
        QuestRacePointMaster_o *this,
        int32_t questId,
        int32_t itemId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x1

  if ( (byte_42ED263 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__GetEntity__,
      questId,
      itemId,
      method);
    sub_B5D5C4(&QuestRacePointEntity_TypeInfo, v7, v8, v9);
    byte_42ED263 = 1;
  }
  if ( (BYTE3(QuestRacePointEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRacePointEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRacePointEntity_TypeInfo);
  }
  PK = QuestRacePointEntity__CreatePK(questId, itemId, *(const MethodInfo **)&itemId);
  return (QuestRacePointEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRacePointMaster__TryGetEntity(
        QuestRacePointMaster_o *this,
        QuestRacePointEntity_o **entity,
        int32_t questId,
        int32_t itemId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x2

  if ( (byte_42ED264 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&itemId);
    sub_B5D5C4(&QuestRacePointEntity_TypeInfo, v9, v10, v11);
    byte_42ED264 = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestRacePointMaster__QuestRacePointEntity__string__TryGetEntity__);
}