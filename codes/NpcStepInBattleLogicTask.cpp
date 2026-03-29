void NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4D33D78 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9400/*"NPC_STEPIN"*/);
    byte_4D33D78 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9400/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}