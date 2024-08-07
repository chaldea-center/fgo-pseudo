void __fastcall UserEventExpeditionEntity___ctor(UserEventExpeditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF74A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF74A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventExpeditionEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_49FF749 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&eventId);
    byte_49FF749 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           eventId,
           (const MethodInfo_2E3A00C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventExpeditionEntity__CreatePrimaryKey(
        UserEventExpeditionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventExpeditionEntity__CreatePK(this->fields.userId, this->fields.eventId, v2);
}