void BattleWaveTurnLimitUtil___ctor(BattleWaveTurnLimitUtil_o *this, StageEntity_o *stageEnt, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( !stageEnt )
    sub_21FFECC(this, 0);
  script = stageEnt->fields.script;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.EntityScript = script;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)script, v5, v6, v7, v8, v9, v10);
}


int32_t BattleWaveTurnLimitUtil__get_TurnMode(BattleWaveTurnLimitUtil_o *this, const MethodInfo *method)
{
  return 1;
}