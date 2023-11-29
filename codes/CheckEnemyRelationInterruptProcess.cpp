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
  BattleLogicEnemyAi_o *logicEnemyAi; // x0

  if ( this->fields.isClearTempDead )
  {
    if ( !logic || (logicEnemyAi = logic->fields.logicEnemyAi) == 0LL )
      sub_B170D4();
    BattleLogicEnemyAi__ClearTempDeadSvt(logicEnemyAi, 0LL);
  }
}