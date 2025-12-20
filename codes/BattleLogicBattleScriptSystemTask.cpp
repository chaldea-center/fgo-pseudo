void BattleLogicBattleScriptSystemTask___ctor(BattleLogicBattleScriptSystemTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
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
  sub_1C9403C(
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
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Int32_array *actorIdlist; // x8
  int v9; // w8

  if ( (byte_4D2FC22 & 1) == 0 )
  {
    sub_1C94098(&BattleScriptSystemActionData_TypeInfo);
    byte_4D2FC22 = 1;
  }
  v5 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleScriptEntities, 0) )
  {
    v5 = (BattleScriptSystemActionData_o *)sub_1C942E4(BattleScriptSystemActionData_TypeInfo);
    BattleScriptSystemActionData___ctor(v5, 0);
    actorIdlist = this->fields.actorIdlist;
    if ( actorIdlist )
    {
      if ( !LODWORD(actorIdlist->max_length) )
        sub_1C942F8(v6);
      v9 = actorIdlist->m_Items[0];
      if ( !v5 )
LABEL_12:
        sub_1C942F0(v6, v7);
    }
    else
    {
      v9 = -1;
      if ( !v5 )
        goto LABEL_12;
    }
    v5->fields.actorId = v9;
    if ( !logic )
      goto LABEL_12;
    BattleScriptSystemActionData__SetBattleScriptSystem(
      v5,
      logic->fields.logicBattleScript,
      this->fields.battleScriptEntities,
      this->fields.type,
      0);
  }
  return (BattleActionData_o *)v5;
}