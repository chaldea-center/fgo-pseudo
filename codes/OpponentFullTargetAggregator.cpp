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
  bool isEnemyID; // w21
  BattleData_o *v6; // x20

  battleData = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL);
  actorId = (BattleData_o *)TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL);
  if ( !battleData )
    goto LABEL_7;
  isEnemyID = BattleData__isEnemyID(battleData, (int32_t)actorId, 0LL);
  actorId = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL);
  v6 = actorId;
  if ( isEnemyID )
  {
    if ( actorId )
      return BattleData__getPlayerServantIDList(actorId, 1, 0LL, 0LL);
LABEL_7:
    sub_B0D97C(actorId);
  }
  actorId = (BattleData_o *)TargetAggregator__get_IsOpponentTargetOnly((TargetAggregator_o *)this, 0LL);
  if ( !v6 )
    goto LABEL_7;
  return BattleData__getEnemyServantIDList(v6, 1, (unsigned __int8)actorId & 1, 0LL);
}