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
  v4->fields.BattleServantAbilityObj = (struct UnityEngine_GameObject_o *)actData;
  v4 = (BattleServantConfConponent_o *)((char *)v4 + 224);
  LODWORD(v4[-1].fields.CardAndCommandObj) = 58;
  sub_B2C2F8(v4, (System_Int32_array **)actData, v5, v6, v7, v8, v9, v10);
  BYTE1(v4[-1].fields.BattleAssetUIAtlas) = 1;
}


BattleActionData_o *__fastcall UpdateIntervalBuffViewBattleLogicTask__MakeActionData(
        UpdateIntervalBuffViewBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleActionData_o *baseActData; // x19
  UpdateViewIntervalBuffActionData_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4188A78 & 1) == 0 )
  {
    sub_B2C35C(&UpdateViewIntervalBuffActionData_TypeInfo, logic);
    byte_4188A78 = 1;
  }
  baseActData = this->fields.baseActData;
  v5 = (UpdateViewIntervalBuffActionData_o *)sub_B2C42C(UpdateViewIntervalBuffActionData_TypeInfo);
  UpdateViewIntervalBuffActionData___ctor(v5, baseActData, v6);
  return (BattleActionData_o *)v5;
}