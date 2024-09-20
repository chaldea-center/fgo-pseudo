void __fastcall UserEventDiggingEntity___ctor(UserEventDiggingEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BDA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BDA2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventDiggingEntity__CreatePK(int64_t userId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4A5BDA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4A5BDA1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           eventId,
           (const MethodInfo_2E7DC34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventDiggingEntity__CreatePrimaryKey(
        UserEventDiggingEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventDiggingEntity__CreatePK(this->fields.userId, this->fields.eventId, v2);
}