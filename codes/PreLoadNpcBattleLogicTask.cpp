void __fastcall PreLoadNpcBattleLogicTask___ctor(
        PreLoadNpcBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4A5DE0A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9313/*"NPC_PRE_LOAD"*/);
    byte_4A5DE0A = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9313/*"NPC_PRE_LOAD"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}