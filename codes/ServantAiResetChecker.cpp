void __fastcall ServantAiResetChecker___ctor(
        ServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svtData = svtData;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtData, v5, v6, v7, v8, v9, v10);
}


bool __fastcall ServantAiResetChecker__IsDead(ServantAiResetChecker_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1BD36B4(0LL, method);
  return !BattleServantData__isAlive(svtData, 0, 0LL);
}


int32_t __fastcall ServantAiResetChecker__get_AiResetTiming(ServantAiResetChecker_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *svtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1BD36B4(this, method);
  deckSvt = svtData->fields.deckSvt;
  if ( deckSvt )
    LODWORD(deckSvt) = BattleDeckServantData__GetAiResetTiming(deckSvt, 0, 0LL);
  return (int)deckSvt;
}