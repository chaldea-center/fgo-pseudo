void __fastcall BattleStartServantAiResetChecker___ctor(
        BattleStartServantAiResetChecker_o *this,
        BattleServantData_o *svtData,
        BattleWarBoardInfo_WarBoardServantInfo_o *svtInfo,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svtData = svtData;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtData, v7, v8, v9, v10, v11, v12);
  this->fields.warBoardSvtInfo = svtInfo;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.warBoardSvtInfo,
    (int64_t)svtInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


bool __fastcall BattleStartServantAiResetChecker__IsDead(
        BattleStartServantAiResetChecker_o *this,
        const MethodInfo *method)
{
  BattleWarBoardInfo_WarBoardServantInfo_o *warBoardSvtInfo; // x0

  warBoardSvtInfo = this->fields.warBoardSvtInfo;
  if ( !warBoardSvtInfo )
    sub_1C1AE30(0LL, method);
  return BattleWarBoardInfo_WarBoardServantInfo__IsBrokenPointInBoard(warBoardSvtInfo, 0LL);
}