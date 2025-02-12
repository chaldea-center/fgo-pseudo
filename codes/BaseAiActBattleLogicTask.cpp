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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( addAction )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.interruptActions, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !perf )
        sub_1C1AE30(IsNullOrEmpty, v7);
      p_interruptActions = &this->fields.interruptActions;
      BattlePerformance__addActionData(perf, *p_interruptActions, 0LL);
      *p_interruptActions = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)p_interruptActions, 0LL, v9, v10, v11, v12, v13, v14);
    }
  }
}


void __fastcall BaseAiActBattleLogicTask__SetInterruptAction(
        BaseAiActBattleLogicTask_o *this,
        BattleActionData_array *actions,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.interruptActions = actions;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.interruptActions,
    (int64_t)actions,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}