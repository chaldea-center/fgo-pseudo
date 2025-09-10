void GachaPickupCollateralEntity___ctor(GachaPickupCollateralEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28563 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28563 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaPickupCollateralEntity__CreatePK(
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  if ( (byte_4C28562 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C28562 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaPickupCollateralGroupId,
           type,
           rarity,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *GachaPickupCollateralEntity__CreatePrimaryKey(
        GachaPickupCollateralEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaPickupCollateralEntity__CreatePK(
           this->fields.gachaPickupCollateralGroupId,
           this->fields.type,
           this->fields.rarity,
           v2);
}