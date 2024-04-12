void __fastcall SkillGroupOverwriteEntity___ctor(SkillGroupOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0D49 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B0D49 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SkillGroupOverwriteEntity__CreatePK(
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  if ( (byte_42B0D48 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__long___);
    byte_42B0D48 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           skillGroupId,
           startedAt,
           (const MethodInfo_1A4DFE8 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *__fastcall SkillGroupOverwriteEntity__CreatePrimaryKey(
        SkillGroupOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillGroupOverwriteEntity__CreatePK(this->fields.skillGroupId, this->fields.startedAt, v2);
}