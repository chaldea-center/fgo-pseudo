void __fastcall UserEventPointEntity___ctor(UserEventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389C90 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389C90 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventPointEntity___ctor_22997688(
        UserEventPointEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4389C91 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389C91 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.groupId = groupId;
  this->fields.value = 0LL;
}


void __fastcall UserEventPointEntity___ctor_22997808(
        UserEventPointEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        int64_t value,
        const MethodInfo *method)
{
  if ( (byte_4389C92 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389C92 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.groupId = groupId;
  this->fields.value = value;
}


System_String_o *__fastcall UserEventPointEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4389C8F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4389C8F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           groupId,
           (const MethodInfo_1D17884 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventPointEntity__CreatePrimaryKey(
        UserEventPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventPointEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.groupId, v2);
}