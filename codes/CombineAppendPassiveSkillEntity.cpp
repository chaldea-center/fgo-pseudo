void CombineAppendPassiveSkillEntity___ctor(CombineAppendPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59705BB & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59705BB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CombineAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  if ( (byte_59705BA & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59705BA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           skillLv,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *CombineAppendPassiveSkillEntity__CreatePrimaryKey(
        CombineAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CombineAppendPassiveSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.skillLv, v2);
}