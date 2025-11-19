void BattleStartServantAiResetChecker___ctor(
        BattleStartServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        BattleWarBoardInfo_WarBoardServantInfo_o *svtInfo,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.svtData = svtData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)svtData, v7, v8);
  this->fields.warBoardSvtInfo = svtInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.warBoardSvtInfo, (int32_t)svtInfo, v9, v10);
}


bool BattleStartServantAiResetChecker__IsDead(BattleStartServantAiResetChecker_o *this, const MethodInfo *method)
{
  BattleWarBoardInfo_WarBoardServantInfo_o *warBoardSvtInfo; // x0

  warBoardSvtInfo = this->fields.warBoardSvtInfo;
  if ( !warBoardSvtInfo )
    sub_1C6BC60(0, method);
  return BattleWarBoardInfo_WarBoardServantInfo__IsBrokenPointInBoard(warBoardSvtInfo, 0);
}