void UserEventRaidEntity___ctor(UserEventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C280FB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C280FB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventRaidEntity__CreatePK(int64_t userId, int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_4C280FA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4C280FA = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           day,
           (const MethodInfo_30CD124 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventRaidEntity__CreatePrimaryKey(UserEventRaidEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventRaidEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.day, v2);
}