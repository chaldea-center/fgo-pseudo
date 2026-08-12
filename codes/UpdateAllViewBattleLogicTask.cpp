void UpdateAllViewBattleLogicTask___ctor(UpdateAllViewBattleLogicTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 58;
  this->fields.isSkipStep = 1;
}


BattleActionData_o *UpdateAllViewBattleLogicTask__MakeActionData(
        UpdateAllViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  UpdateAllViewActionData_o *v3; // x19

  if ( (byte_5973D49 & 1) == 0 )
  {
    sub_2213A60(&UpdateAllViewActionData_TypeInfo);
    byte_5973D49 = 1;
  }
  v3 = (UpdateAllViewActionData_o *)sub_2213CCC(UpdateAllViewActionData_TypeInfo);
  UpdateAllViewActionData___ctor(v3, 0);
  return (BattleActionData_o *)v3;
}