void __fastcall UpdateIntervalBuffViewBattleLogicTask___ctor(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)actData);
  this->fields.actiontype = 58;
  this->fields.baseActData = actData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseActData, (int32_t)actData, v5, v6);
  this->fields.isSkipStep = 1;
}


BattleActionData_o *__fastcall UpdateIntervalBuffViewBattleLogicTask__MakeActionData(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleActionData_o *baseActData; // x19
  UpdateViewIntervalBuffActionData_o *v5; // x20

  if ( (byte_4B1F5A8 & 1) == 0 )
  {
    sub_1BCAFF8(&UpdateViewIntervalBuffActionData_TypeInfo, logic);
    byte_4B1F5A8 = 1;
  }
  baseActData = this->fields.baseActData;
  v5 = (UpdateViewIntervalBuffActionData_o *)sub_1BCB244(UpdateViewIntervalBuffActionData_TypeInfo);
  UpdateViewIntervalBuffActionData___ctor(v5, baseActData, 0LL);
  return (BattleActionData_o *)v5;
}