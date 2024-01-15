// local variable allocation has failed, the output may be wrong!
void __fastcall NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  if ( (byte_40F7F3D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9338/*"NPC_STEPIN"*/, *(_QWORD *)&targetId);
    byte_40F7F3D = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9338/*"NPC_STEPIN"*/,
    targetId,
    isForcedSpeedOne,
    0LL);
}