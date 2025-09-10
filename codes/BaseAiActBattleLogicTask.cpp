// local variable allocation has failed, the output may be wrong!
void BaseAiActBattleLogicTask___ctor(BaseAiActBattleLogicTask_o *this, int32_t actionType, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, *(const MethodInfo **)&actionType);
  this->fields.actiontype = actionType;
}


void BaseAiActBattleLogicTask__Init(
        BaseAiActBattleLogicTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  ;
}