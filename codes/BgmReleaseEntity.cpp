void __fastcall BgmReleaseEntity___ctor(BgmReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A943 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438A943 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BgmReleaseEntity__CreatePK(int32_t bgmId, int32_t id, const MethodInfo *method)
{
  if ( (byte_438A942 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438A942 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           bgmId,
           id,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BgmReleaseEntity__CreatePrimaryKey(BgmReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BgmReleaseEntity__CreatePK(this->fields.bgmId, this->fields.id, v2);
}