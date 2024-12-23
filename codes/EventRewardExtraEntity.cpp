void __fastcall EventRewardExtraEntity___ctor(EventRewardExtraEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66CBD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66CBD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardExtraEntity__CreatePK(int32_t eventId, int64_t point, const MethodInfo *method)
{
  if ( (byte_4B66CBC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__long___, point);
    byte_4B66CBC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           eventId,
           point,
           (const MethodInfo_2F573B8 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *__fastcall EventRewardExtraEntity__CreatePrimaryKey(
        EventRewardExtraEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRewardExtraEntity__CreatePK(this->fields.eventId, this->fields.point, v2);
}