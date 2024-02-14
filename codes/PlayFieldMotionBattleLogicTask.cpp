void __fastcall PlayFieldMotionBattleLogicTask___ctor(
        PlayFieldMotionBattleLogicTask_o *this,
        System_String_o *motionName,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  PlayFieldMotionBattleLogicTask_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  v6->fields.motionName = motionName;
  v6 = (PlayFieldMotionBattleLogicTask_o *)((char *)v6 + 104);
  v6[-1].fields._AiTimingPriority_k__BackingField = 44;
  sub_B0D840((BattleServantConfConponent_o *)v6, (System_Int32_array **)motionName, v7, v8, v9, v10, v11, v12);
  LOBYTE(v6->fields.command) = isForcedSpeedOne;
}