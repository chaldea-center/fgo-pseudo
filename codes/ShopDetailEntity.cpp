void __fastcall ShopDetailEntity___ctor(ShopDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D4CB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418D4CB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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