void __fastcall UserEventPointEntity___ctor(UserEventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B6788B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B6788B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventPointEntity___ctor_41049580(
        UserEventPointEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4B6788C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, userId);
    byte_4B6788C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.groupId = groupId;
  this->fields.value = 0LL;
}


void __fastcall UserEventPointEntity___ctor_41049696(
        UserEventPointEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        int64_t value,
        const MethodInfo *method)
{
  if ( (byte_4B6788D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, userId);
    byte_4B6788D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.groupId = groupId;
  this->fields.value = value;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventPointEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4B6788A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4B6788A = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           groupId,
           (const MethodInfo_2F57980 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventPointEntity__CreatePrimaryKey(
        UserEventPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventPointEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.groupId, v2);
}