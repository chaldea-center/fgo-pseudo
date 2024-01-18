void __fastcall OpponentFullTargetAggregator___ctor(OpponentFullTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall OpponentFullTargetAggregator__GetCandidate(
        OpponentFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x20
  BattleData_o *actorId; // x0
  __int64 v5; // x1
  bool isEnemyID; // w21
  BattleData_o *v7; // x20

  battleData = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL);
  actorId = (BattleData_o *)TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL);
  if ( !battleData )
    goto LABEL_7;
  isEnemyID = BattleData__isEnemyID(battleData, (int32_t)actorId, 0LL);
  actorId = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL);
  v7 = actorId;
  if ( isEnemyID )
  {
    if ( actorId )
      return BattleData__getPlayerServantIDList(actorId, 1, 0LL, 0LL);
LABEL_7:
    sub_B2C434(actorId, v5);
  }
  actorId = (BattleData_o *)TargetAggregator__get_IsOpponentTargetOnly((TargetAggregator_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_7;
  return BattleData__getEnemyServantIDList(v7, 1, (unsigned __int8)actorId & 1, 0LL);
}