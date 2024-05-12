void __fastcall SpotImageEntity___ctor(SpotImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BF04 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BF04 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SpotImageEntity__CreatePK(int32_t spotId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_438BF03 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438BF03 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           spotId,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SpotImageEntity__CreatePrimaryKey(SpotImageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SpotImageEntity__CreatePK(this->fields.spotId, this->fields.priority, v2);
}