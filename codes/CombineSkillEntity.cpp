void __fastcall CombineSkillEntity___ctor(CombineSkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8B4F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8B4F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineSkillEntity__CreatePK(int32_t id, int32_t skillLv, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E8B4E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, skillLv, (_DWORD)method, v3);
    byte_42E8B4E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           skillLv,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineSkillEntity__CreatePrimaryKey(CombineSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineSkillEntity__CreatePK(this->fields.id, this->fields.skillLv, v2);
}