void __fastcall MapLayerEntity___ctor(MapLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B305A & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B305A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall MapLayerEntity__CreatePK(int32_t mapId, int32_t layer, const MethodInfo *method)
{
  if ( (byte_42B3059 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B3059 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           mapId,
           layer,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MapLayerEntity__CreatePrimaryKey(MapLayerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapLayerEntity__CreatePK(this->fields.mapId, this->fields.layer, v2);
}