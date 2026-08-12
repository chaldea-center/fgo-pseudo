void UserGachaPickupCollateralEntity___ctor(UserGachaPickupCollateralEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971782 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971782 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserGachaPickupCollateralEntity__CreatePK(
        int64_t userId,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  if ( (byte_5971781 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_5971781 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           gachaPickupCollateralGroupId,
           type,
           rarity,
           (const MethodInfo_3854F5C *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
}


System_String_o *UserGachaPickupCollateralEntity__CreatePrimaryKey(
        UserGachaPickupCollateralEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return UserGachaPickupCollateralEntity__CreatePK(
           this->fields.userId,
           this->fields.gachaPickupCollateralGroupId,
           this->fields.type,
           this->fields.rarity,
           v2);
}