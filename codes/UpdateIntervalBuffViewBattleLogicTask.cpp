void UpdateIntervalBuffViewBattleLogicTask___ctor(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)actData);
  this->fields.actiontype = 58;
  this->fields.baseActData = actData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseActData, (int32_t)actData, v5, v6, v7, v8, v9, v10);
  this->fields.isSkipStep = 1;
}


BattleActionData_o *UpdateIntervalBuffViewBattleLogicTask__MakeActionData(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleActionData_o *baseActData; // x19
  UpdateViewIntervalBuffActionData_o *v5; // x20

  if ( (byte_5973D4C & 1) == 0 )
  {
    sub_2213A60(&UpdateViewIntervalBuffActionData_TypeInfo);
    byte_5973D4C = 1;
  }
  baseActData = this->fields.baseActData;
  v5 = (UpdateViewIntervalBuffActionData_o *)sub_2213CCC(UpdateViewIntervalBuffActionData_TypeInfo);
  UpdateViewIntervalBuffActionData___ctor(v5, baseActData, 0);
  return (BattleActionData_o *)v5;
}