void SvtAppendPassiveSkillUnlockEntity___ctor(SvtAppendPassiveSkillUnlockEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF2F2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF2F2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *SvtAppendPassiveSkillUnlockEntity__CreatePK(int32_t svtId, int32_t num, const MethodInfo *method)
{
  if ( (byte_4CEF2F1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF2F1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           num,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *SvtAppendPassiveSkillUnlockEntity__CreatePrimaryKey(
        SvtAppendPassiveSkillUnlockEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SvtAppendPassiveSkillUnlockEntity__CreatePK(this->fields.svtId, this->fields.num, v2);
}