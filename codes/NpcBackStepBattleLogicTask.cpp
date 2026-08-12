void NpcBackStepBattleLogicTask___ctor(
        NpcBackStepBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_5973D46 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9729/*"NPC_BACKSTEP"*/);
    byte_5973D46 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9729/*"NPC_BACKSTEP"*/,
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
  __int64 v6; // x1
  BattleActorControl_o *AiNpcActor; // x19

  v4 = (PlayFieldMotionNpcBattleLogicTask_o *)this;
  if ( (byte_5973D47 & 1) == 0 )
  {
    this = (NpcBackStepBattleLogicTask_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973D47 = 1;
  }
  if ( !logic )
    goto LABEL_11;
  perf = logic->fields.perf;
  this = (NpcBackStepBattleLogicTask_o *)PlayFieldMotionNpcBattleLogicTask__get_TargetId(v4, (const MethodInfo *)logic);
  if ( !perf )
    goto LABEL_11;
  AiNpcActor = BattlePerformance__GetAiNpcActor(perf, (int32_t)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  this = (NpcBackStepBattleLogicTask_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AiNpcActor, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( AiNpcActor )
      return AiNpcActor->fields._IsStepInBattle_k__BackingField;
LABEL_11:
    sub_2213CDC(this, logic);
  }
  return 0;
}