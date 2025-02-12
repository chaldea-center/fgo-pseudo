void __fastcall EventTutorialCondEntity___ctor(EventTutorialCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7C5B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC7C5B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialCondEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4BC7C5A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&flagType);
    byte_4BC7C5A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           flagType,
           num,
           idx,
           (const MethodInfo_2F9E004 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventTutorialCondEntity__CreatePrimaryKey(
        EventTutorialCondEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventTutorialCondEntity__CreatePK(
           this->fields.eventId,
           this->fields.flagType,
           this->fields.num,
           this->fields.idx,
           v2);
}