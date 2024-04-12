void __fastcall CombineSkillEntity___ctor(CombineSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B006E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B006E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineSkillEntity__CreatePK(int32_t id, int32_t skillLv, const MethodInfo *method)
{
  if ( (byte_42B006D & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B006D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           skillLv,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineSkillEntity__CreatePrimaryKey(CombineSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineSkillEntity__CreatePK(this->fields.id, this->fields.skillLv, v2);
}