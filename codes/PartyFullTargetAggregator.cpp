void __fastcall PartyFullTargetAggregator___ctor(PartyFullTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall PartyFullTargetAggregator__GetCandidate(
        PartyFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x20
  BattleData_o *actorId; // x0
  __int64 v5; // x1
  bool isEnemyID; // w20

  battleData = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL);
  actorId = (BattleData_o *)TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL);
  if ( !battleData
    || (isEnemyID = BattleData__isEnemyID(battleData, (int32_t)actorId, 0LL),
        (actorId = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(actorId, v5);
  }
  if ( isEnemyID )
    return BattleData__getEnemyServantIDList(actorId, 1, 0, 0LL);
  else
    return BattleData__getPlayerServantIDList(actorId, 1, 0LL, 0LL);
}