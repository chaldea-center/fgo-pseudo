// local variable allocation has failed, the output may be wrong!
void __fastcall BaseAiActBattleLogicTask___ctor(
        BaseAiActBattleLogicTask_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, *(const MethodInfo **)&actionType);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( addAction )
  {
    p_interruptActions = &this->fields.interruptActions;
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.interruptActions, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !perf )
        sub_1B64ACC(IsNullOrEmpty, v7);
      BattlePerformance__addActionData(perf, *p_interruptActions, 0LL);
      *p_interruptActions = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)p_interruptActions, 0, v8, v9);
    }
  }
}


void __fastcall BaseAiActBattleLogicTask__SetInterruptAction(
        BaseAiActBattleLogicTask_o *this,
        BattleActionData_array *actions,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.interruptActions = actions;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.interruptActions,
    (int32_t)actions,
    (int32_t)method,
    v3);
}