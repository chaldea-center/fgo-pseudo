void __fastcall ServantLimitSpoilerProtectionEntity___ctor(
        ServantLimitSpoilerProtectionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A034 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A034 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitSpoilerProtectionEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_418A033 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&limitCount);
    byte_418A033 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantLimitSpoilerProtectionEntity__CreatePrimaryKey(
        ServantLimitSpoilerProtectionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLimitSpoilerProtectionEntity__CreatePK(this->fields.svtId, this->fields.limitCount, v2);
}