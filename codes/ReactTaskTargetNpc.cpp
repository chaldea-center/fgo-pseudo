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
  __int64 v9; // x2
  BattleLogicNpcAi_o *logicNpcAi; // x0

  if ( (byte_40F82A7 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask___TypeInfo, creator);
    byte_40F82A7 = 1;
  }
  if ( (((__int64 (__fastcall *)(ReactTaskTargetNpc_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
          this,
          creator,
          logic,
          (unsigned int)priority,
          this->klass[1]._1.image) & 1) == 0 )
    return (BattleLogicTask_array *)sub_B17014(BattleLogicTask___TypeInfo, 0LL, v9);
  if ( !logic || !creator || (logicNpcAi = logic->fields.logicNpcAi) == 0LL )
    sub_B170D4();
  return BattleLogicNpcAi__MakeAiCheckTask(logicNpcAi, creator->fields._ProcState_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x8
  __int64 v30; // x8
  System_Collections_Generic_List_T__o *v31; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x20

  if ( (byte_40F82A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_AiNpcBattleServantData___, creator);
    sub_B16FFC(&Method_System_Func_AiNpcBattleServantData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_AiNpcBattleServantData__bool__TypeInfo, v9);
    sub_B16FFC(&Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__, v10);
    sub_B16FFC(&ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, v11);
    byte_40F82A8 = 1;
  }
  v12 = sub_B170CC(ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, creator, logic, *(_QWORD *)&priority, method);
  ReactTaskTargetNpc___c__DisplayClass1_0___ctor((ReactTaskTargetNpc___c__DisplayClass1_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = creator,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v12 + 16),
          (System_Int32_array **)creator,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        *(_QWORD *)(v12 + 24) = logic,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v12 + 24),
          (System_Int32_array **)logic,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        v29 = *(_QWORD *)(v12 + 24),
        *(_DWORD *)(v12 + 32) = priority,
        !v29)
    || (v30 = *(_QWORD *)(v29 + 32)) == 0 )
  {
    sub_B170D4();
  }
  v31 = *(System_Collections_Generic_List_T__o **)(v30 + 136);
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_AiNpcBattleServantData__bool__TypeInfo,
                                                                             v25,
                                                                             v26,
                                                                             v27,
                                                                             v28);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v12,
    Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_AiNpcBattleServantData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           v31,
           (System_Func_T__bool__o *)v32,
           (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_AiNpcBattleServantData___);
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
    sub_B170D4();
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, AiNpcBattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}