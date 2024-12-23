void __fastcall SkillIndividualityEntity___ctor(SkillIndividualityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67D1B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_int___ctor__, method);
    byte_4B67D1B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31FD5C4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SkillIndividualityEntity__CreatePrimaryKey(
        SkillIndividualityEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.skillId;
}