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

  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_7;
  svtData = (BattleServantData_o *)BattleServantData__isAlive(svtData, 0, 0LL);
  if ( ((unsigned __int8)svtData & 1) != 0 )
    return 0;
  if ( !logic || (svtData = (BattleServantData_o *)logic->fields.data) == 0LL )
LABEL_7:
    sub_B0D97C(svtData);
  return BattleData__checkAlivePlayers((BattleData_o *)svtData, 0LL);
}