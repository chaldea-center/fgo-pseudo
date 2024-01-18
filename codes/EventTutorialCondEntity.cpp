void __fastcall EventTutorialCondEntity___ctor(EventTutorialCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418826B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418826B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialCondEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_418826A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&flagType);
    byte_418826A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           flagType,
           num,
           idx,
           (const MethodInfo_1733078 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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