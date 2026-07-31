void GachaExtraGiftEntity___ctor(GachaExtraGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938A78 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938A78 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaExtraGiftEntity__CreatePK(int32_t gachaId, int32_t idx, int32_t giftId, const MethodInfo *method)
{
  if ( (byte_5938A77 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938A77 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           idx,
           giftId,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *GachaExtraGiftEntity__CreatePrimaryKey(GachaExtraGiftEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaExtraGiftEntity__CreatePK(this->fields.gachaId, this->fields.idx, this->fields.giftId, v2);
}