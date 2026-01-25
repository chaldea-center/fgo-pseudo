void ServantAiResetChecker___ctor(
        ServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.svtData = svtData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)svtData, v5, v6, v7, v8, v9, v10);
}


bool ServantAiResetChecker__IsDead(ServantAiResetChecker_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1C7BD40(0, method);
  return !BattleServantData__isAlive(svtData, 0, 0);
}


int32_t ServantAiResetChecker__get_AiResetTiming(ServantAiResetChecker_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *svtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1C7BD40(this, method);
  deckSvt = svtData->fields.deckSvt;
  if ( deckSvt )
    LODWORD(deckSvt) = BattleDeckServantData__GetAiResetTiming(deckSvt, 0, 0);
  return (int)deckSvt;
}