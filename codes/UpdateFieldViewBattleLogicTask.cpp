void __fastcall UpdateFieldViewBattleLogicTask___ctor(UpdateFieldViewBattleLogicTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 58;
  this->fields.isSkipStep = 1;
}


BattleActionData_o *__fastcall UpdateFieldViewBattleLogicTask__MakeActionData(
        UpdateFieldViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  UpdateFieldViewActionData_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_42B1464 & 1) == 0 )
  {
    sub_B52984(&UpdateFieldViewActionData_TypeInfo);
    byte_42B1464 = 1;
  }
  v3 = (UpdateFieldViewActionData_o *)sub_B52A54(UpdateFieldViewActionData_TypeInfo);
  UpdateFieldViewActionData___ctor(v3, v4);
  return (BattleActionData_o *)v3;
}