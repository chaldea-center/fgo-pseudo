void __fastcall ServantAiResetChecker___ctor(
        ServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svtData = svtData;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)svtData, v5, v6);
}


bool __fastcall ServantAiResetChecker__IsDead(ServantAiResetChecker_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1B9026C(0LL, method);
  return !BattleServantData__isAlive(svtData, 0, 0LL);
}


int32_t __fastcall ServantAiResetChecker__get_AiResetTiming(ServantAiResetChecker_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *svtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1B9026C(this, method);
  deckSvt = svtData->fields.deckSvt;
  if ( deckSvt )
    LODWORD(deckSvt) = BattleDeckServantData__GetAiResetTiming(deckSvt, 0, 0LL);
  return (int)deckSvt;
}