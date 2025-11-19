void OpponentAllFieldTargetAggregator___ctor(OpponentAllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0);
}


System_Int32_array *OpponentAllFieldTargetAggregator__GetCandidate(
        OpponentAllFieldTargetAggregator_o *this,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x20
  BattleData_o *actorId; // x0
  __int64 v5; // x1
  bool isEnemyID; // w21
  BattleData_o *v7; // x20

  battleData = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0);
  actorId = (BattleData_o *)TargetAggregator__get_actorId((TargetAggregator_o *)this, 0);
  if ( !battleData )
    goto LABEL_7;
  isEnemyID = BattleData__isEnemyID(battleData, (int32_t)actorId, 0);
  actorId = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0);
  v7 = actorId;
  if ( isEnemyID )
  {
    if ( actorId )
      return BattleData__getFieldPlayerServantIDList(actorId, 0, 0);
LABEL_7:
    sub_1C6BC60(actorId, v5);
  }
  actorId = (BattleData_o *)TargetAggregator__get_IsOpponentTargetOnly((TargetAggregator_o *)this, 0);
  if ( !v7 )
    goto LABEL_7;
  return BattleData__getFieldEnemyServantIDList(v7, (unsigned __int8)actorId & 1, 0);
}