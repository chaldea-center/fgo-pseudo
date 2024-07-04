// local variable allocation has failed, the output may be wrong!
void __fastcall NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_48E5367 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9211/*"NPC_STEPIN"*/, *(_QWORD *)&targetId);
    byte_48E5367 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9211/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}