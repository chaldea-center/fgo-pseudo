void UserEventPointEntity___ctor(UserEventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593952C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593952C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


void UserEventPointEntity___ctor_50004064(
        UserEventPointEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_593952D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593952D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.groupId = groupId;
  this->fields.value = 0;
}


System_String_o *UserEventPointEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_593952B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_593952B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           groupId,
           (const MethodInfo_38215B8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventPointEntity__CreatePrimaryKey(UserEventPointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventPointEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.groupId, v2);
}