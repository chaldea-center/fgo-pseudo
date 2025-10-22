void ReactTaskTargetNpc___ctor(ReactTaskTargetNpc_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ReactTaskTarget___ctor((ReactTaskTarget_o *)this, 0, v2);
}


BattleLogicTask_array *ReactTaskTargetNpc__CreateReactionTasksPartial(
        ReactTaskTargetNpc_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  BattleLogicNpcAi_o *logicNpcAi; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4C59FF1 & 1) == 0 )
  {
    sub_1C3E564(&BattleLogicTask___TypeInfo);
    byte_4C59FF1 = 1;
  }
  logicNpcAi = (BattleLogicNpcAi_o *)((__int64 (__fastcall *)(ReactTaskTargetNpc_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_ExistTargetPriority.methodPtr)(
                                       this,
                                       creator,
                                       logic,
                                       (unsigned int)priority,
                                       this->klass->vtable._7_ExistTargetPriority.method);
  if ( ((unsigned __int8)logicNpcAi & 1) == 0 )
    return (BattleLogicTask_array *)sub_1C3E60C(BattleLogicTask___TypeInfo, 0);
  if ( !logic || !creator || (logicNpcAi = logic->fields.logicNpcAi) == 0 )
    sub_1C3E7C0(logicNpcAi, v10);
  return BattleLogicNpcAi__MakeAiCheckTask(logicNpcAi, creator->fields._ProcState_k__BackingField, v11);
}


bool ReactTaskTargetNpc__ExistTargetPriority(
        ReactTaskTargetNpc_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  __int64 v16; // x8
  System_Collections_Generic_List_T__o *v17; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4C59FF2 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_AiNpcBattleServantData___);
    sub_1C3E564(&System_Func_AiNpcBattleServantData__bool__TypeInfo);
    sub_1C3E564(&Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__);
    sub_1C3E564(&ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo);
    byte_4C59FF2 = 1;
  }
  v8 = sub_1C3E7B0(ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = creator,
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 16), (int32_t)creator, v11, v12),
        *(_QWORD *)(v8 + 24) = logic,
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 24), (int32_t)logic, v13, v14),
        v15 = *(_QWORD *)(v8 + 24),
        *(_DWORD *)(v8 + 32) = priority,
        !v15)
    || (v16 = *(_QWORD *)(v15 + 40)) == 0 )
  {
    sub_1C3E7C0(v9, v10);
  }
  v17 = *(System_Collections_Generic_List_T__o **)(v16 + 144);
  v18 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_AiNpcBattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__,
    0);
  return BasicHelper__Any_object_(
           v17,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_AiNpcBattleServantData___);
}


void ReactTaskTargetNpc___c__DisplayClass1_0___ctor(
        ReactTaskTargetNpc___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ReactTaskTargetNpc___c__DisplayClass1_0___ExistTargetPriority_b__0(
        ReactTaskTargetNpc___c__DisplayClass1_0_o *this,
        AiNpcBattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_1C3E7C0(0, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, AiNpcBattleServantData_o *, _QWORD, const MethodInfo *))creator->klass->vtable._7_IsCreatable.methodPtr)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._7_IsCreatable.method);
}