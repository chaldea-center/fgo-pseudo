void __fastcall PartyAllFieldTargetAggregator___ctor(PartyAllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall PartyAllFieldTargetAggregator__GetCandidate(
        PartyAllFieldTargetAggregator_o *this,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x20
  int32_t actorId; // w0
  bool isEnemyID; // w20
  BattleData_o *v6; // x0

  battleData = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL);
  actorId = TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL);
  if ( !battleData
    || (isEnemyID = BattleData__isEnemyID(battleData, actorId, 0LL),
        (v6 = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  if ( isEnemyID )
    return BattleData__getFieldEnemyServantIDList(v6, 0, 0LL);
  else
    return BattleData__getFieldPlayerServantIDList(v6, 0LL, 0LL);
}