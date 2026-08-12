void TurnAnimEffectLogicTask___ctor(
        TurnAnimEffectLogicTask_o *this,
        bool isEndEnemyTurn,
        BattleLogicFunction_o *logicFunction,
        System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____o *turnProgressBuffDict,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  CreateActionDataLogicTask___ctor((CreateActionDataLogicTask_o *)this, 0);
  *(&this->fields.gimmickFixedReelOrder + 1) = isEndEnemyTurn;
  *(_QWORD *)&this->fields.isEndEnemyTurn = logicFunction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isEndEnemyTurn,
    (int32_t)logicFunction,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.logicFunction = (struct BattleLogicFunction_o *)turnProgressBuffDict;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.logicFunction,
    (int32_t)turnProgressBuffDict,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


BattleActionData_o *TurnAnimEffectLogicTask__MakeActionData(
        TurnAnimEffectLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  bool v5; // w21
  struct BattleLogicFunction_o *logicFunction; // x20
  BattleLogicFunction_o *v7; // x22
  TurnAnimEffectActionData_o *v8; // x23

  if ( (byte_5973E31 & 1) == 0 )
  {
    sub_2213A60(&TurnAnimEffectActionData_TypeInfo);
    byte_5973E31 = 1;
  }
  v5 = *(&this->fields.gimmickFixedReelOrder + 1);
  v7 = *(BattleLogicFunction_o **)&this->fields.isEndEnemyTurn;
  logicFunction = this->fields.logicFunction;
  v8 = (TurnAnimEffectActionData_o *)sub_2213CCC(TurnAnimEffectActionData_TypeInfo);
  TurnAnimEffectActionData___ctor(
    v8,
    v5,
    logic,
    v7,
    (System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____o *)logicFunction,
    0);
  return (BattleActionData_o *)v8;
}