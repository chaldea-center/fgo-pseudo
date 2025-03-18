void __fastcall MapGimmickLayerEntity___ctor(MapGimmickLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C230F3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C230F3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MapGimmickLayerEntity__CreatePrimaryKey(MapGimmickLayerEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapGimmickId;
}