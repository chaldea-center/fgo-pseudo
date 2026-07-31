void BattleLogicServantTask___ctor(
        BattleLogicServantTask_o *this,
        int32_t actionType,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w1

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0);
  this->fields.actiontype = actionType;
  if ( !svtData )
    sub_21FFECC(v7, v8);
  if ( svtData->fields.isEnemy )
    v9 = 3;
  else
    v9 = 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)this, v9, svtData->fields.uniqueId, 0);
}