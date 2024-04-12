void __fastcall CombineMaterialEntity___ctor(CombineMaterialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2C45 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2C45 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineMaterialEntity__CreatePK(int32_t id, int32_t lv, const MethodInfo *method)
{
  if ( (byte_42B2C44 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2C44 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           lv,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineMaterialEntity__CreatePrimaryKey(
        CombineMaterialEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineMaterialEntity__CreatePK(this->fields.id, this->fields.lv, v2);
}