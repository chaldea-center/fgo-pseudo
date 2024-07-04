void __fastcall PlayFieldMotionBattleLogicTask___ctor(
        PlayFieldMotionBattleLogicTask_o *this,
        System_String_o *motionName,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  PlayFieldMotionBattleLogicTask_o *v5; // x20
  bool v6; // w21
  int32_t v7; // w2
  int32_t v8; // w3

  v5 = this;
  v6 = isForcedSpeedOne;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)motionName);
  v5->fields.motionName = motionName;
  v5 = (PlayFieldMotionBattleLogicTask_o *)((char *)v5 + 104);
  v5[-1].fields._AiTimingPriority_k__BackingField = 44;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v5, (int32_t)motionName, v7, v8);
  LOBYTE(v5->fields.command) = v6;
}