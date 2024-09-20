void __fastcall SkillGroupOverwriteEntity___ctor(SkillGroupOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C244 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C244 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SkillGroupOverwriteEntity__CreatePK(
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  if ( (byte_4A5C243 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__long___);
    byte_4A5C243 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           skillGroupId,
           startedAt,
           (const MethodInfo_2E7DBB0 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *__fastcall SkillGroupOverwriteEntity__CreatePrimaryKey(
        SkillGroupOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillGroupOverwriteEntity__CreatePK(this->fields.skillGroupId, this->fields.startedAt, v2);
}