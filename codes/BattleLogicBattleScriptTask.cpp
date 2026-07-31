void BattleLogicBattleScriptTask___ctor(BattleLogicBattleScriptTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0);
  this->fields.actiontype = 75;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicBattleScriptTask__Init(
        BattleLogicBattleScriptTask_o *this,
        BattleScriptEntity_array *entities,
        BaseAiActArgument_o *arg,
        bool isEach,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  this->fields.battleScriptEntities = entities;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleScriptEntities,
    (int32_t)entities,
    (System_String_o *)arg,
    (System_String_o *)isEach,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.aiActArg = arg;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.aiActArg, (int32_t)arg, v11, v12, v13, v14, v15, v16);
  this->fields.isEachLoad = isEach;
}


BattleActionData_o *BattleLogicBattleScriptTask__MakeActionData(
        BattleLogicBattleScriptTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleScriptActionData_o *v5; // x21
  __int64 ActorId; // x0
  __int64 v7; // x1

  if ( (byte_593BC23 & 1) == 0 )
  {
    sub_21FFC50(&BattleScriptActionData_TypeInfo);
    byte_593BC23 = 1;
  }
  v5 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleScriptEntities, 0) )
  {
    v5 = (BattleScriptActionData_o *)sub_21FFEBC(BattleScriptActionData_TypeInfo);
    BattleScriptActionData___ctor(v5, 0);
    ActorId = BattleLogicTask__getActorId((BattleLogicTask_o *)this, 0);
    if ( !v5 || (v5->fields.actorId = ActorId, !logic) )
      sub_21FFECC(ActorId, v7);
    BattleScriptActionData__SetBattleScript(
      v5,
      logic->fields.logicBattleScript,
      this->fields.battleScriptEntities,
      this->fields.aiActArg,
      this->fields.isEachLoad,
      0);
  }
  return (BattleActionData_o *)v5;
}