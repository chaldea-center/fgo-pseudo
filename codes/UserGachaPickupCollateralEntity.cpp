void UserGachaPickupCollateralEntity___ctor(UserGachaPickupCollateralEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC82C0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC82C0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserGachaPickupCollateralEntity__CreatePK(
        int64_t userId,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  if ( (byte_4CC82BF & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_4CC82BF = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           gachaPickupCollateralGroupId,
           type,
           rarity,
           (const MethodInfo_3149DB8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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