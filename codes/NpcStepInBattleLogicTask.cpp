void NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4E07DF3 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_9418/*"NPC_STEPIN"*/);
    byte_4E07DF3 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9418/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}