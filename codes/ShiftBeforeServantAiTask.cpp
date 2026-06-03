void ShiftBeforeServantAiTask___ctor(
        ShiftBeforeServantAiTask_o *this,
        int32_t procState,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicServantAiTask___ctor((BattleLogicServantAiTask_o *)this, procState, svtData, logic, 0);
}


bool ShiftBeforeServantAiTask__IsActable(
        ShiftBeforeServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1D0F30C(0, logic);
  return BattleServantData__isAlive(svtData, 0, 0);
}