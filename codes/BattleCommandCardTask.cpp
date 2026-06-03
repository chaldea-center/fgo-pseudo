void BattleCommandCardTask___ctor(BattleCommandCardTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0);
}


void BattleCommandCardTask__SetAttacked(
        BattleCommandCardTask_o *this,
        BattleData_o *data,
        bool isAttacked,
        const MethodInfo *method)
{
  if ( !data )
    sub_1D0F30C(this, 0);
  BattleData__SetCommandAttacked(data, isAttacked, 0);
}