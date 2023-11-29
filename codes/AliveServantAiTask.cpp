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
  BattleData_o *data; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_7;
  if ( BattleServantData__isAlive(svtData, 0, 0LL) )
  {
    if ( logic )
    {
      data = logic->fields.data;
      if ( data )
        return BattleData__checkAlivePlayers(data, 0LL);
    }
LABEL_7:
    sub_B170D4();
  }
  return 0;
}