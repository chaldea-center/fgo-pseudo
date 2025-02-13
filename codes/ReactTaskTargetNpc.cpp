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

  if ( (byte_4BDF2F2 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask___TypeInfo);
    byte_4BDF2F2 = 1;
  }
  logicNpcAi = (BattleLogicNpcAi_o *)((__int64 (__fastcall *)(ReactTaskTargetNpc_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
                                       this,
                                       creator,
                                       logic,
                                       (unsigned int)priority,
                                       this->klass[1]._1.image);
  if ( ((unsigned __int8)logicNpcAi & 1) == 0 )
    return (BattleLogicTask_array *)sub_1C21EE0(BattleLogicTask___TypeInfo, 0LL);
  if ( !logic || !creator || (logicNpcAi = logic->fields.logicNpcAi) == 0LL )
    sub_1C22094(logicNpcAi, v10);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x8
  __int64 v24; // x8
  System_Collections_Generic_List_T__o *v25; // x19
  System_Func_object__bool__o *v26; // x20

  if ( (byte_4BDF2F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_AiNpcBattleServantData___);
    sub_1C21E38(&System_Func_AiNpcBattleServantData__bool__TypeInfo);
    sub_1C21E38(&Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__);
    sub_1C21E38(&ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo);
    byte_4BDF2F3 = 1;
  }
  v8 = sub_1C22084(ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = creator,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)creator, v11, v12, v13, v14, v15, v16),
        *(_QWORD *)(v8 + 24) = logic,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)logic, v17, v18, v19, v20, v21, v22),
        v23 = *(_QWORD *)(v8 + 24),
        *(_DWORD *)(v8 + 32) = priority,
        !v23)
    || (v24 = *(_QWORD *)(v23 + 40)) == 0 )
  {
    sub_1C22094(v9, v10);
  }
  v25 = *(System_Collections_Generic_List_T__o **)(v24 + 144);
  v26 = (System_Func_object__bool__o *)sub_1C22084(System_Func_AiNpcBattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v8,
    Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           v25,
           (System_Func_T__bool__o *)v26,
           (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_AiNpcBattleServantData___);
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
    sub_1C22094(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, AiNpcBattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}