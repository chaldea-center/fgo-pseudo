void SpotImageEntity___ctor(SpotImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D49A & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D49A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *SpotImageEntity__CreatePK(int32_t spotId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4D2D499 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2D499 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           spotId,
           priority,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *SpotImageEntity__CreatePrimaryKey(SpotImageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SpotImageEntity__CreatePK(this->fields.spotId, this->fields.priority, v2);
}