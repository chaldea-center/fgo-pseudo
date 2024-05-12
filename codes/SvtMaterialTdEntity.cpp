void __fastcall SvtMaterialTdEntity___ctor(SvtMaterialTdEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43882D3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_43882D3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SvtMaterialTdEntity__CreatePK(int32_t baseSvtId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_43882D2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_43882D2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           baseSvtId,
           idx,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SvtMaterialTdEntity__CreatePrimaryKey(
        SvtMaterialTdEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SvtMaterialTdEntity__CreatePK(this->fields.baseSvtId, this->fields.idx, v2);
}