void BattleLogicSystemTask___ctor(BattleLogicSystemTask_o *this, float time, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0);
  this->fields.systemTime = time;
  this->fields.actiontype = 7;
}