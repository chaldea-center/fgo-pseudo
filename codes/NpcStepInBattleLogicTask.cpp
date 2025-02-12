// local variable allocation has failed, the output may be wrong!
void __fastcall NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4BB74B6 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9492/*"NPACTOR"*/, *(_QWORD *)&targetId);
    byte_4BB74B6 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9492/*"NPACTOR"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}