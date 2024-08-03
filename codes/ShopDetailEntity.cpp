void __fastcall ShopDetailEntity___ctor(ShopDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCC9D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FCC9D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ShopDetailEntity__CreatePrimaryKey(ShopDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.shopId;
}


int32_t __fastcall ShopDetailEntity__getFrequencyType(ShopDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.frequencyType;
}


System_String_o *__fastcall ShopDetailEntity__getMessage(ShopDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.message;
}