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
  __int64 v10; // x1

  if ( (byte_41860FE & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask___TypeInfo, creator);
    byte_41860FE = 1;
  }
  logicNpcAi = (BattleLogicNpcAi_o *)((__int64 (__fastcall *)(ReactTaskTargetNpc_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
                                       this,
                                       creator,
                                       logic,
                                       (unsigned int)priority,
                                       this->klass[1]._1.image);
  if ( ((unsigned __int8)logicNpcAi & 1) == 0 )
    return (BattleLogicTask_array *)sub_B2C374(BattleLogicTask___TypeInfo, 0LL);
  if ( !logic || !creator || (logicNpcAi = logic->fields.logicNpcAi) == 0LL )
    sub_B2C434(logicNpcAi, v10);
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
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x8
  __int64 v28; // x8
  System_Collections_Generic_List_T__o *v29; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x20

  if ( (byte_41860FF & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_AiNpcBattleServantData___, creator);
    sub_B2C35C(&Method_System_Func_AiNpcBattleServantData__bool___ctor__, v8);
    sub_B2C35C(&System_Func_AiNpcBattleServantData__bool__TypeInfo, v9);
    sub_B2C35C(&Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__, v10);
    sub_B2C35C(&ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, v11);
    byte_41860FF = 1;
  }
  v12 = sub_B2C42C(ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo);
  ReactTaskTargetNpc___c__DisplayClass1_0___ctor((ReactTaskTargetNpc___c__DisplayClass1_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = creator,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v12 + 16),
          (System_Int32_array **)creator,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        *(_QWORD *)(v12 + 24) = logic,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v12 + 24),
          (System_Int32_array **)logic,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        v27 = *(_QWORD *)(v12 + 24),
        *(_DWORD *)(v12 + 32) = priority,
        !v27)
    || (v28 = *(_QWORD *)(v27 + 32)) == 0 )
  {
    sub_B2C434(v13, v14);
  }
  v29 = *(System_Collections_Generic_List_T__o **)(v28 + 136);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_AiNpcBattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v12,
    Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_AiNpcBattleServantData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           v29,
           (System_Func_T__bool__o *)v30,
           (const MethodInfo_17266AC *)Method_BasicHelper_Any_AiNpcBattleServantData___);
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
    sub_B2C434(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, AiNpcBattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}