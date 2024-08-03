void __fastcall ReactTaskTargetNpc___ctor(ReactTaskTargetNpc_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicTask_array *__fastcall ReactTaskTargetNpc__CreateReactionTasksPartial(
        ReactTaskTargetNpc_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  BattleLogicNpcAi_o *logicNpcAi; // x0
  const MethodInfo *v10; // x2

  if ( (byte_49FEFFB & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask___TypeInfo, creator);
    byte_49FEFFB = 1;
  }
  logicNpcAi = (BattleLogicNpcAi_o *)((__int64 (__fastcall *)(ReactTaskTargetNpc_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
                                       this,
                                       creator,
                                       logic,
                                       (unsigned int)priority,
                                       this->klass[1]._1.image);
  if ( ((unsigned __int8)logicNpcAi & 1) == 0 )
    return (BattleLogicTask_array *)sub_1B64170(BattleLogicTask___TypeInfo, 0LL);
  if ( !logic || !creator || (logicNpcAi = logic->fields.logicNpcAi) == 0LL )
    sub_1B64324(logicNpcAi);
  return BattleLogicNpcAi__MakeAiCheckTask(logicNpcAi, creator->fields._ProcState_k__BackingField, v10);
}


bool __fastcall ReactTaskTargetNpc__ExistTargetPriority(
        ReactTaskTargetNpc_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  __int64 v20; // x8
  System_Collections_Generic_List_T__o *v21; // x19
  System_Func_object__bool__o *v22; // x20

  if ( (byte_49FEFFC & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_AiNpcBattleServantData___, creator);
    sub_1B640C8(&System_Func_AiNpcBattleServantData__bool__TypeInfo, v8);
    sub_1B640C8(&Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__, v9);
    sub_1B640C8(&ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, v10);
    byte_49FEFFC = 1;
  }
  v11 = sub_1B64314(ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, creator, logic);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = creator,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)creator, v13, v14),
        *(_QWORD *)(v11 + 24) = logic,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)logic, v15, v16),
        v19 = *(_QWORD *)(v11 + 24),
        *(_DWORD *)(v11 + 32) = priority,
        !v19)
    || (v20 = *(_QWORD *)(v19 + 40)) == 0 )
  {
    sub_1B64324(v12);
  }
  v21 = *(System_Collections_Generic_List_T__o **)(v20 + 144);
  v22 = (System_Func_object__bool__o *)sub_1B64314(System_Func_AiNpcBattleServantData__bool__TypeInfo, v17, v18);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v11,
    Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           v21,
           (System_Func_T__bool__o *)v22,
           (const MethodInfo_2E24870 *)Method_BasicHelper_Any_AiNpcBattleServantData___);
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
    sub_1B64324(0LL);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, AiNpcBattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}