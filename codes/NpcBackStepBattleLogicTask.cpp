void __fastcall NpcBackStepBattleLogicTask___ctor(
        NpcBackStepBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  if ( (byte_42E6276 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9461/*"NPC_BACKSTEP"*/, targetId, isForcedSpeedOne, method);
    byte_42E6276 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9461/*"NPC_BACKSTEP"*/,
    targetId,
    isForcedSpeedOne,
    0LL);
}


bool __fastcall NpcBackStepBattleLogicTask__IsMakeAble(
        NpcBackStepBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayFieldMotionNpcBattleLogicTask_o *v5; // x20
  BattlePerformance_o *perf; // x19
  BattleActorControl_o *AiNpcActor; // x19

  v5 = (PlayFieldMotionNpcBattleLogicTask_o *)this;
  if ( (byte_42E6277 & 1) == 0 )
  {
    this = (NpcBackStepBattleLogicTask_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)logic, (_DWORD)method, v3);
    byte_42E6277 = 1;
  }
  if ( !logic )
    goto LABEL_12;
  perf = logic->fields.perf;
  this = (NpcBackStepBattleLogicTask_o *)PlayFieldMotionNpcBattleLogicTask__get_TargetId(v5, 0LL);
  if ( !perf )
    goto LABEL_12;
  AiNpcActor = BattlePerformance__GetAiNpcActor(perf, (int32_t)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (NpcBackStepBattleLogicTask_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AiNpcActor, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( AiNpcActor )
      return AiNpcActor->fields._IsStepInBattle_k__BackingField;
LABEL_12:
    sub_B5D69C(this, logic);
  }
  return 0;
}