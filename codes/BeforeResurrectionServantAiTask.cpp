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
  const MethodInfo *v3; // x4
  BeforeResurrectionServantAiTask_o *v4; // x8
  BattleServantData_o *svtData; // x1
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-8h] BYREF

  if ( !logic || (v4 = this, (this = (BeforeResurrectionServantAiTask_o *)logic->fields.logicReaction) == 0) )
    sub_1C93D2C(this, logic);
  svtData = v4->fields.svtData;
  gutsBuff = 0;
  return BattleLogicReaction__CheckExecutableResurrection_47828868(
           (BattleLogicReaction_o *)this,
           svtData,
           &gutsBuff,
           1,
           v3);
}