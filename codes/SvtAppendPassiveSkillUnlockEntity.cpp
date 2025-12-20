void SvtAppendPassiveSkillUnlockEntity___ctor(SvtAppendPassiveSkillUnlockEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D52C & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D52C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *SvtAppendPassiveSkillUnlockEntity__CreatePK(int32_t svtId, int32_t num, const MethodInfo *method)
{
  if ( (byte_4D2D52B & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2D52B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           num,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *SvtAppendPassiveSkillUnlockEntity__CreatePrimaryKey(
        SvtAppendPassiveSkillUnlockEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SvtAppendPassiveSkillUnlockEntity__CreatePK(this->fields.svtId, this->fields.num, v2);
}