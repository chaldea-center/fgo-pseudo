void __fastcall QuestReleaseOverwriteEntity___ctor(QuestReleaseOverwriteEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED282 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42ED282 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


QuestReleaseEntity_o *__fastcall QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
        QuestReleaseOverwriteEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestReleaseEntity_o *v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  QuestReleaseEntity_o *result; // x0

  if ( (byte_42ED280 & 1) == 0 )
  {
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED280 = 1;
  }
  v5 = (QuestReleaseEntity_o *)sub_B5D694(QuestReleaseEntity_TypeInfo);
  QuestReleaseEntity___ctor(v5, v6);
  if ( !v5 )
    sub_B5D69C(v7, v8);
  result = v5;
  v5->fields.questId = this->fields.questId;
  v5->fields.type = this->fields.condType;
  v5->fields.targetId = this->fields.condId;
  v5->fields.value = this->fields.condNum;
  v5->fields.closedMessageId = this->fields.closedMessageId;
  v5->fields.imagePriority = this->fields.imagePriority;
  return result;
}


System_String_o *__fastcall QuestReleaseOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  if ( (byte_42ED27F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, priority, imagePriority, method);
    byte_42ED27F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           priority,
           imagePriority,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestReleaseOverwriteEntity__CreatePrimaryKey(
        QuestReleaseOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestReleaseOverwriteEntity__CreatePK(
           this->fields.questId,
           this->fields.priority,
           this->fields.imagePriority,
           v2);
}


bool __fastcall QuestReleaseOverwriteEntity__IsPeriod(
        QuestReleaseOverwriteEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  int64_t endedAt; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  Time = nowTime;
  if ( (byte_42ED281 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, nowTime, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    byte_42ED281 = 1;
  }
  entity = 0LL;
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  if ( this->fields.eventId < 1 || this->fields.startedAt >= 1 && this->fields.endedAt > 0 )
    goto LABEL_19;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v16);
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
  {
LABEL_19:
    if ( this->fields.startedAt <= Time )
    {
      endedAt = this->fields.endedAt;
      return Time <= endedAt;
    }
    return 0;
  }
  if ( !entity )
    goto LABEL_23;
  if ( entity->fields.targetId > Time )
    return 0;
  endedAt = *(_QWORD *)&entity->fields.eventId;
  return Time <= endedAt;
}