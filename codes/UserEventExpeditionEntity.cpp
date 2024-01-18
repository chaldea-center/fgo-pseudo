void __fastcall UserEventExpeditionEntity___ctor(UserEventExpeditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188B52 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188B52 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventExpeditionEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4188B51 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&eventId);
    byte_4188B51 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           eventId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventExpeditionEntity__CreatePrimaryKey(
        UserEventExpeditionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventExpeditionEntity__CreatePK(this->fields.userId, this->fields.eventId, v2);
}