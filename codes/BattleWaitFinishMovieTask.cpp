void BattleWaitFinishMovieTask___ctor(BattleWaitFinishMovieTask_o *this, const MethodInfo *method)
{
  BaseAiActBattleLogicTask___ctor((BaseAiActBattleLogicTask_o *)this, 79, 0);
}


BattleActionData_o *BattleWaitFinishMovieTask__MakeActionData(
        BattleWaitFinishMovieTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleWaitFinishMovieActionData_o *v3; // x19

  if ( (byte_593BC1F & 1) == 0 )
  {
    sub_21FFC50(&BattleWaitFinishMovieActionData_TypeInfo);
    byte_593BC1F = 1;
  }
  v3 = (BattleWaitFinishMovieActionData_o *)sub_21FFEBC(BattleWaitFinishMovieActionData_TypeInfo);
  BattleWaitFinishMovieActionData___ctor(v3, 0);
  return (BattleActionData_o *)v3;
}