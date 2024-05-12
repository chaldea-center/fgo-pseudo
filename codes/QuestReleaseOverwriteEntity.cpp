void __fastcall QuestReleaseOverwriteEntity___ctor(QuestReleaseOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438FD2C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438FD2C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


QuestReleaseEntity_o *__fastcall QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
        QuestReleaseOverwriteEntity_o *this,
        const MethodInfo *method)
{
  QuestReleaseEntity_o *v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  QuestReleaseEntity_o *result; // x0

  if ( (byte_438FD2A & 1) == 0 )
  {
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    byte_438FD2A = 1;
  }
  v3 = (QuestReleaseEntity_o *)sub_B77694(QuestReleaseEntity_TypeInfo);
  QuestReleaseEntity___ctor(v3, v4);
  if ( !v3 )
    sub_B7769C(v5, v6);
  result = v3;
  v3->fields.questId = this->fields.questId;
  v3->fields.type = this->fields.condType;
  v3->fields.targetId = this->fields.condId;
  v3->fields.value = this->fields.condNum;
  v3->fields.closedMessageId = this->fields.closedMessageId;
  v3->fields.imagePriority = this->fields.imagePriority;
  return result;
}


System_String_o *__fastcall QuestReleaseOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  if ( (byte_438FD29 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438FD29 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           priority,
           imagePriority,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  int64_t endedAt; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438FD2B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438FD2B = 1;
  }
  entity = 0LL;
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  if ( this->fields.eventId < 1 || this->fields.startedAt >= 1 && this->fields.endedAt > 0 )
    goto LABEL_19;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  this->fields.eventId,
                                                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
  {
LABEL_19:
    if ( this->fields.startedAt <= nowTime )
    {
      endedAt = this->fields.endedAt;
      return nowTime <= endedAt;
    }
    return 0;
  }
  if ( !entity )
    goto LABEL_23;
  if ( entity->fields.targetId > nowTime )
    return 0;
  endedAt = *(_QWORD *)&entity->fields.eventId;
  return nowTime <= endedAt;
}