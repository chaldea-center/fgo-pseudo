void NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4C3AB65 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9345/*"NPC_STEPIN"*/);
    byte_4C3AB65 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9345/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}