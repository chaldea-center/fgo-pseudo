void BattleOverwriteFieldMotionActionData___ctor(
        BattleOverwriteFieldMotionActionData_o *this,
        System_Int32_array *motionIds,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  ExecInActionData___ctor((ExecInActionData_o *)this, (const MethodInfo *)motionIds);
  this->fields.overwriteMotionIds = motionIds;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteMotionIds,
    (int32_t)motionIds,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void BattleOverwriteFieldMotionActionData__ExecAction(
        BattleOverwriteFieldMotionActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf )
    sub_1C942F0(this, 0);
  BattlePerformance__SetOverwriteFieldMotion(perf, this->fields.overwriteMotionIds, 1, 0);
}