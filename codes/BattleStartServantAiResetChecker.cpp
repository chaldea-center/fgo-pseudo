void BattleStartServantAiResetChecker___ctor(
        BattleStartServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        BattleWarBoardInfo_WarBoardServantInfo_o *svtInfo,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.svtData = svtData;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)svtData, v7, v8, v9, v10, v11, v12);
  this->fields.warBoardSvtInfo = svtInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.warBoardSvtInfo,
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
    sub_1C71608(0, method);
  return BattleWarBoardInfo_WarBoardServantInfo__IsBrokenPointInBoard(warBoardSvtInfo, 0);
}