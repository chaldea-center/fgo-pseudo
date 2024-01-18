void __fastcall UpdateAllViewBattleLogicTask___ctor(UpdateAllViewBattleLogicTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 58;
  this->fields.isSkipStep = 1;
}


BattleActionData_o *__fastcall UpdateAllViewBattleLogicTask__MakeActionData(
        UpdateAllViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  UpdateFieldViewActionData_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_4188A75 & 1) == 0 )
  {
    sub_B2C35C(&UpdateAllViewActionData_TypeInfo, logic);
    byte_4188A75 = 1;
  }
  v3 = (UpdateFieldViewActionData_o *)sub_B2C42C(UpdateAllViewActionData_TypeInfo);
  UpdateFieldViewActionData___ctor(v3, v4);
  return (BattleActionData_o *)v3;
}