void BeforeDeadServantAiTask___ctor(
        BeforeDeadServantAiTask_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  BattleLogicServantAiTask___ctor((BattleLogicServantAiTask_o *)this, 17, svtData, logic, v4);
}


bool BeforeDeadServantAiTask__IsActable(
        BeforeDeadServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !logic || !logic->fields.logicReaction )
    sub_1C7BD40(this, logic);
  return BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)this, this->fields.svtData, method);
}