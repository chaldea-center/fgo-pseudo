void BattleLogicSystemTask___ctor(BattleLogicSystemTask_o *this, float time, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 7;
  this->fields.systemTime = time;
}