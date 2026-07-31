void SvtMultiPortraitEntity___ctor(SvtMultiPortraitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59393A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59393A1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *SvtMultiPortraitEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        int32_t idx,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_59393A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_59393A0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           limitCount,
           idx,
           type,
           (const MethodInfo_38218C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *SvtMultiPortraitEntity__CreatePrimaryKey(SvtMultiPortraitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return SvtMultiPortraitEntity__CreatePK(
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.idx,
           this->fields.type,
           v2);
}