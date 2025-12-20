void ShopDetailEntity___ctor(ShopDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D38A & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2D38A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t ShopDetailEntity__CreatePrimaryKey(ShopDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.shopId;
}


int32_t ShopDetailEntity__getFrequencyType(ShopDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.frequencyType;
}


System_String_o *ShopDetailEntity__getMessage(ShopDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.message;
}