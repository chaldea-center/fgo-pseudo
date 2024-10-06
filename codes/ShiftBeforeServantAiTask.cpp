bool __fastcall ShiftBeforeServantAiTask__IsActable(
        ShiftBeforeServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1B9026C(0LL, logic);
  return BattleServantData__isAlive(svtData, 0, 0LL);
}