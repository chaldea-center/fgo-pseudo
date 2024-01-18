void __fastcall ShopActionEntity___ctor(ShopActionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418BC8B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418BC8B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopActionEntity__CreatePK(int32_t shopId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_418BC8A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_418BC8A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           shopId,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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