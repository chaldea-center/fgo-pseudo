void __fastcall MapLayerEntity___ctor(MapLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B03266 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B03266 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapLayerEntity__CreatePK(int32_t mapId, int32_t layer, const MethodInfo *method)
{
  if ( (byte_4B03265 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&layer);
    byte_4B03265 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           mapId,
           layer,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MapLayerEntity__CreatePrimaryKey(MapLayerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapLayerEntity__CreatePK(this->fields.mapId, this->fields.layer, v2);
}