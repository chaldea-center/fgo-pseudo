void __fastcall CombineLimitReleaseEntity___ctor(CombineLimitReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C209 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C209 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineLimitReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  if ( (byte_4A5C208 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C208 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           svtLimit,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineLimitReleaseEntity__CreatePrimaryKey(
        CombineLimitReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineLimitReleaseEntity__CreatePK(this->fields.combineLimitId, this->fields.svtLimit, v2);
}