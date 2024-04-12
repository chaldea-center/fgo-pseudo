void __fastcall UserEventExpeditionEntity___ctor(UserEventExpeditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B153F & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B153F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventExpeditionEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_42B153E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42B153E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           eventId,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventExpeditionEntity__CreatePrimaryKey(
        UserEventExpeditionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventExpeditionEntity__CreatePK(this->fields.userId, this->fields.eventId, v2);
}