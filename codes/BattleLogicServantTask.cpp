// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicServantTask___ctor(
        BattleLogicServantTask_o *this,
        int32_t actionType,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v7; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // w1

  BattleLogicTask___ctor((BattleLogicTask_o *)this, *(const MethodInfo **)&actionType);
  this->fields.actiontype = actionType;
  if ( !svtData )
    sub_B0D97C(v7);
  if ( svtData->fields.isEnemy )
    v9 = 3;
  else
    v9 = 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)this, v9, svtData->fields.uniqueId, v8);
}