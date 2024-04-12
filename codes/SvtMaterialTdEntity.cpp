void __fastcall SvtMaterialTdEntity___ctor(SvtMaterialTdEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ACFC0 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42ACFC0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SvtMaterialTdEntity__CreatePK(int32_t baseSvtId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_42ACFBF & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42ACFBF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           baseSvtId,
           idx,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SvtMaterialTdEntity__CreatePrimaryKey(
        SvtMaterialTdEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SvtMaterialTdEntity__CreatePK(this->fields.baseSvtId, this->fields.idx, v2);
}