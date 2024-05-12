void __fastcall EventExpeditionEntity___ctor(EventExpeditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438DE29 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438DE29 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventExpeditionEntity__CreatePK(int64_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_438DE28 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_438DE28 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           eventId,
           idx,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall EventExpeditionEntity__CreatePrimaryKey(
        EventExpeditionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventExpeditionEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}