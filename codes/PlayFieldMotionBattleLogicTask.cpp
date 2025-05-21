void __fastcall PlayFieldMotionBattleLogicTask___ctor(
        PlayFieldMotionBattleLogicTask_o *this,
        System_String_o *motionName,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  PlayFieldMotionBattleLogicTask_o *v5; // x20
  bool v6; // w21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v5 = this;
  v6 = isForcedSpeedOne;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)motionName);
  v5->fields.motionName = motionName;
  v5 = (PlayFieldMotionBattleLogicTask_o *)((char *)v5 + 120);
  *(_DWORD *)&v5[-1].fields.isNoCriticalOnAttack = 44;
  sub_1BDB81C((CGThumbnailListItem_o *)v5, (int32_t)motionName, v7, v8);
  LOBYTE(v5->fields.combo) = v6;
}