void QuestReleaseOverwriteEntity___ctor(QuestReleaseOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E48 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938E48 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


QuestReleaseEntity_o *QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
        QuestReleaseOverwriteEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  QuestReleaseEntity_o *result; // x0
  __int64 v7; // d0
  int32_t imagePriority; // w8

  if ( (byte_5938E46 & 1) == 0 )
  {
    sub_21FFC50(&QuestReleaseEntity_TypeInfo);
    byte_5938E46 = 1;
  }
  v3 = sub_21FFEBC(QuestReleaseEntity_TypeInfo);
  QuestReleaseEntity___ctor((QuestReleaseEntity_o *)v3, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  result = (QuestReleaseEntity_o *)v3;
  *(_DWORD *)(v3 + 16) = this->fields.questId;
  v7 = *(_QWORD *)&this->fields.condType;
  *(_QWORD *)(v3 + 32) = this->fields.condNum;
  *(_QWORD *)(v3 + 20) = v7;
  imagePriority = this->fields.imagePriority;
  *(_DWORD *)(v3 + 40) = this->fields.closedMessageId;
  *(_DWORD *)(v3 + 44) = imagePriority;
  return result;
}


System_String_o *QuestReleaseOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  if ( (byte_5938E45 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938E45 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           priority,
           imagePriority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 Time; // x19
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int64_t *p_endedAt; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_5938E47 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938E47 = 1;
  }
  entity = 0;
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  if ( this->fields.eventId < 1 || this->fields.startedAt >= 1 && this->fields.endedAt > 0 )
    goto LABEL_17;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, nowTime);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_22:
    sub_21FFECC(Master_object, v6);
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.eventId,
                                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_17:
    if ( this->fields.startedAt <= Time )
    {
      p_endedAt = &this->fields.endedAt;
      return Time <= *p_endedAt;
    }
    return 0;
  }
  if ( !entity )
    goto LABEL_22;
  if ( (__int64)entity[5].monitor > Time )
    return 0;
  p_endedAt = (int64_t *)&entity[6];
  return Time <= *p_endedAt;
}