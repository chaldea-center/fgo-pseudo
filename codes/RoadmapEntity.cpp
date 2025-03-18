void __fastcall RoadmapEntity___ctor(RoadmapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C225E7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C225E7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RoadmapEntity__CreatePK(int32_t tabGroup, int32_t groupIndex, const MethodInfo *method)
{
  if ( (byte_4C225E6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&groupIndex);
    byte_4C225E6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           tabGroup,
           groupIndex,
           (const MethodInfo_2FEE38C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall RoadmapEntity__CreatePrimaryKey(RoadmapEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RoadmapEntity__CreatePK(this->fields.tabGroup, this->fields.groupIndex, v2);
}