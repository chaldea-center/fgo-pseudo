void BattleLogicBattleScriptTask___ctor(BattleLogicBattleScriptTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 75;
}


void BattleLogicBattleScriptTask__Init(
        BattleLogicBattleScriptTask_o *this,
        BattleScriptEntity_array *entities,
        bool isEach,
        const MethodInfo *method)
{
  bool v5; // w20

  v5 = isEach;
  this->fields.battleScriptEntities = entities;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.battleScriptEntities, (int32_t)entities, isEach, method);
  this->fields.isEachLoad = v5;
}


BattleActionData_o *BattleLogicBattleScriptTask__MakeActionData(
        BattleLogicBattleScriptTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleScriptActionData_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Int32_array *actorIdlist; // x8
  int v9; // w8

  if ( (byte_4CB9621 & 1) == 0 )
  {
    sub_1C6BA08(&BattleScriptActionData_TypeInfo);
    byte_4CB9621 = 1;
  }
  v5 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleScriptEntities, 0) )
  {
    v5 = (BattleScriptActionData_o *)sub_1C6BC54(BattleScriptActionData_TypeInfo);
    BattleScriptActionData___ctor(v5, 0);
    actorIdlist = this->fields.actorIdlist;
    if ( actorIdlist )
    {
      if ( !LODWORD(actorIdlist->max_length) )
        sub_1C6BC68(v6);
      v9 = actorIdlist->m_Items[0];
      if ( !v5 )
LABEL_12:
        sub_1C6BC60(v6, v7);
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
    BattleScriptActionData__SetBattleScript(
      v5,
      logic->fields.logicBattleScript,
      this->fields.battleScriptEntities,
      this->fields.isEachLoad,
      0);
  }
  return (BattleActionData_o *)v5;
}