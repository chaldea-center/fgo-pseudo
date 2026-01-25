void NpcBackStepBattleLogicTask___ctor(
        NpcBackStepBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4CF1995 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9369/*"NPC_BACKSTEP"*/);
    byte_4CF1995 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9369/*"NPC_BACKSTEP"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}


bool NpcBackStepBattleLogicTask__IsMakeAble(
        NpcBackStepBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  PlayFieldMotionNpcBattleLogicTask_o *v4; // x20
  BattlePerformance_o *perf; // x19
  BattleActorControl_o *AiNpcActor; // x19

  v4 = (PlayFieldMotionNpcBattleLogicTask_o *)this;
  if ( (byte_4CF1996 & 1) == 0 )
  {
    this = (NpcBackStepBattleLogicTask_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1996 = 1;
  }
  if ( !logic )
    goto LABEL_11;
  perf = logic->fields.perf;
  this = (NpcBackStepBattleLogicTask_o *)PlayFieldMotionNpcBattleLogicTask__get_TargetId(v4, (const MethodInfo *)logic);
  if ( !perf )
    goto LABEL_11;
  AiNpcActor = BattlePerformance__GetAiNpcActor(perf, (int32_t)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (NpcBackStepBattleLogicTask_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AiNpcActor, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( AiNpcActor )
      return AiNpcActor->fields._IsStepInBattle_k__BackingField;
LABEL_11:
    sub_1C7BD40(this, logic);
  }
  return 0;
}