void __fastcall MapGimmickLayerEntity___ctor(MapGimmickLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42129E1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_42129E1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MapGimmickLayerEntity__CreatePrimaryKey(MapGimmickLayerEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapGimmickId;
}