void ClearPlayerAttackPreselectTargetInterruptProcess___ctor(
        ClearPlayerAttackPreselectTargetInterruptProcess_o *this,
        int32_t activatorUniqueId,
        int32_t sourceSkillId,
        int32_t sourceSkillLv,
        int32_t reservedTargetType,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.activatorUniqueId = activatorUniqueId;
  this->fields.sourceSkillId = sourceSkillId;
  this->fields.sourceSkillLv = sourceSkillLv;
  this->fields.reservedTargetType = reservedTargetType;
}


void ClearPlayerAttackPreselectTargetInterruptProcess__AfterCreateAction(
        ClearPlayerAttackPreselectTargetInterruptProcess_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleData_o *data; // x8

  if ( !logic || (data = logic->fields.data) == 0 )
    sub_21FFECC(this, logic);
  BattleData__ClearPlayerAttackPreselectTargetData(
    data,
    this->fields.activatorUniqueId,
    this->fields.sourceSkillId,
    this->fields.sourceSkillLv,
    this->fields.reservedTargetType,
    0);
}