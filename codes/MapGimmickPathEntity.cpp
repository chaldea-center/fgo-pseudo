void MapGimmickPathEntity___ctor(MapGimmickPathEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2779E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2779E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MapGimmickPathEntity__CreatePK(
        int32_t mapGimmickId,
        int32_t pathId,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  if ( (byte_4C2779D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C2779D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           mapGimmickId,
           pathId,
           commonReleaseId,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MapGimmickPathEntity__CreatePrimaryKey(MapGimmickPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MapGimmickPathEntity__CreatePK(
           this->fields.mapGimmickId,
           this->fields.pathId,
           this->fields.commonReleaseId,
           v2);
}


int32_t MapGimmickPathEntity__GetMapGimmickPathType(MapGimmickPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.valueType;
}