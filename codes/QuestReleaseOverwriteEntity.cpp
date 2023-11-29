void __fastcall QuestReleaseOverwriteEntity___ctor(QuestReleaseOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FD574 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FD574 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


QuestReleaseEntity_o *__fastcall QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
        QuestReleaseOverwriteEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  QuestReleaseEntity_o *v6; // x20
  const MethodInfo *v7; // x1
  QuestReleaseEntity_o *result; // x0

  if ( (byte_40FD572 & 1) == 0 )
  {
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, method);
    byte_40FD572 = 1;
  }
  v6 = (QuestReleaseEntity_o *)sub_B170CC(QuestReleaseEntity_TypeInfo, method, v2, v3, v4);
  QuestReleaseEntity___ctor(v6, v7);
  if ( !v6 )
    sub_B170D4();
  result = v6;
  v6->fields.questId = this->fields.questId;
  v6->fields.type = this->fields.condType;
  v6->fields.targetId = this->fields.condId;
  v6->fields.value = this->fields.condNum;
  v6->fields.closedMessageId = this->fields.closedMessageId;
  v6->fields.imagePriority = this->fields.imagePriority;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestReleaseOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  if ( (byte_40FD571 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&priority);
    byte_40FD571 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           priority,
           imagePriority,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int64_t Time; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  int64_t endedAt; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  Time = nowTime;
  if ( (byte_40FD573 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, nowTime);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    byte_40FD573 = 1;
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B170D4();
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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