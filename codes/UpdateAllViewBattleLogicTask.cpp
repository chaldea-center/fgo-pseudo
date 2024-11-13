void __fastcall UpdateAllViewBattleLogicTask___ctor(UpdateAllViewBattleLogicTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 58;
  this->fields.isSkipStep = 1;
}


BattleActionData_o *__fastcall UpdateAllViewBattleLogicTask__MakeActionData(
        UpdateAllViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UpdateAllViewActionData_o *v4; // x19

  if ( (byte_4B18F25 & 1) == 0 )
  {
    sub_1BCA7E0(&UpdateAllViewActionData_TypeInfo, logic, method);
    byte_4B18F25 = 1;
  }
  v4 = (UpdateAllViewActionData_o *)sub_1BCAA2C(UpdateAllViewActionData_TypeInfo, logic, method, v3);
  UpdateAllViewActionData___ctor(v4, 0LL);
  return (BattleActionData_o *)v4;
}