void __fastcall EquipSkillEntity___ctor(EquipSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E7D7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438E7D7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EquipSkillEntity__CreatePK(int32_t equipId, int32_t num, const MethodInfo *method)
{
  if ( (byte_438E7D6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438E7D6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           equipId,
           num,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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