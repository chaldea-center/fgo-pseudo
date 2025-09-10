void UpdateIntervalBuffViewBattleLogicTask___ctor(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)actData);
  this->fields.actiontype = 58;
  this->fields.baseActData = actData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseActData, (int32_t)actData, v5, v6);
  this->fields.isSkipStep = 1;
}


BattleActionData_o *UpdateIntervalBuffViewBattleLogicTask__MakeActionData(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleActionData_o *baseActData; // x19
  UpdateViewIntervalBuffActionData_o *v5; // x20

  if ( (byte_4C2A450 & 1) == 0 )
  {
    sub_1C2D490(&UpdateViewIntervalBuffActionData_TypeInfo);
    byte_4C2A450 = 1;
  }
  baseActData = this->fields.baseActData;
  v5 = (UpdateViewIntervalBuffActionData_o *)sub_1C2D6DC(UpdateViewIntervalBuffActionData_TypeInfo);
  UpdateViewIntervalBuffActionData___ctor(v5, baseActData, 0);
  return (BattleActionData_o *)v5;
}