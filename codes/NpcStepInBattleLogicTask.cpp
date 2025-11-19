void NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4CB9614 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9343/*"NPC_STEPIN"*/);
    byte_4CB9614 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9343/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}