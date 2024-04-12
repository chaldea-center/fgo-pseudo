void __fastcall SvtMultiPortraitEntity___ctor(SvtMultiPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ACFC4 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42ACFC4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SvtMultiPortraitEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42ACFC3 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42ACFC3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           limitCount,
           idx,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall SvtMultiPortraitEntity__CreatePrimaryKey(
        SvtMultiPortraitEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SvtMultiPortraitEntity__CreatePK(this->fields.svtId, this->fields.limitCount, this->fields.idx, v2);
}