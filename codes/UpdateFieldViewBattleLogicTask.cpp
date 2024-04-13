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
  __int64 v3; // x3
  UpdateFieldViewActionData_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_42EA13F & 1) == 0 )
  {
    sub_B5D5C4(&UpdateFieldViewActionData_TypeInfo, (_DWORD)logic, (_DWORD)method, v3);
    byte_42EA13F = 1;
  }
  v4 = (UpdateFieldViewActionData_o *)sub_B5D694(UpdateFieldViewActionData_TypeInfo);
  UpdateFieldViewActionData___ctor(v4, v5);
  return (BattleActionData_o *)v4;
}