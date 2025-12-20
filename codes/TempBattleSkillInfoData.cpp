void TempBattleSkillInfoData___ctor(
        TempBattleSkillInfoData_o *this,
        int32_t skillId,
        int32_t skillLv,
        int32_t uniqueId,
        const MethodInfo *method)
{
  TempBattleSkillInfoData_c *klass; // x8

  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)this, 0);
  klass = this->klass;
  this->fields.type = 20;
  ((void (__fastcall *)(TempBattleSkillInfoData_o *, _QWORD, const MethodInfo *))klass->vtable._4_set_skillId.methodPtr)(
    this,
    (unsigned int)skillId,
    klass->vtable._4_set_skillId.method);
  this->fields.skilllv = skillLv;
  this->fields.svtUniqueId = uniqueId;
}