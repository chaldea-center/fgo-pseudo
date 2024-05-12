void __fastcall EventTutorialCondEntity___ctor(EventTutorialCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A6B2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438A6B2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTutorialCondEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_438A6B1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_438A6B1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           flagType,
           num,
           idx,
           (const MethodInfo_1D17A7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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