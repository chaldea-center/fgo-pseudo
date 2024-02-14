void __fastcall AliveServantAiTask___ctor(
        AliveServantAiTask_o *this,
        int32_t procState,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicServantAiTask___ctor((BattleLogicServantAiTask_o *)this, procState, svtData, logic, 0LL);
}


bool __fastcall AliveServantAiTask__IsActable(
        AliveServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_7;
  svtData = (BattleServantData_o *)BattleServantData__isAlive(svtData, 0, 0LL);
  if ( ((unsigned __int8)svtData & 1) != 0 )
  {
    if ( logic )
    {
      svtData = (BattleServantData_o *)logic->fields.data;
      if ( svtData )
        return BattleData__checkAlivePlayers((BattleData_o *)svtData, 0LL);
    }
LABEL_7:
    sub_B0D97C(svtData);
  }
  return 0;
}