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
  __int64 v3; // x3
  __int64 v4; // x4
  UpdateFieldViewActionData_o *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_40FAA97 & 1) == 0 )
  {
    sub_B16FFC(&UpdateAllViewActionData_TypeInfo, logic);
    byte_40FAA97 = 1;
  }
  v5 = (UpdateFieldViewActionData_o *)sub_B170CC(UpdateAllViewActionData_TypeInfo, logic, method, v3, v4);
  UpdateFieldViewActionData___ctor(v5, v6);
  return (BattleActionData_o *)v5;
}