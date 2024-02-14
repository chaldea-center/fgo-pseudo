void __fastcall BattleStartServantAiResetChecker___ctor(
        BattleStartServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        BattleWarBoardInfo_WarBoardServantInfo_o *svtInfo,
        const MethodInfo *method)
{
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  ServantAiResetChecker___ctor((ServantAiResetChecker_o *)this, svtData, 0LL);
  this->fields.warBoardSvtInfo = svtInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.warBoardSvtInfo,
    (System_Int32_array **)svtInfo,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


bool __fastcall BattleStartServantAiResetChecker__IsDead(
        BattleStartServantAiResetChecker_o *this,
        const MethodInfo *method)
{
  BattleWarBoardInfo_WarBoardServantInfo_o *warBoardSvtInfo; // x0

  warBoardSvtInfo = this->fields.warBoardSvtInfo;
  if ( !warBoardSvtInfo )
    sub_B0D97C(0LL);
  return BattleWarBoardInfo_WarBoardServantInfo__IsBrokenPointInBoard(warBoardSvtInfo, 0LL);
}