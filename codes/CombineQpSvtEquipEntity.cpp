void __fastcall CombineQpSvtEquipEntity___ctor(CombineQpSvtEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF38 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AF38 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineQpSvtEquipEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4A5AF37 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5AF37 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineQpSvtEquipEntity__CreatePrimaryKey(
        CombineQpSvtEquipEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineQpSvtEquipEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}