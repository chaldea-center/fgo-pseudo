void NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_593BB39 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9719/*"NPC_STEPIN"*/);
    byte_593BB39 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9719/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}