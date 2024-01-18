void __fastcall CheckEnemyRelationInterruptProcess___ctor(
        CheckEnemyRelationInterruptProcess_o *this,
        bool isClearTemp,
        const MethodInfo *method)
{
  BaseTaskInterruptProcess___ctor((BaseTaskInterruptProcess_o *)this, 0LL);
  this->fields.isClearTempDead = isClearTemp;
}


void __fastcall CheckEnemyRelationInterruptProcess__AfterCreateAction(
        CheckEnemyRelationInterruptProcess_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( this->fields.isClearTempDead )
  {
    if ( !logic || (this = (CheckEnemyRelationInterruptProcess_o *)logic->fields.logicEnemyAi) == 0LL )
      sub_B2C434(this, logic);
    BattleLogicEnemyAi__ClearTempDeadSvt((BattleLogicEnemyAi_o *)this, 0LL);
  }
}