void __fastcall ShopScriptEntity___ctor(ShopScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189212 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4189212 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ShopScriptEntity__CreatePrimaryKey(ShopScriptEntity_o *this, const MethodInfo *method)
{
  return this->fields.shopId;
}


int32_t __fastcall ShopScriptEntity__GetFrequencyType(ShopScriptEntity_o *this, const MethodInfo *method)
{
  return this->fields.frequencyType;
}