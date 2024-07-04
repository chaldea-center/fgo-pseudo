void __fastcall UpdateIntervalBuffViewBattleLogicTask___ctor(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  v4 = (ServantStatusBattleListViewItem_o *)this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)actData);
  v4[1].fields.sortValue2 = (int64_t)actData;
  v4 = (ServantStatusBattleListViewItem_o *)((char *)v4 + 240);
  *(_DWORD *)&v4[-2].fields.isEnabled = 58;
  sub_1B00C70(v4, (int32_t)actData, v5, v6);
  BYTE1(v4[-1].fields.dispLimitCount.fields.fakeValue) = 1;
}


BattleActionData_o *__fastcall UpdateIntervalBuffViewBattleLogicTask__MakeActionData(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleActionData_o *baseActData; // x19
  UpdateViewIntervalBuffActionData_o *v5; // x20

  if ( (byte_48E536D & 1) == 0 )
  {
    sub_1B00CCC(&UpdateViewIntervalBuffActionData_TypeInfo, logic);
    byte_48E536D = 1;
  }
  baseActData = this->fields.baseActData;
  v5 = (UpdateViewIntervalBuffActionData_o *)sub_1B00F18(UpdateViewIntervalBuffActionData_TypeInfo);
  UpdateViewIntervalBuffActionData___ctor(v5, baseActData, 0LL);
  return (BattleActionData_o *)v5;
}