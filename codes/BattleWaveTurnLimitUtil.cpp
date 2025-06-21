void __fastcall BattleWaveTurnLimitUtil___ctor(
        BattleWaveTurnLimitUtil_o *this,
        StageEntity_o *stageEnt,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !stageEnt )
    sub_1BCB254(this, 0LL);
  script = stageEnt->fields.script;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.EntityScript = script;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)script, v5, v6);
}


int32_t __fastcall BattleWaveTurnLimitUtil__get_TurnMode(BattleWaveTurnLimitUtil_o *this, const MethodInfo *method)
{
  return 1;
}