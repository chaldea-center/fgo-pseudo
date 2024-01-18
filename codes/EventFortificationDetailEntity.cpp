void __fastcall EventFortificationDetailEntity___ctor(EventFortificationDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A3DE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A3DE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventFortificationDetailEntity__CreatePK(
        int32_t eventId,
        int32_t fortificationIdx,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_418A3DD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&fortificationIdx);
    byte_418A3DD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           fortificationIdx,
           position,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventFortificationDetailEntity__CreatePrimaryKey(
        EventFortificationDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventFortificationDetailEntity__CreatePK(
           this->fields.eventId,
           this->fields.fortificationIdx,
           this->fields.position,
           v2);
}