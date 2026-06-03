void BattleLogicBattleScriptTask___ctor(BattleLogicBattleScriptTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0);
  this->fields.actiontype = 75;
}


void BattleLogicBattleScriptTask__Init(
        BattleLogicBattleScriptTask_o *this,
        BattleScriptEntity_array *entities,
        BaseAiActArgument_o *arg,
        bool isEach,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  bool v10; // w21
  int32_t v11; // w2
  char v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v10 = isEach;
  this->fields.battleScriptEntities = entities;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleScriptEntities,
    (int32_t)entities,
    (int32_t)arg,
    isEach,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.aiActArg = arg;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.aiActArg, (int32_t)arg, v11, v12, v13, v14, v15, v16);
  this->fields.isEachLoad = v10;
}


BattleActionData_o *BattleLogicBattleScriptTask__MakeActionData(
        BattleLogicBattleScriptTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleScriptActionData_o *v5; // x21
  __int64 ActorId; // x0
  __int64 v7; // x1

  if ( (byte_4E7ABBF & 1) == 0 )
  {
    sub_1D0F0B4(&BattleScriptActionData_TypeInfo);
    byte_4E7ABBF = 1;
  }
  v5 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleScriptEntities, 0) )
  {
    v5 = (BattleScriptActionData_o *)sub_1D0F300(BattleScriptActionData_TypeInfo);
    BattleScriptActionData___ctor(v5, 0);
    ActorId = BattleLogicTask__getActorId((BattleLogicTask_o *)this, 0);
    if ( !v5 || (v5->fields.actorId = ActorId, !logic) )
      sub_1D0F30C(ActorId, v7);
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