bool AliveServantAiTask__IsActable(AliveServantAiTask_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_7;
  svtData = (BattleServantData_o *)BattleServantData__isAlive(svtData, 0, 0);
  if ( ((unsigned __int8)svtData & 1) != 0 )
  {
    if ( logic )
    {
      svtData = (BattleServantData_o *)logic->fields.data;
      if ( svtData )
        return BattleData__checkAlivePlayers((BattleData_o *)svtData, 0);
    }
LABEL_7:
    sub_1C93D2C(svtData, logic);
  }
  return 0;
}