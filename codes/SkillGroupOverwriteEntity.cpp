void __fastcall SkillGroupOverwriteEntity___ctor(SkillGroupOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186D9B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186D9B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SkillGroupOverwriteEntity__CreatePK(
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  if ( (byte_4186D9A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__long___, startedAt);
    byte_4186D9A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           skillGroupId,
           startedAt,
           (const MethodInfo_17329A0 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *__fastcall SkillGroupOverwriteEntity__CreatePrimaryKey(
        SkillGroupOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillGroupOverwriteEntity__CreatePK(this->fields.skillGroupId, this->fields.startedAt, v2);
}