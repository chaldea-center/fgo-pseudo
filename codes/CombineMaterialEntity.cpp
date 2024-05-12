void __fastcall CombineMaterialEntity___ctor(CombineMaterialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B255 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B255 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineMaterialEntity__CreatePK(int32_t id, int32_t lv, const MethodInfo *method)
{
  if ( (byte_438B254 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438B254 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           lv,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineMaterialEntity__CreatePrimaryKey(
        CombineMaterialEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineMaterialEntity__CreatePK(this->fields.id, this->fields.lv, v2);
}