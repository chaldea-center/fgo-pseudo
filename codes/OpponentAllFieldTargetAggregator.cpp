void __fastcall OpponentAllFieldTargetAggregator___ctor(
        OpponentAllFieldTargetAggregator_o *this,
        const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall OpponentAllFieldTargetAggregator__GetCandidate(
        OpponentAllFieldTargetAggregator_o *this,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x20
  int32_t actorId; // w0
  bool isEnemyID; // w21
  BattleData_o *v6; // x0
  BattleData_o *v7; // x20
  bool IsOpponentTargetOnly; // w0

  battleData = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL);
  actorId = TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL);
  if ( !battleData )
    goto LABEL_7;
  isEnemyID = BattleData__isEnemyID(battleData, actorId, 0LL);
  v6 = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL);
  v7 = v6;
  if ( isEnemyID )
  {
    if ( v6 )
      return BattleData__getFieldPlayerServantIDList(v6, 0LL, 0LL);
LABEL_7:
    sub_B170D4();
  }
  IsOpponentTargetOnly = TargetAggregator__get_IsOpponentTargetOnly((TargetAggregator_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_7;
  return BattleData__getFieldEnemyServantIDList(v7, IsOpponentTargetOnly, 0LL);
}