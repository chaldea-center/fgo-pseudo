void __fastcall SpotImageEntity___ctor(SpotImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0A74 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B0A74 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SpotImageEntity__CreatePK(int32_t spotId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_42B0A73 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B0A73 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           spotId,
           priority,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SpotImageEntity__CreatePrimaryKey(SpotImageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SpotImageEntity__CreatePK(this->fields.spotId, this->fields.priority, v2);
}