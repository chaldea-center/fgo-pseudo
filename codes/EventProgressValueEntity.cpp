void __fastcall EventProgressValueEntity___ctor(EventProgressValueEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4768 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB4768 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventProgressValueEntity__CreatePK(
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4BB4767 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4BB4767 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           priority,
           (const MethodInfo_2F8D690 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventProgressValueEntity__CreatePrimaryKey(
        EventProgressValueEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventProgressValueEntity__CreatePK(this->fields.eventId, this->fields.priority, v2);
}