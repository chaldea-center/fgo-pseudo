void BattleStartServantAiResetChecker___ctor(
        BattleStartServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        BattleWarBoardInfo_WarBoardServantInfo_o *svtInfo,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.svtData = svtData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)svtData, v7, v8, v9, v10, v11, v12);
  this->fields.warBoardSvtInfo = svtInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.warBoardSvtInfo,
    (int32_t)svtInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


bool BattleStartServantAiResetChecker__IsDead(BattleStartServantAiResetChecker_o *this, const MethodInfo *method)
{
  BattleWarBoardInfo_WarBoardServantInfo_o *warBoardSvtInfo; // x0

  warBoardSvtInfo = this->fields.warBoardSvtInfo;
  if ( !warBoardSvtInfo )
    sub_2213CDC(0, method);
  return BattleWarBoardInfo_WarBoardServantInfo__IsBrokenPointInBoard(warBoardSvtInfo, 0);
}