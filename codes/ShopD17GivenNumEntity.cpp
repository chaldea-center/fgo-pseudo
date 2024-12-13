void __fastcall ShopD17GivenNumEntity___ctor(ShopD17GivenNumEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B2C6F5 & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataEntityBase_string___ctor__);
    byte_4B2C6F5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31C6E40 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ShopD17GivenNumEntity__CreatePK(int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4B2C6F4 & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4B2C6F4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           itemId,
           (const MethodInfo_2F2443C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall ShopD17GivenNumEntity__CreatePrimaryKey(
        ShopD17GivenNumEntity_o *this,
        const MethodInfo *method)
{
  return ShopD17GivenNumEntity__CreatePK(this->fields.itemId, method);
}


int32_t __fastcall ShopD17GivenNumEntity__GetItemGivenNum(ShopD17GivenNumEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}


int64_t __fastcall ShopD17GivenNumEntity__GetItemId(ShopD17GivenNumEntity_o *this, const MethodInfo *method)
{
  return this->fields.itemId;
}