void __fastcall SkillGroupEntity___ctor(SkillGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0D41 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B0D41 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SkillGroupEntity__CreatePK(
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_42B0D40 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B0D40 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           skillId,
           lv,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall SkillGroupEntity__CreatePrimaryKey(SkillGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SkillGroupEntity__CreatePK(this->fields.id, this->fields.skillId, this->fields.lv, v2);
}