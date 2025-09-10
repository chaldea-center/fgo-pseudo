void MapGimmickReleaseEntity___ctor(MapGimmickReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C277A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C277A9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MapGimmickReleaseEntity__CreatePK(int32_t mapGimmickId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4C277A8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C277A8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           mapGimmickId,
           priority,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *MapGimmickReleaseEntity__CreatePrimaryKey(MapGimmickReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapGimmickReleaseEntity__CreatePK(this->fields.mapGimmickId, this->fields.priority, v2);
}