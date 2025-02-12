// local variable allocation has failed, the output may be wrong!
void __fastcall PreLoadNpcBattleLogicTask___ctor(
        PreLoadNpcBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4BB74B5 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9491/*"NO_USER_DATA"*/, *(_QWORD *)&targetId);
    byte_4BB74B5 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9491/*"NO_USER_DATA"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}