void __fastcall BattleStartServantAiResetChecker___ctor(
        BattleStartServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        BattleWarBoardInfo_WarBoardServantInfo_o *svtInfo,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svtData = svtData;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)svtData, v7, v8);
  this->fields.warBoardSvtInfo = svtInfo;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.warBoardSvtInfo, (int32_t)svtInfo, v9, v10);
}


bool __fastcall BattleStartServantAiResetChecker__IsDead(
        BattleStartServantAiResetChecker_o *this,
        const MethodInfo *method)
{
  BattleWarBoardInfo_WarBoardServantInfo_o *warBoardSvtInfo; // x0

  warBoardSvtInfo = this->fields.warBoardSvtInfo;
  if ( !warBoardSvtInfo )
    sub_1B64C5C(0LL, method);
  return BattleWarBoardInfo_WarBoardServantInfo__IsBrokenPointInBoard(warBoardSvtInfo, 0LL);
}