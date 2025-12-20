void ExchangeSvtCoinGivenNumEntity___ctor(ExchangeSvtCoinGivenNumEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CB9B & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CB9B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ExchangeSvtCoinGivenNumEntity__CreatePK(int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4D2CB9A & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4D2CB9A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           itemId,
           (const MethodInfo_319A150 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *ExchangeSvtCoinGivenNumEntity__CreatePrimaryKey(
        ExchangeSvtCoinGivenNumEntity_o *this,
        const MethodInfo *method)
{
  return ExchangeSvtCoinGivenNumEntity__CreatePK(this->fields.itemId, method);
}


int32_t ExchangeSvtCoinGivenNumEntity__GetItemGivenNum(ExchangeSvtCoinGivenNumEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}


int64_t ExchangeSvtCoinGivenNumEntity__GetItemId(ExchangeSvtCoinGivenNumEntity_o *this, const MethodInfo *method)
{
  return this->fields.itemId;
}