void __fastcall EventAddEntity___ctor(EventAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2650 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2650 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventAddEntity__CreatePK(
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42B264F & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B264F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           overwriteType,
           priority,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventAddEntity__CreatePrimaryKey(EventAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventAddEntity__CreatePK(this->fields.eventId, this->fields.overwriteType, this->fields.priority, v2);
}