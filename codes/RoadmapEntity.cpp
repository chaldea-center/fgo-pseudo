void RoadmapEntity___ctor(RoadmapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938EFC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938EFC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RoadmapEntity__CreatePK(int32_t tabGroup, int32_t groupIndex, const MethodInfo *method)
{
  if ( (byte_5938EFB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938EFB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           tabGroup,
           groupIndex,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *RoadmapEntity__CreatePrimaryKey(RoadmapEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RoadmapEntity__CreatePK(this->fields.tabGroup, this->fields.groupIndex, v2);
}