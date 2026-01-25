void MapLayerEntity___ctor(MapLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF8FC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF8FC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MapLayerEntity__CreatePK(int32_t mapId, int32_t layer, const MethodInfo *method)
{
  if ( (byte_4CEF8FB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF8FB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           mapId,
           layer,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *MapLayerEntity__CreatePrimaryKey(MapLayerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapLayerEntity__CreatePK(this->fields.mapId, this->fields.layer, v2);
}