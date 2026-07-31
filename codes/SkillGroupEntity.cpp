void SkillGroupEntity___ctor(SkillGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939ACC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939ACC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *SkillGroupEntity__CreatePK(int32_t id, int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_5939ACB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5939ACB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           skillId,
           lv,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *SkillGroupEntity__CreatePrimaryKey(SkillGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SkillGroupEntity__CreatePK(this->fields.id, this->fields.skillId, this->fields.lv, v2);
}