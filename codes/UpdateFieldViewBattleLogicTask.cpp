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
  UpdateFieldViewActionData_o *v3; // x19

  if ( (byte_4A0114B & 1) == 0 )
  {
    sub_1B64870(&UpdateFieldViewActionData_TypeInfo, logic);
    byte_4A0114B = 1;
  }
  v3 = (UpdateFieldViewActionData_o *)sub_1B64ABC(UpdateFieldViewActionData_TypeInfo);
  UpdateFieldViewActionData___ctor(v3, 0LL);
  return (BattleActionData_o *)v3;
}