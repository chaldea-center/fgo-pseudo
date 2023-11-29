// local variable allocation has failed, the output may be wrong!
void __fastcall NpcBackStepBattleLogicTask___ctor(
        NpcBackStepBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  if ( (byte_40F93A8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9335, *(_QWORD *)&targetId);
    byte_40F93A8 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9335,
    targetId,
    isForcedSpeedOne,
    0LL);
}


bool __fastcall NpcBackStepBattleLogicTask__IsMakeAble(
        NpcBackStepBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x19
  int32_t TargetId; // w0
  BattleActorControl_o *AiNpcActor; // x19

  if ( (byte_40F93A9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, logic);
    byte_40F93A9 = 1;
  }
  if ( !logic )
    goto LABEL_12;
  perf = logic->fields.perf;
  TargetId = PlayFieldMotionNpcBattleLogicTask__get_TargetId((PlayFieldMotionNpcBattleLogicTask_o *)this, 0LL);
  if ( !perf )
    goto LABEL_12;
  AiNpcActor = BattlePerformance__GetAiNpcActor(perf, TargetId, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AiNpcActor, 0LL, 0LL) )
  {
    if ( AiNpcActor )
      return AiNpcActor->fields._IsStepInBattle_k__BackingField;
LABEL_12:
    sub_B170D4();
  }
  return 0;
}