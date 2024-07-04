void __fastcall QuestReleaseOverwriteEntity___ctor(QuestReleaseOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E2D38 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_string___ctor__, method);
    byte_48E2D38 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_2FE68C4 *)Method_DataEntityBase_string___ctor__);
}


QuestReleaseEntity_o *__fastcall QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
        QuestReleaseOverwriteEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  QuestReleaseEntity_o *result; // x0

  if ( (byte_48E2D36 & 1) == 0 )
  {
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, method);
    byte_48E2D36 = 1;
  }
  v3 = sub_1B00F18(QuestReleaseEntity_TypeInfo);
  QuestReleaseEntity___ctor((QuestReleaseEntity_o *)v3, v4);
  if ( !v3 )
    sub_1B00F28(v5, v6);
  result = (QuestReleaseEntity_o *)v3;
  *(_DWORD *)(v3 + 16) = this->fields.questId;
  *(_QWORD *)(v3 + 20) = *(_QWORD *)&this->fields.condType;
  *(_QWORD *)(v3 + 32) = this->fields.condNum;
  *(_DWORD *)(v3 + 40) = this->fields.closedMessageId;
  *(_DWORD *)(v3 + 44) = this->fields.imagePriority;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestReleaseOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  if ( (byte_48E2D35 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&priority);
    byte_48E2D35 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           priority,
           imagePriority,
           (const MethodInfo_2D612C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int64_t endedAt; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_48E2D37 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_EventMaster___, nowTime);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1B00CCC(&NetworkManager_TypeInfo, v7);
    byte_48E2D37 = 1;
  }
  entity = 0LL;
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  if ( this->fields.eventId < 1 || this->fields.startedAt >= 1 && this->fields.endedAt > 0 )
    goto LABEL_17;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_22:
    sub_1B00F28(Master_object, v9);
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.eventId,
                                    (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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