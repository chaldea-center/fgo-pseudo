void __fastcall ReactTaskTargetNpc___ctor(ReactTaskTargetNpc_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ReactTaskTarget___ctor((ReactTaskTarget_o *)this, 0LL, v2);
}


BattleLogicTask_array *__fastcall ReactTaskTargetNpc__CreateReactionTasksPartial(
        ReactTaskTargetNpc_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  BattleLogicNpcAi_o *logicNpcAi; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4A5DDBA & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask___TypeInfo);
    byte_4A5DDBA = 1;
  }
  logicNpcAi = (BattleLogicNpcAi_o *)((__int64 (__fastcall *)(ReactTaskTargetNpc_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
                                       this,
                                       creator,
                                       logic,
                                       (unsigned int)priority,
                                       this->klass[1]._1.image);
  if ( ((unsigned __int8)logicNpcAi & 1) == 0 )
    return (BattleLogicTask_array *)sub_1B88658(BattleLogicTask___TypeInfo, 0LL);
  if ( !logic || !creator || (logicNpcAi = logic->fields.logicNpcAi) == 0LL )
    sub_1B8880C(logicNpcAi, v10);
  return BattleLogicNpcAi__MakeAiCheckTask(logicNpcAi, creator->fields._ProcState_k__BackingField, v11);
}


bool __fastcall ReactTaskTargetNpc__ExistTargetPriority(
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
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x8
  __int64 v16; // x8
  System_Collections_Generic_List_T__o *v17; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4A5DDBB & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_AiNpcBattleServantData___);
    sub_1B885B0(&System_Func_AiNpcBattleServantData__bool__TypeInfo);
    sub_1B885B0(&Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__);
    sub_1B885B0(&ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo);
    byte_4A5DDBB = 1;
  }
  v8 = sub_1B887FC(ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = creator,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)creator, v11, v12),
        *(_QWORD *)(v8 + 24) = logic,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)logic, v13, v14),
        v15 = *(_QWORD *)(v8 + 24),
        *(_DWORD *)(v8 + 32) = priority,
        !v15)
    || (v16 = *(_QWORD *)(v15 + 40)) == 0 )
  {
    sub_1B8880C(v9, v10);
  }
  v17 = *(System_Collections_Generic_List_T__o **)(v16 + 144);
  v18 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_AiNpcBattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           v17,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_AiNpcBattleServantData___);
}


void __fastcall ReactTaskTargetNpc___c__DisplayClass1_0___ctor(
        ReactTaskTargetNpc___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ReactTaskTargetNpc___c__DisplayClass1_0___ExistTargetPriority_b__0(
        ReactTaskTargetNpc___c__DisplayClass1_0_o *this,
        AiNpcBattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_1B8880C(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, AiNpcBattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}