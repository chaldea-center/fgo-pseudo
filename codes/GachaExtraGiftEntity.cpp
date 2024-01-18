void __fastcall GachaExtraGiftEntity___ctor(GachaExtraGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AFE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418AFE9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaExtraGiftEntity__CreatePK(
        int32_t gachaId,
        int32_t idx,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_418AFE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&idx);
    byte_418AFE8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           idx,
           giftId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GachaExtraGiftEntity__CreatePrimaryKey(
        GachaExtraGiftEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaExtraGiftEntity__CreatePK(this->fields.gachaId, this->fields.idx, this->fields.giftId, v2);
}