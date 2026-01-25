void ExchangeSvtCoinGivenNumEntity___ctor(ExchangeSvtCoinGivenNumEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE9B3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE9B3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ExchangeSvtCoinGivenNumEntity__CreatePK(int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4CEE9B2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4CEE9B2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           itemId,
           (const MethodInfo_316E410 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *ExchangeSvtCoinGivenNumEntity__CreatePrimaryKey(
        ExchangeSvtCoinGivenNumEntity_o *this,
        const MethodInfo *method)
{
  return ExchangeSvtCoinGivenNumEntity__CreatePK(this->fields.itemId, method);
}