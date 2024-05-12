void __fastcall SkillGroupEntity___ctor(SkillGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C081 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438C081 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SkillGroupEntity__CreatePK(
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_438C080 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438C080 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           skillId,
           lv,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall SkillGroupEntity__CreatePrimaryKey(SkillGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SkillGroupEntity__CreatePK(this->fields.id, this->fields.skillId, this->fields.lv, v2);
}