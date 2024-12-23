// local variable allocation has failed, the output may be wrong!
void __fastcall PreLoadNpcBattleLogicTask___ctor(
        PreLoadNpcBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4B69982 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9467/*"NPC_PRE_LOAD"*/, *(_QWORD *)&targetId);
    byte_4B69982 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9467/*"NPC_PRE_LOAD"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}