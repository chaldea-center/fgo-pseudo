void GuideEntity___ctor(GuideEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27616 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27616 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GuideEntity__CreatePK(int32_t guideType, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4C27615 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27615 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           guideType,
           priority,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GuideEntity__CreatePrimaryKey(GuideEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GuideEntity__CreatePK(this->fields.guideType, this->fields.priority, v2);
}