void __fastcall CombineLimitReleaseEntity___ctor(CombineLimitReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2C15 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2C15 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineLimitReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  if ( (byte_42B2C14 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2C14 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           svtLimit,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineLimitReleaseEntity__CreatePrimaryKey(
        CombineLimitReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineLimitReleaseEntity__CreatePK(this->fields.combineLimitId, this->fields.svtLimit, v2);
}