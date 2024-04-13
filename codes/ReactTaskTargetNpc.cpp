void __fastcall ReactTaskTargetNpc___ctor(ReactTaskTargetNpc_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall ReactTaskTargetNpc__CreateReactionTasksPartial(
        ReactTaskTargetNpc_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  BattleLogicNpcAi_o *logicNpcAi; // x0
  __int64 v10; // x1

  if ( (byte_42E6F8B & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask___TypeInfo, (_DWORD)creator, (_DWORD)logic, *(_QWORD *)&priority);
    byte_42E6F8B = 1;
  }
  logicNpcAi = (BattleLogicNpcAi_o *)((__int64 (__fastcall *)(ReactTaskTargetNpc_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
                                       this,
                                       creator,
                                       logic,
                                       (unsigned int)priority,
                                       this->klass[1]._1.image);
  if ( ((unsigned __int8)logicNpcAi & 1) == 0 )
    return (BattleLogicTask_array *)sub_B5D5DC(BattleLogicTask___TypeInfo, 0LL);
  if ( !logic || !creator || (logicNpcAi = logic->fields.logicNpcAi) == 0LL )
    sub_B5D69C(logicNpcAi, v10);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x8
  __int64 v36; // x8
  System_Collections_Generic_List_T__o *v37; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x20

  if ( (byte_42E6F8C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_AiNpcBattleServantData___, (_DWORD)creator, (_DWORD)logic, *(_QWORD *)&priority);
    sub_B5D5C4(&Method_System_Func_AiNpcBattleServantData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_AiNpcBattleServantData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__, v14, v15, v16);
    sub_B5D5C4(&ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo, v17, v18, v19);
    byte_42E6F8C = 1;
  }
  v20 = sub_B5D694(ReactTaskTargetNpc___c__DisplayClass1_0_TypeInfo);
  ReactTaskTargetNpc___c__DisplayClass1_0___ctor((ReactTaskTargetNpc___c__DisplayClass1_0_o *)v20, 0LL);
  if ( !v20
    || (*(_QWORD *)(v20 + 16) = creator,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v20 + 16),
          (System_Int32_array **)creator,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        *(_QWORD *)(v20 + 24) = logic,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v20 + 24),
          (System_Int32_array **)logic,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        v35 = *(_QWORD *)(v20 + 24),
        *(_DWORD *)(v20 + 32) = priority,
        !v35)
    || (v36 = *(_QWORD *)(v35 + 32)) == 0 )
  {
    sub_B5D69C(v21, v22);
  }
  v37 = *(System_Collections_Generic_List_T__o **)(v36 + 136);
  v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_AiNpcBattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v38,
    (Il2CppObject *)v20,
    Method_ReactTaskTargetNpc___c__DisplayClass1_0__ExistTargetPriority_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_AiNpcBattleServantData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           v37,
           (System_Func_T__bool__o *)v38,
           (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_AiNpcBattleServantData___);
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
    sub_B5D69C(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, AiNpcBattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}