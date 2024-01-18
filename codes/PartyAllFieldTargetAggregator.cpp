void __fastcall PartyAllFieldTargetAggregator___ctor(PartyAllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall PartyAllFieldTargetAggregator__GetCandidate(
        PartyAllFieldTargetAggregator_o *this,
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
    return BattleData__getFieldEnemyServantIDList(actorId, 0, 0LL);
  else
    return BattleData__getFieldPlayerServantIDList(actorId, 0LL, 0LL);
}