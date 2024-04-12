void __fastcall EquipSkillEntity___ctor(EquipSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2631 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2631 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EquipSkillEntity__CreatePK(int32_t equipId, int32_t num, const MethodInfo *method)
{
  if ( (byte_42B2630 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2630 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           equipId,
           num,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EquipSkillEntity__CreatePrimaryKey(EquipSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EquipSkillEntity__CreatePK(this->fields.equipId, this->fields.num, v2);
}


int32_t __fastcall EquipSkillEntity__getSkillId(EquipSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillId;
}


bool __fastcall EquipSkillEntity__isUse(EquipSkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  return this->fields.condLv <= lv;
}