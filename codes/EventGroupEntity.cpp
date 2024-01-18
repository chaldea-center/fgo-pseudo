void __fastcall EventGroupEntity___ctor(EventGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41890D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41890D8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventGroupEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_41890D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId);
    byte_41890D7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventGroupEntity__CreatePrimaryKey(EventGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventGroupEntity__CreatePK(this->fields.id, this->fields.eventId, v2);
}