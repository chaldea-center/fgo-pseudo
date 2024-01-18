// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicServantTask___ctor(
        BattleLogicServantTask_o *this,
        int32_t actionType,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int32_t v10; // w1

  BattleLogicTask___ctor((BattleLogicTask_o *)this, *(const MethodInfo **)&actionType);
  this->fields.actiontype = actionType;
  if ( !svtData )
    sub_B2C434(v7, v8);
  if ( svtData->fields.isEnemy )
    v10 = 3;
  else
    v10 = 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)this, v10, svtData->fields.uniqueId, v9);
}