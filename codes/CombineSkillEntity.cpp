void __fastcall CombineSkillEntity___ctor(CombineSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42147A6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_42147A6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineSkillEntity__CreatePK(int32_t id, int32_t skillLv, const MethodInfo *method)
{
  if ( (byte_42147A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&skillLv);
    byte_42147A5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           skillLv,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineSkillEntity__CreatePrimaryKey(CombineSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineSkillEntity__CreatePK(this->fields.id, this->fields.skillLv, v2);
}