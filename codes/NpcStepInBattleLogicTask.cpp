void __fastcall NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  if ( (byte_4350BA3 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9480/*"NPC_STEPIN"*/);
    byte_4350BA3 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9480/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    0LL);
}