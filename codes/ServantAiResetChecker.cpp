void ServantAiResetChecker___ctor(
        ServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.svtData = svtData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)svtData, v5, v6);
}


bool ServantAiResetChecker__IsDead(ServantAiResetChecker_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1C32E7C(0);
  return !BattleServantData__isAlive(svtData, 0, 0);
}


int32_t ServantAiResetChecker__get_AiResetTiming(ServantAiResetChecker_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *svtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1C32E7C(this);
  deckSvt = svtData->fields.deckSvt;
  if ( deckSvt )
    LODWORD(deckSvt) = BattleDeckServantData__GetAiResetTiming(deckSvt, 0, 0);
  return (int)deckSvt;
}