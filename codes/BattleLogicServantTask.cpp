// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicServantTask___ctor(
        BattleLogicServantTask_o *this,
        int32_t actionType,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  int32_t v8; // w1

  BattleLogicTask___ctor((BattleLogicTask_o *)this, *(const MethodInfo **)&actionType);
  this->fields.actiontype = actionType;
  if ( !svtData )
    sub_B170D4();
  if ( svtData->fields.isEnemy )
    v8 = 3;
  else
    v8 = 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)this, v8, svtData->fields.uniqueId, v7);
}