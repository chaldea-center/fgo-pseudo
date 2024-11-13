void __fastcall UpdateIntervalBuffViewBattleLogicTask___ctor(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  UpdateIntervalBuffViewBattleLogicTask_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  v4 = this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)actData);
  v4->fields.baseActData = actData;
  v4 = (UpdateIntervalBuffViewBattleLogicTask_o *)((char *)v4 + 240);
  LODWORD(v4[-1].fields.command) = 58;
  sub_1BCA784((PartyOrganizationUtility_o *)v4, (int64_t)actData, v5, v6, v7, v8, v9, v10);
  BYTE3(v4[-1].fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key) = 1;
}


BattleActionData_o *__fastcall UpdateIntervalBuffViewBattleLogicTask__MakeActionData(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActionData_o *baseActData; // x19
  UpdateViewIntervalBuffActionData_o *v6; // x20

  if ( (byte_4B18F27 & 1) == 0 )
  {
    sub_1BCA7E0(&UpdateViewIntervalBuffActionData_TypeInfo, logic, method);
    byte_4B18F27 = 1;
  }
  baseActData = this->fields.baseActData;
  v6 = (UpdateViewIntervalBuffActionData_o *)sub_1BCAA2C(UpdateViewIntervalBuffActionData_TypeInfo, logic, method, v3);
  UpdateViewIntervalBuffActionData___ctor(v6, baseActData, 0LL);
  return (BattleActionData_o *)v6;
}