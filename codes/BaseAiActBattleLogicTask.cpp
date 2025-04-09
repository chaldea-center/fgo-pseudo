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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  BattleActionData_array **p_interruptActions; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( addAction )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.interruptActions, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !perf )
        sub_1B4D1EC(IsNullOrEmpty, v7);
      p_interruptActions = &this->fields.interruptActions;
      BattlePerformance__addActionData(perf, *p_interruptActions, 0LL);
      *p_interruptActions = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)p_interruptActions, 0, v9, v10);
    }
  }
}


void __fastcall BaseAiActBattleLogicTask__SetInterruptAction(
        BaseAiActBattleLogicTask_o *this,
        BattleActionData_array *actions,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.interruptActions = actions;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.interruptActions, (int32_t)actions, (int32_t)method, v3);
}