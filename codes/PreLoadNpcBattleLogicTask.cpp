void PreLoadNpcBattleLogicTask___ctor(
        PreLoadNpcBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_593BB38 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9718/*"NPC_PRE_LOAD"*/);
    byte_593BB38 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9718/*"NPC_PRE_LOAD"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}