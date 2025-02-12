void __fastcall EventTradePickupEntity___ctor(EventTradePickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7C45 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC7C45 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTradePickupEntity__CreatePK(
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  if ( (byte_4BC7C44 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__long___, startedAt);
    byte_4BC7C44 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           tradeGoodsId,
           startedAt,
           (const MethodInfo_2F9D738 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *__fastcall EventTradePickupEntity__CreatePrimaryKey(
        EventTradePickupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventTradePickupEntity__CreatePK(this->fields.tradeGoodsId, this->fields.startedAt, v2);
}