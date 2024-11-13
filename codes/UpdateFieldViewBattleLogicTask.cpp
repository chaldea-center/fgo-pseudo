void __fastcall UpdateFieldViewBattleLogicTask___ctor(UpdateFieldViewBattleLogicTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 58;
  this->fields.isSkipStep = 1;
}


BattleActionData_o *__fastcall UpdateFieldViewBattleLogicTask__MakeActionData(
        UpdateFieldViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UpdateFieldViewActionData_o *v4; // x19

  if ( (byte_4B18F24 & 1) == 0 )
  {
    sub_1BCA7E0(&UpdateFieldViewActionData_TypeInfo, logic, method);
    byte_4B18F24 = 1;
  }
  v4 = (UpdateFieldViewActionData_o *)sub_1BCAA2C(UpdateFieldViewActionData_TypeInfo, logic, method, v3);
  UpdateFieldViewActionData___ctor(v4, 0LL);
  return (BattleActionData_o *)v4;
}