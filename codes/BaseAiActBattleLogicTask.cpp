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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1

  if ( addAction )
  {
    p_interruptActions = &this->fields.interruptActions;
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                      (System_Collections_ICollection_o *)this->fields.interruptActions,
                      (const MethodInfo *)addAction);
    if ( !IsNullOrEmpty )
    {
      if ( !perf )
        sub_B2C434(IsNullOrEmpty, v7);
      BattlePerformance__addActionData(perf, *p_interruptActions, 0LL);
      *p_interruptActions = 0LL;
      sub_B2C2F8(p_interruptActions, 0LL);
    }
  }
}


void __fastcall BaseAiActBattleLogicTask__SetInterruptAction(
        BaseAiActBattleLogicTask_o *this,
        BattleActionData_array *actions,
        const MethodInfo *method)
{
  this->fields.interruptActions = actions;
  sub_B2C2F8(&this->fields.interruptActions, actions);
}