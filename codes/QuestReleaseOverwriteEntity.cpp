void __fastcall QuestReleaseOverwriteEntity___ctor(QuestReleaseOverwriteEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16788 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16788 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


QuestReleaseEntity_o *__fastcall QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
        QuestReleaseOverwriteEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  QuestReleaseEntity_o *result; // x0

  if ( (byte_4B16786 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, method, v2);
    byte_4B16786 = 1;
  }
  v5 = sub_1BCAA2C(QuestReleaseEntity_TypeInfo, method, v2, v3);
  QuestReleaseEntity___ctor((QuestReleaseEntity_o *)v5, v6);
  if ( !v5 )
    sub_1BCAA3C(v7, v8);
  result = (QuestReleaseEntity_o *)v5;
  *(_DWORD *)(v5 + 16) = this->fields.questId;
  *(_QWORD *)(v5 + 20) = *(_QWORD *)&this->fields.condType;
  *(_QWORD *)(v5 + 32) = this->fields.condNum;
  *(_DWORD *)(v5 + 40) = this->fields.closedMessageId;
  *(_DWORD *)(v5 + 44) = this->fields.imagePriority;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestReleaseOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  if ( (byte_4B16785 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int___,
      *(_QWORD *)&priority,
      *(_QWORD *)&imagePriority);
    byte_4B16785 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           priority,
           imagePriority,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 Time; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  int64_t endedAt; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_4B16787 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, nowTime, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    byte_4B16787 = 1;
  }
  entity = 0LL;
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0LL);
  }
  if ( this->fields.eventId < 1 || this->fields.startedAt >= 1 && this->fields.endedAt > 0 )
    goto LABEL_17;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, nowTime);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_22:
    sub_1BCAA3C(Master_object, v12);
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.eventId,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_17:
    if ( this->fields.startedAt <= Time )
    {
      endedAt = this->fields.endedAt;
      return Time <= endedAt;
    }
    return 0;
  }
  if ( !entity )
    goto LABEL_22;
  if ( (__int64)entity[5].monitor > Time )
    return 0;
  endedAt = (int64_t)entity[6].klass;
  return Time <= endedAt;
}