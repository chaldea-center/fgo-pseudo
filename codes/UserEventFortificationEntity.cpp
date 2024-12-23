void __fastcall UserEventFortificationEntity___ctor(UserEventFortificationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67860 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67860 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventFortificationEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t fortificationIdx,
        const MethodInfo *method)
{
  if ( (byte_4B6785F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4B6785F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           fortificationIdx,
           (const MethodInfo_2F57980 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventFortificationEntity__CreatePrimaryKey(
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