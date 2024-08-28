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
  UpdateAllViewActionData_o *v3; // x19

  if ( (byte_4A0B8C6 & 1) == 0 )
  {
    sub_1B686D4(&UpdateAllViewActionData_TypeInfo, logic);
    byte_4A0B8C6 = 1;
  }
  v3 = (UpdateAllViewActionData_o *)sub_1B68920(UpdateAllViewActionData_TypeInfo);
  UpdateAllViewActionData___ctor(v3, 0LL);
  return (BattleActionData_o *)v3;
}