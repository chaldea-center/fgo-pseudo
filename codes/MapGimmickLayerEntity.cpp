void __fastcall MapGimmickLayerEntity___ctor(MapGimmickLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C218 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5C218 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MapGimmickLayerEntity__CreatePrimaryKey(MapGimmickLayerEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapGimmickId;
}