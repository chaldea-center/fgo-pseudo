void PlayFieldMotionBattleLogicTask___ctor(
        PlayFieldMotionBattleLogicTask_o *this,
        System_String_o *motionName,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  PlayFieldMotionBattleLogicTask_o *v5; // x20
  bool v6; // w21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v5 = this;
  v6 = isForcedSpeedOne;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)motionName);
  v5->fields.motionName = motionName;
  v5 = (PlayFieldMotionBattleLogicTask_o *)((char *)v5 + 120);
  *(_DWORD *)&v5[-1].fields.isNoCriticalOnAttack = 44;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v5, (int32_t)motionName, v7, v8, v9, v10, v11, v12);
  LOBYTE(v5->fields.combo) = v6;
}