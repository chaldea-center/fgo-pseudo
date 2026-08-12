void GachaBaseCollateralEntity___ctor(GachaBaseCollateralEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971B6B & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971B6B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaBaseCollateralEntity__CreatePK(
        int32_t gachaId,
        int32_t type,
        int32_t giftId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_5971B6A & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_5971B6A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           gachaId,
           type,
           giftId,
           idx,
           (const MethodInfo_3854D88 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *GachaBaseCollateralEntity__CreatePrimaryKey(
        GachaBaseCollateralEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return GachaBaseCollateralEntity__CreatePK(
           this->fields.gachaId,
           this->fields.type,
           this->fields.giftId,
           this->fields.idx,
           v2);
}