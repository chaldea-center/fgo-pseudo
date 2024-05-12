void __fastcall CombineQpEntity___ctor(CombineQpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B264 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B264 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineQpEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_438B263 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438B263 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineQpEntity__CreatePrimaryKey(CombineQpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineQpEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}