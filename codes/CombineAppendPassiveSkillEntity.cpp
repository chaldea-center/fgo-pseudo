void __fastcall CombineAppendPassiveSkillEntity___ctor(
        CombineAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8D67 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8D67 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  if ( (byte_42E8D66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, num, skillLv, method);
    byte_42E8D66 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           skillLv,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall CombineAppendPassiveSkillEntity__CreatePrimaryKey(
        CombineAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CombineAppendPassiveSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.skillLv, v2);
}