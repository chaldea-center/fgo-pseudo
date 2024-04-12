void __fastcall CombineQpSvtEquipEntity___ctor(CombineQpSvtEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2C58 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2C58 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineQpSvtEquipEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_42B2C57 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2C57 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineQpSvtEquipEntity__CreatePrimaryKey(
        CombineQpSvtEquipEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineQpSvtEquipEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}