void __fastcall ShopActionEntity___ctor(ShopActionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FED90 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FED90 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopActionEntity__CreatePK(int32_t shopId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_49FED8F & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49FED8F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           shopId,
           idx,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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