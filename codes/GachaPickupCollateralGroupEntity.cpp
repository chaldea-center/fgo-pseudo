void GachaPickupCollateralGroupEntity___ctor(GachaPickupCollateralGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DB58 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2DB58 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaPickupCollateralGroupEntity__CreatePK(int32_t id, int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_4D2DB57 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2DB57 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           gachaId,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GachaPickupCollateralGroupEntity__CreatePrimaryKey(
        GachaPickupCollateralGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaPickupCollateralGroupEntity__CreatePK(this->fields.id, this->fields.gachaId, v2);
}