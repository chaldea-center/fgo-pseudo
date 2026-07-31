void UserEventFortificationEntity___ctor(UserEventFortificationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59394F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59394F1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventFortificationEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t fortificationIdx,
        const MethodInfo *method)
{
  if ( (byte_59394F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_59394F0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           fortificationIdx,
           (const MethodInfo_38215B8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventFortificationEntity__CreatePrimaryKey(
        UserEventFortificationEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventFortificationEntity__CreatePK(
           this->fields.userId,
           this->fields.eventId,
           this->fields.fortificationIdx,
           v2);
}