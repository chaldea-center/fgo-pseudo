void __fastcall EventRewardExtraEntity___ctor(EventRewardExtraEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418485D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418485D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardExtraEntity__CreatePK(int32_t eventId, int64_t point, const MethodInfo *method)
{
  if ( (byte_418485C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__long___, point);
    byte_418485C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           eventId,
           point,
           (const MethodInfo_17329A0 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *__fastcall EventRewardExtraEntity__CreatePrimaryKey(
        EventRewardExtraEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRewardExtraEntity__CreatePK(this->fields.eventId, this->fields.point, v2);
}