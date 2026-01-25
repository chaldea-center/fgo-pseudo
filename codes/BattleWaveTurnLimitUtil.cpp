void BattleWaveTurnLimitUtil___ctor(BattleWaveTurnLimitUtil_o *this, StageEntity_o *stageEnt, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( !stageEnt )
    sub_1C7BD40(this, 0);
  script = stageEnt->fields.script;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.EntityScript = script;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)script, v5, v6, v7, v8, v9, v10);
}


int32_t BattleWaveTurnLimitUtil__get_TurnMode(BattleWaveTurnLimitUtil_o *this, const MethodInfo *method)
{
  return 1;
}