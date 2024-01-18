void __fastcall CombineQpEntity___ctor(CombineQpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418621D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418621D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineQpEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_418621C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_418621C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineQpEntity__CreatePrimaryKey(CombineQpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineQpEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}