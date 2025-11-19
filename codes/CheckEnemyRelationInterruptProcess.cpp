void CheckEnemyRelationInterruptProcess___ctor(
        CheckEnemyRelationInterruptProcess_o *this,
        bool isClearTemp,
        const MethodInfo *method)
{
  bool v3; // w20

  v3 = isClearTemp;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isClearTempDead = v3;
}


void CheckEnemyRelationInterruptProcess__AfterCreateAction(
        CheckEnemyRelationInterruptProcess_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( this->fields.isClearTempDead )
  {
    if ( !logic || (this = (CheckEnemyRelationInterruptProcess_o *)logic->fields.logicEnemyAi) == 0 )
      sub_1C6BC60(this, logic);
    BattleLogicEnemyAi__ClearTempDeadSvt((BattleLogicEnemyAi_o *)this, 0);
  }
}