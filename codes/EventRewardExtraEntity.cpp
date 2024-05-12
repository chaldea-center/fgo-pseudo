void __fastcall EventRewardExtraEntity___ctor(EventRewardExtraEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4387EC7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4387EC7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardExtraEntity__CreatePK(int32_t eventId, int64_t point, const MethodInfo *method)
{
  if ( (byte_4387EC6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__long___);
    byte_4387EC6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           eventId,
           point,
           (const MethodInfo_1D17254 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *__fastcall EventRewardExtraEntity__CreatePrimaryKey(
        EventRewardExtraEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRewardExtraEntity__CreatePK(this->fields.eventId, this->fields.point, v2);
}