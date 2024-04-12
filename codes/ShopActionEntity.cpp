void __fastcall ShopActionEntity___ctor(ShopActionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B45B3 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B45B3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ShopActionEntity__CreatePK(int32_t shopId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_42B45B2 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B45B2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           shopId,
           idx,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ShopActionEntity__CreatePrimaryKey(ShopActionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ShopActionEntity__CreatePK(this->fields.shopId, this->fields.idx, v2);
}


int32_t __fastcall ShopActionEntity__GetActionType(ShopActionEntity_o *this, const MethodInfo *method)
{
  return this->fields.actionType;
}