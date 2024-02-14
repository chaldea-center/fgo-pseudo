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

  if ( (byte_4212F09 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask___TypeInfo, creator);
    byte_4212F09 = 1;
  }
  logicNpcAi = (BattleLogicNpcAi_o *)((__int64 (__fastcall *)(ReactTaskTargetNpc_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
                                       this,
                                       creator,
                                       logic,
                                       (unsigned int)priority,
                                       this->klass[1]._1.image);
  if ( ((unsigned __int8)logicNpcAi & 1) == 0 )
    return (BattleLogicTask_array *)sub_B0D8BC(BattleLogicTask___TypeInfo, 0LL);
  if ( !logic || !creator || (logicNpcAi = logic->fields.logicNpcAi) == 0LL )
    sub_B0D97C(logicNpcAi);
  return BattleLogicNpcAi__MakeAiCheckTask(logicNpcAi, creator->fields._ProcState_k__BackingField, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x8
  __int64 v29; // x8
  System_Collections_Generic_List_T__o *v30; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x20

  if ( (byte_4212F0A & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_AiNpcBattleServantData___, creator);
    sub_B0D8A4(&Method_System_Func_AiNpcBattleServantData__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_AiNpcBattleServantData__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__, v10);
    sub_B0D8A4(&ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, v11);
    byte_4212F0A = 1;
  }
  v12 = sub_B0D974(ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, creator, logic);
  ReactTaskTargetNpc___c__DisplayClass1_0___ctor((ReactTaskTargetNpc___c__DisplayClass1_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = creator,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v12 + 16),
          (System_Int32_array **)creator,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        *(_QWORD *)(v12 + 24) = logic,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v12 + 24),
          (System_Int32_array **)logic,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        v28 = *(_QWORD *)(v12 + 24),
        *(_DWORD *)(v12 + 32) = priority,
        !v28)
    || (v29 = *(_QWORD *)(v28 + 32)) == 0 )
  {
    sub_B0D97C(v13);
  }
  v30 = *(System_Collections_Generic_List_T__o **)(v29 + 136);
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_AiNpcBattleServantData__bool__TypeInfo,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v12,
    Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_AiNpcBattleServantData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           v30,
           (System_Func_T__bool__o *)v31,
           (const MethodInfo_1707138 *)Method_BasicHelper_Any_AiNpcBattleServantData___);
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
    sub_B0D97C(0LL);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, AiNpcBattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}