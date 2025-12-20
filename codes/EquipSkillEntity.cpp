void EquipSkillEntity___ctor(EquipSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C6E7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2C6E7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EquipSkillEntity__CreatePK(int32_t equipId, int32_t num, const MethodInfo *method)
{
  if ( (byte_4D2C6E6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2C6E6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           equipId,
           num,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EquipSkillEntity__CreatePrimaryKey(EquipSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EquipSkillEntity__CreatePK(this->fields.equipId, this->fields.num, v2);
}


int32_t EquipSkillEntity__getSkillId(EquipSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillId;
}


bool EquipSkillEntity__isUse(EquipSkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  return this->fields.condLv <= lv;
}