void __fastcall UpdateIntervalBuffViewBattleLogicTask___ctor(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v4 = (BattleServantConfConponent_o *)this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  v4->fields.AbillityTab = (struct UnityEngine_GameObject_o *)actData;
  v4 = (BattleServantConfConponent_o *)((char *)v4 + 208);
  LODWORD(v4[-1].fields.npSpeedChange) = 58;
  sub_B16F98(v4, (System_Int32_array **)actData, v5, v6, v7, v8, v9, v10);
  BYTE5(v4[-1].fields.BattleAssetUIAtlas) = 1;
}


BattleActionData_o *__fastcall UpdateIntervalBuffViewBattleLogicTask__MakeActionData(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleActionData_o *baseActData; // x19
  UpdateViewIntervalBuffActionData_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40FAA9A & 1) == 0 )
  {
    sub_B16FFC(&UpdateViewIntervalBuffActionData_TypeInfo, logic);
    byte_40FAA9A = 1;
  }
  baseActData = this->fields.baseActData;
  v7 = (UpdateViewIntervalBuffActionData_o *)sub_B170CC(
                                               UpdateViewIntervalBuffActionData_TypeInfo,
                                               logic,
                                               method,
                                               v3,
                                               v4);
  UpdateViewIntervalBuffActionData___ctor(v7, baseActData, v8);
  return (BattleActionData_o *)v7;
}