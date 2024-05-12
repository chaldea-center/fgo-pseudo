void __fastcall EventProgressValueEntity___ctor(EventProgressValueEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BCFA & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BCFA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventProgressValueEntity__CreatePK(
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_438BCF9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438BCF9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventProgressValueEntity__CreatePrimaryKey(
        EventProgressValueEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventProgressValueEntity__CreatePK(this->fields.eventId, this->fields.priority, v2);
}