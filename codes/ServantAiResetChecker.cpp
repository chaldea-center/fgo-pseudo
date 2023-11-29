void __fastcall ServantAiResetChecker___ctor(
        ServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  AiResetChecker___ctor((AiResetChecker_o *)this, 0LL);
  this->fields.svtData = svtData;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
}


bool __fastcall ServantAiResetChecker__IsDead(ServantAiResetChecker_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_B170D4();
  return !BattleServantData__isAlive(svtData, 0, 0LL);
}


int32_t __fastcall ServantAiResetChecker__get_AiResetTiming(ServantAiResetChecker_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *svtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  svtData = this->fields.svtData;
  if ( !svtData )
    sub_B170D4();
  deckSvt = svtData->fields.deckSvt;
  if ( deckSvt )
    LODWORD(deckSvt) = BattleDeckServantData__GetAiResetTiming(deckSvt, 0, 0LL);
  return (int)deckSvt;
}