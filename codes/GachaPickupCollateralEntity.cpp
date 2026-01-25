void GachaPickupCollateralEntity___ctor(GachaPickupCollateralEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF8EC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF8EC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaPickupCollateralEntity__CreatePK(
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  if ( (byte_4CEF8EB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEF8EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaPickupCollateralGroupId,
           type,
           rarity,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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