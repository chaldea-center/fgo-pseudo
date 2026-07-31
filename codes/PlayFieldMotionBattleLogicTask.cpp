void PlayFieldMotionBattleLogicTask___ctor(
        PlayFieldMotionBattleLogicTask_o *this,
        System_String_o *motionName,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  PlayFieldMotionBattleLogicTask_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)motionName);
  v6->fields.motionName = motionName;
  v6 = (PlayFieldMotionBattleLogicTask_o *)((char *)v6 + 120);
  *(_DWORD *)&v6[-1].fields._IsBattleScriptRelationTask_k__BackingField = 44;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6, (int32_t)motionName, v7, v8, v9, v10, v11, v12);
  LOBYTE(v6->fields.combo) = isForcedSpeedOne;
}