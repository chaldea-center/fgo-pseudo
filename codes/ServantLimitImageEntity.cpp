void __fastcall ServantLimitImageEntity___ctor(ServantLimitImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B24DE & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B24DE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantLimitImageEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42B24DD & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B24DD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           limitCount,
           priority,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantLimitImageEntity__CreatePrimaryKey(
        ServantLimitImageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantLimitImageEntity__CreatePK(this->fields.svtId, this->fields.limitCount, this->fields.priority, v2);
}