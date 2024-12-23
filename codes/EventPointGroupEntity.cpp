void __fastcall EventPointGroupEntity___ctor(EventPointGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66C36 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66C36 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointGroupEntity__CreatePK(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  if ( (byte_4B66C35 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&groupId);
    byte_4B66C35 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           groupId,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventPointGroupEntity__CreatePrimaryKey(
        EventPointGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventPointGroupEntity__CreatePK(this->fields.eventId, this->fields.groupId, v2);
}