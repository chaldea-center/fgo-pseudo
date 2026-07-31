void ForceCreateComboEndSkillTask___ctor(ForceCreateComboEndSkillTask_o *this, const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction___ctor((CreateSkillTaskFromBuffAction_o *)this, 0);
}


bool ForceCreateComboEndSkillTask__IsCreatable(
        ForceCreateComboEndSkillTask_o *this,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  return 1;
}