// local variable allocation has failed, the output may be wrong!
void __fastcall PreLoadNpcBattleLogicTask___ctor(
        PreLoadNpcBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_40F8FC7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9337, *(_QWORD *)&targetId);
    byte_40F8FC7 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9337,
    targetId,
    isForcedSpeedOne,
    v4);
}