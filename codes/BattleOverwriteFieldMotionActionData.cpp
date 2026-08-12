void BattleOverwriteFieldMotionActionData___ctor(
        BattleOverwriteFieldMotionActionData_o *this,
        System_Int32_array *motionIds,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  ExecInActionData___ctor((ExecInActionData_o *)this, (const MethodInfo *)motionIds);
  this->fields.overwriteMotionIds = motionIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteMotionIds,
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
    sub_2213CDC(this, 0);
  BattlePerformance__SetOverwriteFieldMotion(perf, this->fields.overwriteMotionIds, 1, 0);
}