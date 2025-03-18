// local variable allocation has failed, the output may be wrong!
void __fastcall NpcStepInBattleLogicTask___ctor(
        NpcStepInBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4C24EBD & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_9504/*"ORT_THIRD_FORM_ID"*/, *(_QWORD *)&targetId);
    byte_4C24EBD = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9504/*"ORT_THIRD_FORM_ID"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}