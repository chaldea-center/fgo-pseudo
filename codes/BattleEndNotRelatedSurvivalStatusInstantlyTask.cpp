void __fastcall BattleEndNotRelatedSurvivalStatusInstantlyTask___ctor(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 72;
}


BattleActionData_o *__fastcall BattleEndNotRelatedSurvivalStatusInstantlyTask__MakeActionData(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleEndNotRelatedSurvivalStatusInstantlyData_o *v3; // x19

  if ( (byte_4BB74C0 & 1) == 0 )
  {
    sub_1C13D24(&BattleEndNotRelatedSurvivalStatusInstantlyData_TypeInfo, logic);
    byte_4BB74C0 = 1;
  }
  v3 = (BattleEndNotRelatedSurvivalStatusInstantlyData_o *)sub_1C13F70(BattleEndNotRelatedSurvivalStatusInstantlyData_TypeInfo);
  BattleEndNotRelatedSurvivalStatusInstantlyData___ctor(v3, 0LL);
  return (BattleActionData_o *)v3;
}