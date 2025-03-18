void __fastcall ExchangeSvtCoinGivenNumEntity___ctor(ExchangeSvtCoinGivenNumEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2217C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C2217C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ExchangeSvtCoinGivenNumEntity__CreatePK(int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4C2217B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_4C2217B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           itemId,
           (const MethodInfo_2FEE220 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall ExchangeSvtCoinGivenNumEntity__CreatePrimaryKey(
        ExchangeSvtCoinGivenNumEntity_o *this,
        const MethodInfo *method)
{
  return ExchangeSvtCoinGivenNumEntity__CreatePK(this->fields.itemId, method);
}


int32_t __fastcall ExchangeSvtCoinGivenNumEntity__GetItemGivenNum(
        ExchangeSvtCoinGivenNumEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.num;
}


int64_t __fastcall ExchangeSvtCoinGivenNumEntity__GetItemId(
        ExchangeSvtCoinGivenNumEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.itemId;
}