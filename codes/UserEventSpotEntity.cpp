void __fastcall UserEventSpotEntity___ctor(UserEventSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389CCF & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389CCF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventSpotEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  if ( (byte_4389CCE & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4389CCE = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           spotId,
           (const MethodInfo_1D17884 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventSpotEntity__CreatePrimaryKey(
        UserEventSpotEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventSpotEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.spotId, v2);
}