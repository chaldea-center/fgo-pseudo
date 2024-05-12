void __fastcall MapLayerEntity___ctor(MapLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E597 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438E597 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall MapLayerEntity__CreatePK(int32_t mapId, int32_t layer, const MethodInfo *method)
{
  if ( (byte_438E596 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438E596 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           mapId,
           layer,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MapLayerEntity__CreatePrimaryKey(MapLayerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapLayerEntity__CreatePK(this->fields.mapId, this->fields.layer, v2);
}