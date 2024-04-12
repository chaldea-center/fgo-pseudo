void __fastcall GachaExtraGiftEntity___ctor(GachaExtraGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B1D & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B3B1D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaExtraGiftEntity__CreatePK(
        int32_t gachaId,
        int32_t idx,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_42B3B1C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B3B1C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           idx,
           giftId,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GachaExtraGiftEntity__CreatePrimaryKey(
        GachaExtraGiftEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaExtraGiftEntity__CreatePK(this->fields.gachaId, this->fields.idx, this->fields.giftId, v2);
}