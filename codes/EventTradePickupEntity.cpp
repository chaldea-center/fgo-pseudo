void __fastcall EventTradePickupEntity___ctor(EventTradePickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB00B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB00B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTradePickupEntity__CreatePK(
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  if ( (byte_49BB00A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__long___, startedAt);
    byte_49BB00A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           tradeGoodsId,
           startedAt,
           (const MethodInfo_2EFFD30 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *__fastcall EventTradePickupEntity__CreatePrimaryKey(
        EventTradePickupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventTradePickupEntity__CreatePK(this->fields.tradeGoodsId, this->fields.startedAt, v2);
}