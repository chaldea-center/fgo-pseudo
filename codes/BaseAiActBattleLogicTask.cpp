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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( addAction )
  {
    p_interruptActions = &this->fields.interruptActions;
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.interruptActions, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !perf )
        sub_1BCAA3C(IsNullOrEmpty, v7);
      BattlePerformance__addActionData(perf, *p_interruptActions, 0LL);
      *p_interruptActions = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)p_interruptActions, 0LL, v8, v9, v10, v11, v12, v13);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.interruptActions,
    (int64_t)actions,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}