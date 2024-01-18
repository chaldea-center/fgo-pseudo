void __fastcall CombineQpSvtEquipEntity___ctor(CombineQpSvtEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186222 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186222 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineQpSvtEquipEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4186221 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4186221 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineQpSvtEquipEntity__CreatePrimaryKey(
        CombineQpSvtEquipEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineQpSvtEquipEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}