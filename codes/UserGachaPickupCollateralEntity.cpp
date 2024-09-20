void __fastcall UserGachaPickupCollateralEntity___ctor(
        UserGachaPickupCollateralEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BE7C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BE7C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserGachaPickupCollateralEntity__CreatePK(
        int64_t userId,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  if ( (byte_4A5BE7B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_4A5BE7B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           gachaPickupCollateralGroupId,
           type,
           rarity,
           (const MethodInfo_2E7E5B4 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
}


System_String_o *__fastcall UserGachaPickupCollateralEntity__CreatePrimaryKey(
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