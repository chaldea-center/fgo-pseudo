void __fastcall EventFortificationSvtEntity___ctor(EventFortificationSvtEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66B71 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66B71 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventFortificationSvtEntity__CreatePK(
        int32_t eventId,
        int32_t fortificationIdx,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_4B66B70 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&fortificationIdx);
    byte_4B66B70 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           fortificationIdx,
           position,
           (const MethodInfo_2F577C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventFortificationSvtEntity__CreatePrimaryKey(
        EventFortificationSvtEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventFortificationSvtEntity__CreatePK(
           this->fields.eventId,
           this->fields.fortificationIdx,
           this->fields.position,
           v2);
}