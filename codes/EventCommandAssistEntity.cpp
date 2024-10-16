void __fastcall EventCommandAssistEntity___ctor(EventCommandAssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5C71 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5C71 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCommandAssistEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4AB5C70 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4AB5C70 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventCommandAssistEntity__CreatePrimaryKey(
        EventCommandAssistEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventCommandAssistEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCommandAssistEntity__IsOpen(
        EventCommandAssistEntity_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t commonReleaseId; // w19

  if ( (byte_4AB5C6F & 1) == 0 )
  {
    sub_1BAB41C(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4AB5C6F = 1;
  }
  commonReleaseId = this->fields.commonReleaseId;
  if ( (beforeClearQuestId & 0x80000000) == 0 )
    return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(commonReleaseId, beforeClearQuestId, 0, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(113, commonReleaseId, 0LL, 0, 0LL, 0LL);
}