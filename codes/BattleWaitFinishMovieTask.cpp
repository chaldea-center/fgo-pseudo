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

  if ( (byte_5973E2B & 1) == 0 )
  {
    sub_2213A60(&BattleWaitFinishMovieActionData_TypeInfo);
    byte_5973E2B = 1;
  }
  v3 = (BattleWaitFinishMovieActionData_o *)sub_2213CCC(BattleWaitFinishMovieActionData_TypeInfo);
  BattleWaitFinishMovieActionData___ctor(v3, 0);
  return (BattleActionData_o *)v3;
}