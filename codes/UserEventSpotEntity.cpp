void UserEventSpotEntity___ctor(UserEventSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28121 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28121 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventSpotEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  if ( (byte_4C28120 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4C28120 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           spotId,
           (const MethodInfo_30CD124 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventSpotEntity__CreatePrimaryKey(UserEventSpotEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventSpotEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.spotId, v2);
}