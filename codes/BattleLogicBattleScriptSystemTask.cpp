void BattleLogicBattleScriptSystemTask___ctor(BattleLogicBattleScriptSystemTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0);
  this->fields.actiontype = 75;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicBattleScriptSystemTask__Init(
        BattleLogicBattleScriptSystemTask_o *this,
        BattleScriptEntity_array *entities,
        int32_t systemType,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.battleScriptEntities = entities;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleScriptEntities,
    (int32_t)entities,
    *(System_String_o **)&systemType,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.type = systemType;
}


BattleActionData_o *BattleLogicBattleScriptSystemTask__MakeActionData(
        BattleLogicBattleScriptSystemTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleScriptSystemActionData_o *v5; // x21
  __int64 ActorId; // x0
  __int64 v7; // x1

  if ( (byte_5973E30 & 1) == 0 )
  {
    sub_2213A60(&BattleScriptSystemActionData_TypeInfo);
    byte_5973E30 = 1;
  }
  v5 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleScriptEntities, 0) )
  {
    v5 = (BattleScriptSystemActionData_o *)sub_2213CCC(BattleScriptSystemActionData_TypeInfo);
    BattleScriptSystemActionData___ctor(v5, 0);
    ActorId = BattleLogicTask__getActorId((BattleLogicTask_o *)this, 0);
    if ( !v5 || (v5->fields.actorId = ActorId, !logic) )
      sub_2213CDC(ActorId, v7);
    BattleScriptSystemActionData__SetBattleScriptSystem(
      v5,
      logic->fields.logicBattleScript,
      this->fields.battleScriptEntities,
      this->fields.type,
      0);
  }
  return (BattleActionData_o *)v5;
}