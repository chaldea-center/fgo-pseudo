void __fastcall CombineLimitReleaseEntity___ctor(CombineLimitReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B225 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B225 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineLimitReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  if ( (byte_438B224 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438B224 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           svtLimit,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineLimitReleaseEntity__CreatePrimaryKey(
        CombineLimitReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineLimitReleaseEntity__CreatePK(this->fields.combineLimitId, this->fields.svtLimit, v2);
}