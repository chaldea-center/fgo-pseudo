void __fastcall EventAddEntity___ctor(EventAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A1E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A1E2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventAddEntity__CreatePK(
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_418A1E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&overwriteType);
    byte_418A1E1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           overwriteType,
           priority,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventAddEntity__CreatePrimaryKey(EventAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventAddEntity__CreatePK(this->fields.eventId, this->fields.overwriteType, this->fields.priority, v2);
}