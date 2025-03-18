void __fastcall ShopResetEntity___ctor(ShopResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C23127 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C23127 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopResetEntity__CreatePK(int32_t shopId, int32_t consumeItemId, const MethodInfo *method)
{
  if ( (byte_4C23126 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&consumeItemId);
    byte_4C23126 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           shopId,
           consumeItemId,
           (const MethodInfo_2FEE38C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ShopResetEntity__CreatePrimaryKey(ShopResetEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ShopResetEntity__CreatePK(this->fields.shopId, this->fields.consumeItemId, v2);
}