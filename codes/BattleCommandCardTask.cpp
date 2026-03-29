void BattleCommandCardTask__SetAttacked(
        BattleCommandCardTask_o *this,
        BattleData_o *data,
        bool isAttacked,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C93D2C(this, 0);
  BattleData__SetCommandAttacked(data, isAttacked, 0);
}