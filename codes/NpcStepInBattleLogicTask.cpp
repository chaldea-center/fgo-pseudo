void NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_5973D45 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9732/*"NPC_STEPIN"*/);
    byte_5973D45 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9732/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}