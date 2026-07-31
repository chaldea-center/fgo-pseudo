void EventCommandAssistEntity___ctor(EventCommandAssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938595 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938595 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventCommandAssistEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_5938594 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938594 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventCommandAssistEntity__CreatePrimaryKey(EventCommandAssistEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventCommandAssistEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


// local variable allocation has failed, the output may be wrong!
bool EventCommandAssistEntity__IsOpen(
        EventCommandAssistEntity_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t commonReleaseId; // w20

  if ( (byte_5938593 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938593 = 1;
  }
  commonReleaseId = this->fields.commonReleaseId;
  if ( (beforeClearQuestId & 0x80000000) == 0 )
    return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(commonReleaseId, beforeClearQuestId, 0, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
  return CondType__IsOpen(113, commonReleaseId, 0, 0, 0, 0);
}