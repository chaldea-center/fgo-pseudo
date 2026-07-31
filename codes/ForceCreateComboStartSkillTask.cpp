void ForceCreateComboStartSkillTask___ctor(ForceCreateComboStartSkillTask_o *this, const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction___ctor((CreateSkillTaskFromBuffAction_o *)this, 0);
}


bool ForceCreateComboStartSkillTask__IsCreatable(
        ForceCreateComboStartSkillTask_o *this,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  return 1;
}