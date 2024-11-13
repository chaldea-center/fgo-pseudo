void __fastcall EventProgressValueEntity___ctor(EventProgressValueEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16287 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16287 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventProgressValueEntity__CreatePK(
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B16286 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority, method);
    byte_4B16286 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           priority,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventProgressValueEntity__CreatePrimaryKey(
        EventProgressValueEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventProgressValueEntity__CreatePK(this->fields.eventId, this->fields.priority, v2);
}