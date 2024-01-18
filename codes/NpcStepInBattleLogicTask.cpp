// local variable allocation has failed, the output may be wrong!
void __fastcall NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  if ( (byte_4185120 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9368/*"NPC_STEPIN"*/, *(_QWORD *)&targetId);
    byte_4185120 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9368/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    0LL);
}