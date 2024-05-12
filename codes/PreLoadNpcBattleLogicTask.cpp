void __fastcall PreLoadNpcBattleLogicTask___ctor(
        PreLoadNpcBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_438B38B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9538/*"NPC_PRE_LOAD"*/);
    byte_438B38B = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9538/*"NPC_PRE_LOAD"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}