void __fastcall UserEventDiggingEntity___ctor(UserEventDiggingEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188B4A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188B4A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDiggingEntity__CreatePK(int64_t userId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4188B49 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&eventId);
    byte_4188B49 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           eventId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventDiggingEntity__CreatePrimaryKey(
        UserEventDiggingEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventDiggingEntity__CreatePK(this->fields.userId, this->fields.eventId, v2);
}