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

  if ( (byte_4B69987 & 1) == 0 )
  {
    sub_1BE4ACC(&UpdateAllViewActionData_TypeInfo, logic);
    byte_4B69987 = 1;
  }
  v3 = (UpdateAllViewActionData_o *)sub_1BE4D18(UpdateAllViewActionData_TypeInfo);
  UpdateAllViewActionData___ctor(v3, 0LL);
  return (BattleActionData_o *)v3;
}