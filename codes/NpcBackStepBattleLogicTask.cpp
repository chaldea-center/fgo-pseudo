void __fastcall NpcBackStepBattleLogicTask___ctor(
        NpcBackStepBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  if ( (byte_42ADADF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9422/*"NPC_BACKSTEP"*/);
    byte_42ADADF = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9422/*"NPC_BACKSTEP"*/,
    targetId,
    isForcedSpeedOne,
    0LL);
}


bool __fastcall NpcBackStepBattleLogicTask__IsMakeAble(
        NpcBackStepBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  PlayFieldMotionNpcBattleLogicTask_o *v4; // x20
  BattlePerformance_o *perf; // x19
  BattleActorControl_o *AiNpcActor; // x19

  v4 = (PlayFieldMotionNpcBattleLogicTask_o *)this;
  if ( (byte_42ADAE0 & 1) == 0 )
  {
    this = (NpcBackStepBattleLogicTask_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADAE0 = 1;
  }
  if ( !logic )
    goto LABEL_12;
  perf = logic->fields.perf;
  this = (NpcBackStepBattleLogicTask_o *)PlayFieldMotionNpcBattleLogicTask__get_TargetId(v4, 0LL);
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
    sub_B52A5C(this, logic);
  }
  return 0;
}