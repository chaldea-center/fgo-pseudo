// local variable allocation has failed, the output may be wrong!
void __fastcall NpcBackStepBattleLogicTask___ctor(
        NpcBackStepBattleLogicTask_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4B18F22 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9443/*"NPC_BACKSTEP"*/, *(_QWORD *)&targetId, isForcedSpeedOne);
    byte_4B18F22 = 1;
  }
  PlayFieldMotionNpcBattleLogicTask___ctor(
    (PlayFieldMotionNpcBattleLogicTask_o *)this,
    (System_String_o *)StringLiteral_9443/*"NPC_BACKSTEP"*/,
    targetId,
    isForcedSpeedOne,
    v4);
}


bool __fastcall NpcBackStepBattleLogicTask__IsMakeAble(
        NpcBackStepBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  PlayFieldMotionNpcBattleLogicTask_o *v4; // x20
  BattlePerformance_o *perf; // x19
  __int64 v6; // x1
  BattleActorControl_o *AiNpcActor; // x19

  v4 = (PlayFieldMotionNpcBattleLogicTask_o *)this;
  if ( (byte_4B18F23 & 1) == 0 )
  {
    this = (NpcBackStepBattleLogicTask_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, logic, method);
    byte_4B18F23 = 1;
  }
  if ( !logic )
    goto LABEL_11;
  perf = logic->fields.perf;
  this = (NpcBackStepBattleLogicTask_o *)PlayFieldMotionNpcBattleLogicTask__get_TargetId(v4, (const MethodInfo *)logic);
  if ( !perf )
    goto LABEL_11;
  AiNpcActor = BattlePerformance__GetAiNpcActor(perf, (int32_t)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  this = (NpcBackStepBattleLogicTask_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AiNpcActor, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( AiNpcActor )
      return AiNpcActor->fields._IsStepInBattle_k__BackingField;
LABEL_11:
    sub_1BCAA3C(this, logic);
  }
  return 0;
}