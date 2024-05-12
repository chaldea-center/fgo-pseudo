void __fastcall UserEventDiggingEntity___ctor(UserEventDiggingEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438CB64 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438CB64 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventDiggingEntity__CreatePK(int64_t userId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_438CB63 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_438CB63 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           eventId,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventDiggingEntity__CreatePrimaryKey(
        UserEventDiggingEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventDiggingEntity__CreatePK(this->fields.userId, this->fields.eventId, v2);
}