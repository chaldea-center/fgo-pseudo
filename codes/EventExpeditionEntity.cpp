void __fastcall EventExpeditionEntity___ctor(EventExpeditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2818 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2818 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventExpeditionEntity__CreatePK(int64_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_42B2817 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42B2817 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           eventId,
           idx,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall EventExpeditionEntity__CreatePrimaryKey(
        EventExpeditionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventExpeditionEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}