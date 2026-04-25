void BattleLogicBattleScriptSystemTask___ctor(BattleLogicBattleScriptSystemTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0);
  this->fields.actiontype = 75;
}


void BattleLogicBattleScriptSystemTask__Init(
        BattleLogicBattleScriptSystemTask_o *this,
        BattleScriptEntity_array *entities,
        int32_t systemType,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.battleScriptEntities = entities;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleScriptEntities,
    (int32_t)entities,
    systemType,
    (int32_t)method,
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

  if ( (byte_4E07ED2 & 1) == 0 )
  {
    sub_1CE6700(&BattleScriptSystemActionData_TypeInfo);
    byte_4E07ED2 = 1;
  }
  v5 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleScriptEntities, 0) )
  {
    v5 = (BattleScriptSystemActionData_o *)sub_1CE694C(BattleScriptSystemActionData_TypeInfo);
    BattleScriptSystemActionData___ctor(v5, 0);
    ActorId = BattleLogicTask__getActorId((BattleLogicTask_o *)this, 0);
    if ( !v5 || (v5->fields.actorId = ActorId, !logic) )
      sub_1CE6958(ActorId, v7);
    BattleScriptSystemActionData__SetBattleScriptSystem(
      v5,
      logic->fields.logicBattleScript,
      this->fields.battleScriptEntities,
      this->fields.type,
      0);
  }
  return (BattleActionData_o *)v5;
}