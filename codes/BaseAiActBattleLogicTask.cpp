void __fastcall BaseAiActBattleLogicTask___ctor(
        BaseAiActBattleLogicTask_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = actionType;
}


void __fastcall BaseAiActBattleLogicTask__Init(
        BaseAiActBattleLogicTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  ;
}


void __fastcall BaseAiActBattleLogicTask__InterruptAction(
        BaseAiActBattleLogicTask_o *this,
        BattleActionData_o *addAction,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  BattleActionData_array **p_interruptActions; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( addAction )
  {
    p_interruptActions = &this->fields.interruptActions;
    if ( !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields.interruptActions,
            (const MethodInfo *)addAction) )
    {
      if ( !perf )
        sub_B170D4();
      BattlePerformance__addActionData(perf, *p_interruptActions, 0LL);
      *p_interruptActions = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_interruptActions, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
}


void __fastcall BaseAiActBattleLogicTask__SetInterruptAction(
        BaseAiActBattleLogicTask_o *this,
        BattleActionData_array *actions,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.interruptActions = actions;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.interruptActions,
    (System_Int32_array **)actions,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}