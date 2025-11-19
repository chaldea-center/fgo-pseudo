void BattleQuestPhaseTurnLimitUtil___ctor(
        BattleQuestPhaseTurnLimitUtil_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !questPhaseEnt )
    sub_1C6BC60(this, 0);
  script = questPhaseEnt->fields.script;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.EntityScript = script;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)script, v5, v6);
}


bool BattleQuestPhaseTurnLimitUtil__IsTurnElapsedEndBattleFlag(
        BattleQuestPhaseTurnLimitUtil_o *this,
        const MethodInfo *method)
{
  return 1;
}


int32_t BattleQuestPhaseTurnLimitUtil__get_TurnMode(BattleQuestPhaseTurnLimitUtil_o *this, const MethodInfo *method)
{
  return 2;
}