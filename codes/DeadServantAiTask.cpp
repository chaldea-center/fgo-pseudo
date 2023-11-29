void __fastcall DeadServantAiTask___ctor(
        DeadServantAiTask_o *this,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicServantAiTask___ctor((BattleLogicServantAiTask_o *)this, 2, svtData, logic, 0LL);
}


bool __fastcall DeadServantAiTask__IsActable(DeadServantAiTask_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  BattleData_o *data; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_7;
  if ( BattleServantData__isAlive(svtData, 0, 0LL) )
    return 0;
  if ( !logic || (data = logic->fields.data) == 0LL )
LABEL_7:
    sub_B170D4();
  return BattleData__checkAlivePlayers(data, 0LL);
}