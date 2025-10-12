void QuestReleaseOverwriteEntity___ctor(QuestReleaseOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38115 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C38115 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


QuestReleaseEntity_o *QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
        QuestReleaseOverwriteEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  QuestReleaseEntity_o *result; // x0

  if ( (byte_4C38113 & 1) == 0 )
  {
    sub_1C32C20(&QuestReleaseEntity_TypeInfo);
    byte_4C38113 = 1;
  }
  v3 = sub_1C32E6C(QuestReleaseEntity_TypeInfo);
  QuestReleaseEntity___ctor((QuestReleaseEntity_o *)v3, v4);
  if ( !v3 )
    sub_1C32E7C(v5);
  result = (QuestReleaseEntity_o *)v3;
  *(_DWORD *)(v3 + 16) = this->fields.questId;
  *(_QWORD *)(v3 + 20) = *(_QWORD *)&this->fields.condType;
  *(_QWORD *)(v3 + 32) = this->fields.condNum;
  *(_DWORD *)(v3 + 40) = this->fields.closedMessageId;
  *(_DWORD *)(v3 + 44) = this->fields.imagePriority;
  return result;
}


System_String_o *QuestReleaseOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  if ( (byte_4C38112 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C38112 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           priority,
           imagePriority,
           (const MethodInfo_30DBA08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *QuestReleaseOverwriteEntity__CreatePrimaryKey(
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


bool QuestReleaseOverwriteEntity__IsPeriod(
        QuestReleaseOverwriteEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int64_t endedAt; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C38114 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C38114 = 1;
  }
  entity = 0;
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  if ( this->fields.eventId < 1 || this->fields.startedAt >= 1 && this->fields.endedAt > 0 )
    goto LABEL_17;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_22:
    sub_1C32E7C(Master_object);
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.eventId,
                                    (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_17:
    if ( this->fields.startedAt <= nowTime )
    {
      endedAt = this->fields.endedAt;
      return nowTime <= endedAt;
    }
    return 0;
  }
  if ( !entity )
    goto LABEL_22;
  if ( (__int64)entity[5].monitor > nowTime )
    return 0;
  endedAt = (int64_t)entity[6].klass;
  return nowTime <= endedAt;
}