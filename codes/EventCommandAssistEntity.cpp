void __fastcall EventCommandAssistEntity___ctor(EventCommandAssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2791 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2791 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventCommandAssistEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_42B2790 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2790 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventCommandAssistEntity__CreatePrimaryKey(
        EventCommandAssistEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventCommandAssistEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


bool __fastcall EventCommandAssistEntity__IsOpen(
        EventCommandAssistEntity_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t commonReleaseId; // w19

  if ( (byte_42B278F & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42B278F = 1;
  }
  commonReleaseId = this->fields.commonReleaseId;
  if ( (beforeClearQuestId & 0x80000000) == 0 )
    return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(commonReleaseId, beforeClearQuestId, 0, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(113, commonReleaseId, 0LL, 0, 0LL);
}