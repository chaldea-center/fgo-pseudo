void ShopDailyEntity___ctor(ShopDailyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59391F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59391F7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ShopDailyEntity__CreatePK(int32_t dayKey, int32_t shopId, const MethodInfo *method)
{
  if ( (byte_59391F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59391F6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           dayKey,
           shopId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ShopDailyEntity__CreatePrimaryKey(ShopDailyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ShopDailyEntity__CreatePK(this->fields.dayKey, this->fields.shopId, v2);
}


bool ShopDailyEntity__IsValid(ShopDailyEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_59391F5 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59391F5 = 1;
  }
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  return Time >= this->fields.openedAt && Time <= this->fields.closedAt;
}


System_Int32_array *ShopDailyEntity__get_UseItemIds(ShopDailyEntity_o *this, const MethodInfo *method)
{
  bool IsNullOrEmpty; // w8
  System_Int32_array *result; // x0

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.useItemIds, 0);
  result = 0;
  if ( !IsNullOrEmpty )
    return this->fields.useItemIds;
  return result;
}


System_Int32_array *ShopDailyEntity__get_UsePrices(ShopDailyEntity_o *this, const MethodInfo *method)
{
  bool IsNullOrEmpty; // w8
  System_Int32_array *result; // x0

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.usePrices, 0);
  result = 0;
  if ( !IsNullOrEmpty )
    return this->fields.usePrices;
  return result;
}