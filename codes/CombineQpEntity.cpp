void __fastcall CombineQpEntity___ctor(CombineQpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF33 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AF33 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineQpEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4A5AF32 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5AF32 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineQpEntity__CreatePrimaryKey(CombineQpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineQpEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}