void __fastcall BeforeDeadServantAiTask___ctor(
        BeforeDeadServantAiTask_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  BattleLogicServantAiTask___ctor((BattleLogicServantAiTask_o *)this, 17, svtData, logic, v4);
}


bool __fastcall BeforeDeadServantAiTask__IsActable(
        BeforeDeadServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicReaction_o *logicReaction; // x8

  if ( !logic || (logicReaction = logic->fields.logicReaction) == 0LL )
    sub_1B68930(this, logic);
  return BattleLogicReaction__CheckExecutableDead(logicReaction, this->fields.svtData, 0LL);
}