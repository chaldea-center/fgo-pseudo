void __fastcall NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  if ( (byte_438A24B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9539/*"NPC_STEPIN"*/);
    byte_438A24B = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9539/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    0LL);
}