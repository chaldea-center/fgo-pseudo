void UserEventRaidEntity___ctor(UserEventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939549 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939549 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventRaidEntity__CreatePK(int64_t userId, int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_5939548 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_5939548 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           day,
           (const MethodInfo_38215B8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventRaidEntity__CreatePrimaryKey(UserEventRaidEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventRaidEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.day, v2);
}