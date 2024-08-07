void __fastcall SkillGroupEntity___ctor(SkillGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FFBD7 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FFBD7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillGroupEntity__CreatePK(
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_49FFBD6 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&skillId);
    byte_49FFBD6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           skillId,
           lv,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall SkillGroupEntity__CreatePrimaryKey(SkillGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SkillGroupEntity__CreatePK(this->fields.id, this->fields.skillId, this->fields.lv, v2);
}