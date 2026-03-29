void BattleWaitFinishMovieTask___ctor(BattleWaitFinishMovieTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 79;
}


BattleActionData_o *BattleWaitFinishMovieTask__MakeActionData(
        BattleWaitFinishMovieTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleWaitFinishMovieActionData_o *v3; // x19

  if ( (byte_4D33D86 & 1) == 0 )
  {
    sub_1C93AD4(&BattleWaitFinishMovieActionData_TypeInfo);
    byte_4D33D86 = 1;
  }
  v3 = (BattleWaitFinishMovieActionData_o *)sub_1C93D20(BattleWaitFinishMovieActionData_TypeInfo);
  BattleWaitFinishMovieActionData___ctor(v3, 0);
  return (BattleActionData_o *)v3;
}