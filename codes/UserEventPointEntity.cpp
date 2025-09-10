void UserEventPointEntity___ctor(UserEventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C280DD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C280DD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


void UserEventPointEntity___ctor_42815572(
        UserEventPointEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4C280DE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C280DE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.groupId = groupId;
  this->fields.value = 0;
}


void UserEventPointEntity___ctor_42815688(
        UserEventPointEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        int64_t value,
        const MethodInfo *method)
{
  if ( (byte_4C280DF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C280DF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.groupId = groupId;
  this->fields.value = value;
}


System_String_o *UserEventPointEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4C280DC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4C280DC = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           groupId,
           (const MethodInfo_30CD124 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventPointEntity__CreatePrimaryKey(UserEventPointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventPointEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.groupId, v2);
}