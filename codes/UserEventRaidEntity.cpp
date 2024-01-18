void __fastcall UserEventRaidEntity___ctor(UserEventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186F69 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186F69 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventRaidEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  if ( (byte_4186F68 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4186F68 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           day,
           (const MethodInfo_1732E80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventRaidEntity__CreatePrimaryKey(
        UserEventRaidEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventRaidEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.day, v2);
}