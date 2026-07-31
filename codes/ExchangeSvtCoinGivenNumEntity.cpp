void ExchangeSvtCoinGivenNumEntity___ctor(ExchangeSvtCoinGivenNumEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59389F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59389F8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ExchangeSvtCoinGivenNumEntity__CreatePK(int32_t itemId, const MethodInfo *method)
{
  if ( (byte_59389F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_59389F7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           itemId,
           (const MethodInfo_3820DF8 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *ExchangeSvtCoinGivenNumEntity__CreatePrimaryKey(
        ExchangeSvtCoinGivenNumEntity_o *this,
        const MethodInfo *method)
{
  return ExchangeSvtCoinGivenNumEntity__CreatePK(this->fields.itemId, method);
}