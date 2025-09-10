void BeforeResurrectionServantAiTask___ctor(
        BeforeResurrectionServantAiTask_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  BattleLogicServantAiTask___ctor((BattleLogicServantAiTask_o *)this, 18, svtData, logic, v4);
}


bool BeforeResurrectionServantAiTask__IsActable(
        BeforeResurrectionServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicReaction_o *logicReaction; // x8

  if ( !logic || (logicReaction = logic->fields.logicReaction) == 0 )
    sub_1C2D6EC(this, logic);
  return BattleLogicReaction__CheckExecutableResurrection(logicReaction, this->fields.svtData, 0);
}