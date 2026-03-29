void UpdateIntervalBuffViewBattleLogicTask___ctor(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)actData);
  this->fields.actiontype = 58;
  this->fields.baseActData = actData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseActData, (int32_t)actData, v5, v6, v7, v8, v9, v10);
  this->fields.isSkipStep = 1;
}


BattleActionData_o *UpdateIntervalBuffViewBattleLogicTask__MakeActionData(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleActionData_o *baseActData; // x19
  UpdateViewIntervalBuffActionData_o *v5; // x20

  if ( (byte_4D33D7F & 1) == 0 )
  {
    sub_1C93AD4(&UpdateViewIntervalBuffActionData_TypeInfo);
    byte_4D33D7F = 1;
  }
  baseActData = this->fields.baseActData;
  v5 = (UpdateViewIntervalBuffActionData_o *)sub_1C93D20(UpdateViewIntervalBuffActionData_TypeInfo);
  UpdateViewIntervalBuffActionData___ctor(v5, baseActData, 0);
  return (BattleActionData_o *)v5;
}