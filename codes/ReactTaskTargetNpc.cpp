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

  if ( (byte_4C00580 & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogicTask___TypeInfo, creator);
    byte_4C00580 = 1;
  }
  logicNpcAi = (BattleLogicNpcAi_o *)((__int64 (__fastcall *)(ReactTaskTargetNpc_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
                                       this,
                                       creator,
                                       logic,
                                       (unsigned int)priority,
                                       this->klass[1]._1.image);
  if ( ((unsigned __int8)logicNpcAi & 1) == 0 )
    return (BattleLogicTask_array *)sub_1C2E1D4(BattleLogicTask___TypeInfo, 0LL);
  if ( !logic || !creator || (logicNpcAi = logic->fields.logicNpcAi) == 0LL )
    sub_1C2E388(logicNpcAi, v10);
  return BattleLogicNpcAi__MakeAiCheckTask(logicNpcAi, creator->fields._ProcState_k__BackingField, v11);
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
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x8
  __int64 v27; // x8
  System_Collections_Generic_List_T__o *v28; // x19
  System_Func_object__bool__o *v29; // x20

  if ( (byte_4C00581 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_AiNpcBattleServantData___, creator);
    sub_1C2E12C(&System_Func_AiNpcBattleServantData__bool__TypeInfo, v8);
    sub_1C2E12C(&Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__, v9);
    sub_1C2E12C(&ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, v10);
    byte_4C00581 = 1;
  }
  v11 = sub_1C2E378(ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = creator,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)creator, v14, v15, v16, v17, v18, v19),
        *(_QWORD *)(v11 + 24) = logic,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)logic, v20, v21, v22, v23, v24, v25),
        v26 = *(_QWORD *)(v11 + 24),
        *(_DWORD *)(v11 + 32) = priority,
        !v26)
    || (v27 = *(_QWORD *)(v26 + 40)) == 0 )
  {
    sub_1C2E388(v12, v13);
  }
  v28 = *(System_Collections_Generic_List_T__o **)(v27 + 144);
  v29 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_AiNpcBattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v11,
    Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           v28,
           (System_Func_T__bool__o *)v29,
           (const MethodInfo_2FBC23C *)Method_BasicHelper_Any_AiNpcBattleServantData___);
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
    sub_1C2E388(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, AiNpcBattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}