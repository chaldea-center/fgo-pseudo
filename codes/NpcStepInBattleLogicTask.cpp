void __fastcall NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  if ( (byte_42ADB10 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9425/*"NPC_STEPIN"*/);
    byte_42ADB10 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9425/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    0LL);
}