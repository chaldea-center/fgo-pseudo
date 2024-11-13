void __fastcall EventTutorialCondEntity___ctor(EventTutorialCondEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B163AB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialCondEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B163AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&flagType, *(_QWORD *)&num);
    byte_4B163AA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           flagType,
           num,
           idx,
           (const MethodInfo_2F11804 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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