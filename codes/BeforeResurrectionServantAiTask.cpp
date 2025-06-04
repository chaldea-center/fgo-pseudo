void __fastcall BeforeResurrectionServantAiTask___ctor(
        BeforeResurrectionServantAiTask_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  BattleLogicServantAiTask___ctor((BattleLogicServantAiTask_o *)this, 18, svtData, logic, v4);
}


bool __fastcall BeforeResurrectionServantAiTask__IsActable(
        BeforeResurrectionServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicReaction_o *logicReaction; // x8

  if ( !logic || (logicReaction = logic->fields.logicReaction) == 0LL )
    sub_1BC3264(this, logic);
  return BattleLogicReaction__CheckExecutableResurrection(logicReaction, this->fields.svtData, 0LL);
}