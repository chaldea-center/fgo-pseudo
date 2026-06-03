void BeforeDeadServantAiTask___ctor(
        BeforeDeadServantAiTask_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicServantAiTask___ctor((BattleLogicServantAiTask_o *)this, 17, svtData, logic, 0);
}


bool BeforeDeadServantAiTask__IsActable(
        BeforeDeadServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicReaction_o *logicReaction; // x8

  if ( !logic || (logicReaction = logic->fields.logicReaction) == 0 )
    sub_1D0F30C(this, logic);
  return BattleLogicReaction__CheckExecutableDead(logicReaction, this->fields.svtData, 0);
}