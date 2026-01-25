void RoadmapEntity___ctor(RoadmapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEE88 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEEE88 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RoadmapEntity__CreatePK(int32_t tabGroup, int32_t groupIndex, const MethodInfo *method)
{
  if ( (byte_4CEEE87 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEEE87 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           tabGroup,
           groupIndex,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *RoadmapEntity__CreatePrimaryKey(RoadmapEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RoadmapEntity__CreatePK(this->fields.tabGroup, this->fields.groupIndex, v2);
}