void __fastcall ShopScriptEntity___ctor(ShopScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1AFF & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B1AFF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ShopScriptEntity__CreatePrimaryKey(ShopScriptEntity_o *this, const MethodInfo *method)
{
  return this->fields.shopId;
}


int32_t __fastcall ShopScriptEntity__GetFrequencyType(ShopScriptEntity_o *this, const MethodInfo *method)
{
  return this->fields.frequencyType;
}